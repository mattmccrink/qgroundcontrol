/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


#include "PX4AutoPilotPlugin.h"
#include "PX4AirframeLoader.h"
#include "PX4AdvancedFlightModesController.h"
#include "AirframeComponentController.h"
#include "UAS.h"
#include "FirmwarePlugin/PX4/PX4ParameterMetaData.h"  // FIXME: Hack
#include "FirmwarePlugin/PX4/PX4FirmwarePlugin.h"  // FIXME: Hack
#include "QGCApplication.h"
#include "FlightModesComponent.h"
#include "PX4RadioComponent.h"
#include "PX4TuningComponent.h"
#include "PowerComponent.h"
#include "SafetyComponent.h"
#include "SensorsComponent.h"

/// @file
///     @brief This is the AutoPilotPlugin implementatin for the MAV_AUTOPILOT_PX4 type.
///     @author Don Gagne <don@thegagnes.com>

PX4AutoPilotPlugin::PX4AutoPilotPlugin(Vehicle* vehicle, QObject* parent)
    : AutoPilotPlugin(vehicle, parent)
    , _incorrectParameterVersion(false)
    , _airframeComponent(NULL)
    , _radioComponent(NULL)
    , _esp8266Component(NULL)
    , _flightModesComponent(NULL)
    , _sensorsComponent(NULL)
    , _safetyComponent(NULL)
    , _powerComponent(NULL)
    , _motorComponent(NULL)
    , _tuningComponent(NULL)
    , _mixersComponent(NULL)
    , _syslinkComponent(NULL)
{
    if (!vehicle) {
        qWarning() << "Internal error";
        return;
    }

    _airframeFacts = new PX4AirframeLoader(this, _vehicle->uas(), this);
    Q_CHECK_PTR(_airframeFacts);

    PX4AirframeLoader::loadAirframeMetaData();
}

PX4AutoPilotPlugin::~PX4AutoPilotPlugin()
{
    delete _airframeFacts;
}

const QVariantList& PX4AutoPilotPlugin::vehicleComponents(void)
{
    if (_components.count() == 0 && !_incorrectParameterVersion) {
        if (_vehicle) {
            if (_vehicle->parameterManager()->parametersReady()) {
                _airframeComponent = new AirframeComponent(_vehicle, this);
                _airframeComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_airframeComponent));

                _radioComponent = new PX4RadioComponent(_vehicle, this);
                _radioComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_radioComponent));

                if (!_vehicle->hilMode()) {
                    _sensorsComponent = new SensorsComponent(_vehicle, this);
                    _sensorsComponent->setupTriggerSignals();
                    _components.append(QVariant::fromValue((VehicleComponent*)_sensorsComponent));
                }

                _flightModesComponent = new FlightModesComponent(_vehicle, this);
                _flightModesComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_flightModesComponent));

                _powerComponent = new PowerComponent(_vehicle, this);
                _powerComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_powerComponent));

#if 0
                // Coming soon
                _motorComponent = new MotorComponent(_vehicle, this);
                _motorComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_motorComponent));
#endif

                _safetyComponent = new SafetyComponent(_vehicle, this);
                _safetyComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_safetyComponent));

                _tuningComponent = new PX4TuningComponent(_vehicle, this);
                _tuningComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_tuningComponent));

#if 0
                // Coming soon
                _mixersComponent = new MixersComponent(_vehicle, this);
                _mixersComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_mixersComponent));
#endif

                //-- Is there support for cameras?
                if(_vehicle->parameterManager()->parameterExists(_vehicle->id(), "TRIG_MODE")) {
                    _cameraComponent = new CameraComponent(_vehicle, this);
                    _cameraComponent->setupTriggerSignals();
                    _components.append(QVariant::fromValue((VehicleComponent*)_cameraComponent));
                }

                //-- Is there an ESP8266 Connected?
                if(_vehicle->parameterManager()->parameterExists(MAV_COMP_ID_UDP_BRIDGE, "SW_VER")) {
                    _esp8266Component = new ESP8266Component(_vehicle, this);
                    _esp8266Component->setupTriggerSignals();
                    _components.append(QVariant::fromValue((VehicleComponent*)_esp8266Component));
                }
            } else {
                qWarning() << "Call to vehicleCompenents prior to parametersReady";
            }

            if(_vehicle->parameterManager()->parameterExists(_vehicle->id(), "SLNK_RADIO_CHAN")) {
                _syslinkComponent = new SyslinkComponent(_vehicle, this);
                _syslinkComponent->setupTriggerSignals();
                _components.append(QVariant::fromValue((VehicleComponent*)_syslinkComponent));
            }
        } else {
            qWarning() << "Internal error";
        }
    }

    return _components;
}

void PX4AutoPilotPlugin::parametersReadyPreChecks(void)
{
    // Base class must be called
    AutoPilotPlugin::parametersReadyPreChecks();

    // Check for older parameter version set
    // FIXME: Firmware is moving to version stamp parameter set. Once that is complete the version stamp
    // should be used instead.
    if (_vehicle->parameterManager()->parameterExists(FactSystem::defaultComponentId, "SENS_GYRO_XOFF") ||
            _vehicle->parameterManager()->parameterExists(FactSystem::defaultComponentId, "COM_DL_LOSS_EN")) {
        _incorrectParameterVersion = true;
        qgcApp()->showMessage("This version of GroundControl can only perform vehicle setup on a newer version of firmware. "
                              "Please perform a Firmware Upgrade if you wish to use Vehicle Setup.");
    }
}

QString PX4AutoPilotPlugin::prerequisiteSetup(VehicleComponent* component) const
{
    bool requiresAirframeCheck = false;

    if (qobject_cast<const FlightModesComponent*>(component)) {
        if (_vehicle->parameterManager()->getParameter(-1, "COM_RC_IN_MODE")->rawValue().toInt() == 1) {
            // No RC input
            return QString();
        } else {
            if (_airframeComponent && !_airframeComponent->setupComplete()) {
                return _airframeComponent->name();
            } else if (_radioComponent && !_radioComponent->setupComplete()) {
                return _radioComponent->name();
            } else if (_sensorsComponent && !_vehicle->hilMode() && !_sensorsComponent->setupComplete()) {
                return _sensorsComponent->name();
            }
        }
    } else if (qobject_cast<const PX4RadioComponent*>(component)) {
        if (_vehicle->parameterManager()->getParameter(-1, "COM_RC_IN_MODE")->rawValue().toInt() != 1) {
            requiresAirframeCheck = true;
        }
    } else if (qobject_cast<const PX4TuningComponent*>(component)) {
        requiresAirframeCheck = true;
    } else if (qobject_cast<const PowerComponent*>(component)) {
        requiresAirframeCheck = true;
    } else if (qobject_cast<const SafetyComponent*>(component)) {
        requiresAirframeCheck = true;
    } else if (qobject_cast<const SensorsComponent*>(component)) {
        requiresAirframeCheck = true;
    }

    if (requiresAirframeCheck) {
        if (_airframeComponent && !_airframeComponent->setupComplete()) {
            return _airframeComponent->name();
        }
    }

    return QString();
}
