/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


import QtQuick          2.3
import QtQuick.Controls 1.2

import QGroundControl.Controls      1.0
import QGroundControl.ScreenTools   1.0
import QGroundControl.FactSystem    1.0
import QGroundControl.Controllers   1.0
import QGroundControl.Palette       1.0
import QGroundControl               1.0

QGCFlickable {
    id:                 _root
    height:             Math.min(maxHeight, innerItem.height)
    contentHeight:      innerItem.height
    flickableDirection: Flickable.VerticalFlick
    clip:               true

    property color  textColor
    property color  backgroundColor
    property var    maxHeight

    property var    _activeVehicle: QGroundControl.multiVehicleManager.activeVehicle ? QGroundControl.multiVehicleManager.activeVehicle : QGroundControl.multiVehicleManager.offlineEditingVehicle
    property real   _margins:       ScreenTools.defaultFontPixelWidth / 2
    property real   _barWidth:      Math.round(ScreenTools.defaultFontPixelWidth * 4)

    readonly property real _barMinimum:     0.0
    readonly property real _barMaximum:     90.0
    readonly property real _barBadValue:    60.0
    readonly property real _gaugeheight:    100.0

    QGCPalette { id:qgcPal; colorGroupEnabled: true }

    MouseArea {
        anchors.fill:   parent
        onClicked:      showNextPage()
    }

    Item {
        id:     innerItem
        width:  parent.width
        height: barRow.y + barRow.height

        QGCLabel {
            id:     title
            color:  textColor
            text:   qsTr("Turbine")
            anchors.horizontalCenter: barRow.horizontalCenter
        }

        Row {
            id:                 barRow
            anchors.margins:    _margins
            anchors.top:        title.bottom
            anchors.left:       parent.left
            spacing:            _margins

            Column {
                ProgressBar {
                    id:             xBar
                    height:         _gaugeheight
                    orientation:    Qt.Vertical
                    minimumValue:   50000
                    maximumValue:   130000
                    value:          _activeVehicle ? _activeVehicle.turbine.RPM.value : 0
                }

                QGCLabel {
                    id:     xBarLabel
                    color:  textColor
                    text:   "RPM"
                    anchors.horizontalCenter: xBar.horizontalCenter
                }
            }

            Column {
                ProgressBar {
                    id:             yBar
                    height:         _gaugeheight
                    orientation:    Qt.Vertical
                    minimumValue:   500
                    maximumValue:   800
                    value:          _activeVehicle ? _activeVehicle.turbine.EGT.value : 0
                }

                QGCLabel {
                    anchors.horizontalCenter: yBar.horizontalCenter
                    color:  textColor
                    text:   "EGT"
                }
            }

            Column {
                ProgressBar {
                    id:             zBar
                    height:         _gaugeheight
                    orientation:    Qt.Vertical
                    minimumValue:   0
                    maximumValue:   16000
                    value:          _activeVehicle ? _activeVehicle.turbine.fuelRemaining.value : 0
                }

                QGCLabel {
                    anchors.horizontalCenter: zBar.horizontalCenter
                    color:  textColor
                    text:   "Fuel"
                }
            }
        } // Row

        QGCLabel {
            id:                 clipLabel
            anchors.margins:    _margins
            anchors.left:       barRow.right
            anchors.right:      parent.right
            color:              textColor
            text:               qsTr("Turbine state")
            horizontalAlignment: Text.AlignHCenter
        }

        Column {
            id:             clipColumn
            anchors.top:    barRow.top
            anchors.horizontalCenter: clipLabel.horizontalCenter

            QGCLabel {
                text: (_activeVehicle ? turbine_status[_activeVehicle.turbine.turbineState.value]: "")
                color: textColor
            }

//            QGCLabel {
//                text: qsTr("Accel 2: ") + (_activeVehicle ? _activeVehicle.vibration.clipCount2.valueString : "")
//                color: textColor
//            }

//            QGCLabel {
//                text: qsTr("Accel 2: ") + (_activeVehicle ? _activeVehicle.vibration.clipCount3.valueString : "")
//                color: textColor
//            }
        }

        // Not available overlay
        Rectangle {
            anchors.fill:   parent
            color:          backgroundColor
            opacity:        0.75
            visible:        _activeVehicle ? isNaN(_activeVehicle.turbine.RPM.value) : false

            QGCLabel {
                anchors.fill:   parent
                text:           qsTr("Not Available")
                color:          textColor
                horizontalAlignment:    Text.AlignHCenter
                verticalAlignment:      Text.AlignVCenter
            }
        }
    } // Item

    property var turbine_status: ["Off",
        "Wait for RPM",
        "Ignite",
        "Accelerate",
        "Stabilize",
        "Learn High",
        "Learn Low",
        "---",
        "Slow Down",
        "Not Used",
        "Auto Off",
        "Run",
        "Acceleration Delay",
        "Speed Control Active",
        "",
        "PreHeat 1",
        "PreHeat2",
        "Main FS Start",
        "",
        "Kero Full On"]

} // QGCFLickable
