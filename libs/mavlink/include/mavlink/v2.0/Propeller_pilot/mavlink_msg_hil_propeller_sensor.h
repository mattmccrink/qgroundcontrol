#pragma once
// MESSAGE HIL_PROPELLER_SENSOR PACKING

#define MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR 236

MAVPACKED(
typedef struct __mavlink_hil_propeller_sensor_t {
 uint64_t time_usec; /*< Timestamp (microseconds, synced to UNIX time or since system boot)*/
 uint32_t xacc; /*< X acceleration (m/s^2)*/
 uint32_t yacc; /*< Y acceleration (m/s^2)*/
 uint32_t zacc; /*< Z acceleration (m/s^2)*/
 uint32_t xgyro; /*< Angular speed around X axis in body frame (rad / sec)*/
 uint32_t ygyro; /*< Angular speed around Y axis in body frame (rad / sec)*/
 uint32_t zgyro; /*< Angular speed around Z axis in body frame (rad / sec)*/
 uint32_t xmag; /*< X Magnetic field (Gauss)*/
 uint32_t ymag; /*< Y Magnetic field (Gauss)*/
 uint32_t zmag; /*< Z Magnetic field (Gauss)*/
 uint32_t abs_pressure; /*< Absolute pressure in millibar*/
 uint32_t diff_pressure; /*< Differential pressure (airspeed) in millibar*/
 uint32_t pressure_alt; /*< Altitude calculated from pressure*/
 uint32_t temperature; /*< Temperature in degrees celsius*/
 uint32_t fields_updated; /*< Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature*/
}) mavlink_hil_propeller_sensor_t;

#define MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN 64
#define MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN 64
#define MAVLINK_MSG_ID_236_LEN 64
#define MAVLINK_MSG_ID_236_MIN_LEN 64

#define MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC 229
#define MAVLINK_MSG_ID_236_CRC 229



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_PROPELLER_SENSOR { \
    236, \
    "HIL_PROPELLER_SENSOR", \
    15, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_propeller_sensor_t, time_usec) }, \
         { "xacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hil_propeller_sensor_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_hil_propeller_sensor_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_hil_propeller_sensor_t, zacc) }, \
         { "xgyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_hil_propeller_sensor_t, xgyro) }, \
         { "ygyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_hil_propeller_sensor_t, ygyro) }, \
         { "zgyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_hil_propeller_sensor_t, zgyro) }, \
         { "xmag", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_hil_propeller_sensor_t, xmag) }, \
         { "ymag", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_hil_propeller_sensor_t, ymag) }, \
         { "zmag", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_hil_propeller_sensor_t, zmag) }, \
         { "abs_pressure", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_hil_propeller_sensor_t, abs_pressure) }, \
         { "diff_pressure", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_hil_propeller_sensor_t, diff_pressure) }, \
         { "pressure_alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_hil_propeller_sensor_t, pressure_alt) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_hil_propeller_sensor_t, temperature) }, \
         { "fields_updated", NULL, MAVLINK_TYPE_UINT32_T, 0, 60, offsetof(mavlink_hil_propeller_sensor_t, fields_updated) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_PROPELLER_SENSOR { \
    "HIL_PROPELLER_SENSOR", \
    15, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_propeller_sensor_t, time_usec) }, \
         { "xacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hil_propeller_sensor_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_hil_propeller_sensor_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_hil_propeller_sensor_t, zacc) }, \
         { "xgyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_hil_propeller_sensor_t, xgyro) }, \
         { "ygyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_hil_propeller_sensor_t, ygyro) }, \
         { "zgyro", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_hil_propeller_sensor_t, zgyro) }, \
         { "xmag", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_hil_propeller_sensor_t, xmag) }, \
         { "ymag", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_hil_propeller_sensor_t, ymag) }, \
         { "zmag", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_hil_propeller_sensor_t, zmag) }, \
         { "abs_pressure", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_hil_propeller_sensor_t, abs_pressure) }, \
         { "diff_pressure", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_hil_propeller_sensor_t, diff_pressure) }, \
         { "pressure_alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_hil_propeller_sensor_t, pressure_alt) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_hil_propeller_sensor_t, temperature) }, \
         { "fields_updated", NULL, MAVLINK_TYPE_UINT32_T, 0, 60, offsetof(mavlink_hil_propeller_sensor_t, fields_updated) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_propeller_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param xacc X acceleration (m/s^2)
 * @param yacc Y acceleration (m/s^2)
 * @param zacc Z acceleration (m/s^2)
 * @param xgyro Angular speed around X axis in body frame (rad / sec)
 * @param ygyro Angular speed around Y axis in body frame (rad / sec)
 * @param zgyro Angular speed around Z axis in body frame (rad / sec)
 * @param xmag X Magnetic field (Gauss)
 * @param ymag Y Magnetic field (Gauss)
 * @param zmag Z Magnetic field (Gauss)
 * @param abs_pressure Absolute pressure in millibar
 * @param diff_pressure Differential pressure (airspeed) in millibar
 * @param pressure_alt Altitude calculated from pressure
 * @param temperature Temperature in degrees celsius
 * @param fields_updated Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_propeller_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t xacc, uint32_t yacc, uint32_t zacc, uint32_t xgyro, uint32_t ygyro, uint32_t zgyro, uint32_t xmag, uint32_t ymag, uint32_t zmag, uint32_t abs_pressure, uint32_t diff_pressure, uint32_t pressure_alt, uint32_t temperature, uint32_t fields_updated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, xacc);
    _mav_put_uint32_t(buf, 12, yacc);
    _mav_put_uint32_t(buf, 16, zacc);
    _mav_put_uint32_t(buf, 20, xgyro);
    _mav_put_uint32_t(buf, 24, ygyro);
    _mav_put_uint32_t(buf, 28, zgyro);
    _mav_put_uint32_t(buf, 32, xmag);
    _mav_put_uint32_t(buf, 36, ymag);
    _mav_put_uint32_t(buf, 40, zmag);
    _mav_put_uint32_t(buf, 44, abs_pressure);
    _mav_put_uint32_t(buf, 48, diff_pressure);
    _mav_put_uint32_t(buf, 52, pressure_alt);
    _mav_put_uint32_t(buf, 56, temperature);
    _mav_put_uint32_t(buf, 60, fields_updated);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN);
#else
    mavlink_hil_propeller_sensor_t packet;
    packet.time_usec = time_usec;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.xgyro = xgyro;
    packet.ygyro = ygyro;
    packet.zgyro = zgyro;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    packet.abs_pressure = abs_pressure;
    packet.diff_pressure = diff_pressure;
    packet.pressure_alt = pressure_alt;
    packet.temperature = temperature;
    packet.fields_updated = fields_updated;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
}

/**
 * @brief Pack a hil_propeller_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param xacc X acceleration (m/s^2)
 * @param yacc Y acceleration (m/s^2)
 * @param zacc Z acceleration (m/s^2)
 * @param xgyro Angular speed around X axis in body frame (rad / sec)
 * @param ygyro Angular speed around Y axis in body frame (rad / sec)
 * @param zgyro Angular speed around Z axis in body frame (rad / sec)
 * @param xmag X Magnetic field (Gauss)
 * @param ymag Y Magnetic field (Gauss)
 * @param zmag Z Magnetic field (Gauss)
 * @param abs_pressure Absolute pressure in millibar
 * @param diff_pressure Differential pressure (airspeed) in millibar
 * @param pressure_alt Altitude calculated from pressure
 * @param temperature Temperature in degrees celsius
 * @param fields_updated Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_propeller_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t xacc,uint32_t yacc,uint32_t zacc,uint32_t xgyro,uint32_t ygyro,uint32_t zgyro,uint32_t xmag,uint32_t ymag,uint32_t zmag,uint32_t abs_pressure,uint32_t diff_pressure,uint32_t pressure_alt,uint32_t temperature,uint32_t fields_updated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, xacc);
    _mav_put_uint32_t(buf, 12, yacc);
    _mav_put_uint32_t(buf, 16, zacc);
    _mav_put_uint32_t(buf, 20, xgyro);
    _mav_put_uint32_t(buf, 24, ygyro);
    _mav_put_uint32_t(buf, 28, zgyro);
    _mav_put_uint32_t(buf, 32, xmag);
    _mav_put_uint32_t(buf, 36, ymag);
    _mav_put_uint32_t(buf, 40, zmag);
    _mav_put_uint32_t(buf, 44, abs_pressure);
    _mav_put_uint32_t(buf, 48, diff_pressure);
    _mav_put_uint32_t(buf, 52, pressure_alt);
    _mav_put_uint32_t(buf, 56, temperature);
    _mav_put_uint32_t(buf, 60, fields_updated);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN);
#else
    mavlink_hil_propeller_sensor_t packet;
    packet.time_usec = time_usec;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.xgyro = xgyro;
    packet.ygyro = ygyro;
    packet.zgyro = zgyro;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    packet.abs_pressure = abs_pressure;
    packet.diff_pressure = diff_pressure;
    packet.pressure_alt = pressure_alt;
    packet.temperature = temperature;
    packet.fields_updated = fields_updated;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
}

/**
 * @brief Encode a hil_propeller_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_propeller_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_propeller_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_propeller_sensor_t* hil_propeller_sensor)
{
    return mavlink_msg_hil_propeller_sensor_pack(system_id, component_id, msg, hil_propeller_sensor->time_usec, hil_propeller_sensor->xacc, hil_propeller_sensor->yacc, hil_propeller_sensor->zacc, hil_propeller_sensor->xgyro, hil_propeller_sensor->ygyro, hil_propeller_sensor->zgyro, hil_propeller_sensor->xmag, hil_propeller_sensor->ymag, hil_propeller_sensor->zmag, hil_propeller_sensor->abs_pressure, hil_propeller_sensor->diff_pressure, hil_propeller_sensor->pressure_alt, hil_propeller_sensor->temperature, hil_propeller_sensor->fields_updated);
}

/**
 * @brief Encode a hil_propeller_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_propeller_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_propeller_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_propeller_sensor_t* hil_propeller_sensor)
{
    return mavlink_msg_hil_propeller_sensor_pack_chan(system_id, component_id, chan, msg, hil_propeller_sensor->time_usec, hil_propeller_sensor->xacc, hil_propeller_sensor->yacc, hil_propeller_sensor->zacc, hil_propeller_sensor->xgyro, hil_propeller_sensor->ygyro, hil_propeller_sensor->zgyro, hil_propeller_sensor->xmag, hil_propeller_sensor->ymag, hil_propeller_sensor->zmag, hil_propeller_sensor->abs_pressure, hil_propeller_sensor->diff_pressure, hil_propeller_sensor->pressure_alt, hil_propeller_sensor->temperature, hil_propeller_sensor->fields_updated);
}

/**
 * @brief Send a hil_propeller_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param xacc X acceleration (m/s^2)
 * @param yacc Y acceleration (m/s^2)
 * @param zacc Z acceleration (m/s^2)
 * @param xgyro Angular speed around X axis in body frame (rad / sec)
 * @param ygyro Angular speed around Y axis in body frame (rad / sec)
 * @param zgyro Angular speed around Z axis in body frame (rad / sec)
 * @param xmag X Magnetic field (Gauss)
 * @param ymag Y Magnetic field (Gauss)
 * @param zmag Z Magnetic field (Gauss)
 * @param abs_pressure Absolute pressure in millibar
 * @param diff_pressure Differential pressure (airspeed) in millibar
 * @param pressure_alt Altitude calculated from pressure
 * @param temperature Temperature in degrees celsius
 * @param fields_updated Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_propeller_sensor_send(mavlink_channel_t chan, uint64_t time_usec, uint32_t xacc, uint32_t yacc, uint32_t zacc, uint32_t xgyro, uint32_t ygyro, uint32_t zgyro, uint32_t xmag, uint32_t ymag, uint32_t zmag, uint32_t abs_pressure, uint32_t diff_pressure, uint32_t pressure_alt, uint32_t temperature, uint32_t fields_updated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, xacc);
    _mav_put_uint32_t(buf, 12, yacc);
    _mav_put_uint32_t(buf, 16, zacc);
    _mav_put_uint32_t(buf, 20, xgyro);
    _mav_put_uint32_t(buf, 24, ygyro);
    _mav_put_uint32_t(buf, 28, zgyro);
    _mav_put_uint32_t(buf, 32, xmag);
    _mav_put_uint32_t(buf, 36, ymag);
    _mav_put_uint32_t(buf, 40, zmag);
    _mav_put_uint32_t(buf, 44, abs_pressure);
    _mav_put_uint32_t(buf, 48, diff_pressure);
    _mav_put_uint32_t(buf, 52, pressure_alt);
    _mav_put_uint32_t(buf, 56, temperature);
    _mav_put_uint32_t(buf, 60, fields_updated);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR, buf, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
#else
    mavlink_hil_propeller_sensor_t packet;
    packet.time_usec = time_usec;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.xgyro = xgyro;
    packet.ygyro = ygyro;
    packet.zgyro = zgyro;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    packet.abs_pressure = abs_pressure;
    packet.diff_pressure = diff_pressure;
    packet.pressure_alt = pressure_alt;
    packet.temperature = temperature;
    packet.fields_updated = fields_updated;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
#endif
}

/**
 * @brief Send a hil_propeller_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_propeller_sensor_send_struct(mavlink_channel_t chan, const mavlink_hil_propeller_sensor_t* hil_propeller_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_propeller_sensor_send(chan, hil_propeller_sensor->time_usec, hil_propeller_sensor->xacc, hil_propeller_sensor->yacc, hil_propeller_sensor->zacc, hil_propeller_sensor->xgyro, hil_propeller_sensor->ygyro, hil_propeller_sensor->zgyro, hil_propeller_sensor->xmag, hil_propeller_sensor->ymag, hil_propeller_sensor->zmag, hil_propeller_sensor->abs_pressure, hil_propeller_sensor->diff_pressure, hil_propeller_sensor->pressure_alt, hil_propeller_sensor->temperature, hil_propeller_sensor->fields_updated);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR, (const char *)hil_propeller_sensor, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_propeller_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint32_t xacc, uint32_t yacc, uint32_t zacc, uint32_t xgyro, uint32_t ygyro, uint32_t zgyro, uint32_t xmag, uint32_t ymag, uint32_t zmag, uint32_t abs_pressure, uint32_t diff_pressure, uint32_t pressure_alt, uint32_t temperature, uint32_t fields_updated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, xacc);
    _mav_put_uint32_t(buf, 12, yacc);
    _mav_put_uint32_t(buf, 16, zacc);
    _mav_put_uint32_t(buf, 20, xgyro);
    _mav_put_uint32_t(buf, 24, ygyro);
    _mav_put_uint32_t(buf, 28, zgyro);
    _mav_put_uint32_t(buf, 32, xmag);
    _mav_put_uint32_t(buf, 36, ymag);
    _mav_put_uint32_t(buf, 40, zmag);
    _mav_put_uint32_t(buf, 44, abs_pressure);
    _mav_put_uint32_t(buf, 48, diff_pressure);
    _mav_put_uint32_t(buf, 52, pressure_alt);
    _mav_put_uint32_t(buf, 56, temperature);
    _mav_put_uint32_t(buf, 60, fields_updated);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR, buf, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
#else
    mavlink_hil_propeller_sensor_t *packet = (mavlink_hil_propeller_sensor_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->xacc = xacc;
    packet->yacc = yacc;
    packet->zacc = zacc;
    packet->xgyro = xgyro;
    packet->ygyro = ygyro;
    packet->zgyro = zgyro;
    packet->xmag = xmag;
    packet->ymag = ymag;
    packet->zmag = zmag;
    packet->abs_pressure = abs_pressure;
    packet->diff_pressure = diff_pressure;
    packet->pressure_alt = pressure_alt;
    packet->temperature = temperature;
    packet->fields_updated = fields_updated;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR, (const char *)packet, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_PROPELLER_SENSOR UNPACKING


/**
 * @brief Get field time_usec from hil_propeller_sensor message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_hil_propeller_sensor_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field xacc from hil_propeller_sensor message
 *
 * @return X acceleration (m/s^2)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_xacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field yacc from hil_propeller_sensor message
 *
 * @return Y acceleration (m/s^2)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_yacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field zacc from hil_propeller_sensor message
 *
 * @return Z acceleration (m/s^2)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_zacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field xgyro from hil_propeller_sensor message
 *
 * @return Angular speed around X axis in body frame (rad / sec)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_xgyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field ygyro from hil_propeller_sensor message
 *
 * @return Angular speed around Y axis in body frame (rad / sec)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_ygyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field zgyro from hil_propeller_sensor message
 *
 * @return Angular speed around Z axis in body frame (rad / sec)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_zgyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field xmag from hil_propeller_sensor message
 *
 * @return X Magnetic field (Gauss)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_xmag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field ymag from hil_propeller_sensor message
 *
 * @return Y Magnetic field (Gauss)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_ymag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field zmag from hil_propeller_sensor message
 *
 * @return Z Magnetic field (Gauss)
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_zmag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Get field abs_pressure from hil_propeller_sensor message
 *
 * @return Absolute pressure in millibar
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_abs_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Get field diff_pressure from hil_propeller_sensor message
 *
 * @return Differential pressure (airspeed) in millibar
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_diff_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  48);
}

/**
 * @brief Get field pressure_alt from hil_propeller_sensor message
 *
 * @return Altitude calculated from pressure
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_pressure_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  52);
}

/**
 * @brief Get field temperature from hil_propeller_sensor message
 *
 * @return Temperature in degrees celsius
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  56);
}

/**
 * @brief Get field fields_updated from hil_propeller_sensor message
 *
 * @return Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature
 */
static inline uint32_t mavlink_msg_hil_propeller_sensor_get_fields_updated(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  60);
}

/**
 * @brief Decode a hil_propeller_sensor message into a struct
 *
 * @param msg The message to decode
 * @param hil_propeller_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_propeller_sensor_decode(const mavlink_message_t* msg, mavlink_hil_propeller_sensor_t* hil_propeller_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_propeller_sensor->time_usec = mavlink_msg_hil_propeller_sensor_get_time_usec(msg);
    hil_propeller_sensor->xacc = mavlink_msg_hil_propeller_sensor_get_xacc(msg);
    hil_propeller_sensor->yacc = mavlink_msg_hil_propeller_sensor_get_yacc(msg);
    hil_propeller_sensor->zacc = mavlink_msg_hil_propeller_sensor_get_zacc(msg);
    hil_propeller_sensor->xgyro = mavlink_msg_hil_propeller_sensor_get_xgyro(msg);
    hil_propeller_sensor->ygyro = mavlink_msg_hil_propeller_sensor_get_ygyro(msg);
    hil_propeller_sensor->zgyro = mavlink_msg_hil_propeller_sensor_get_zgyro(msg);
    hil_propeller_sensor->xmag = mavlink_msg_hil_propeller_sensor_get_xmag(msg);
    hil_propeller_sensor->ymag = mavlink_msg_hil_propeller_sensor_get_ymag(msg);
    hil_propeller_sensor->zmag = mavlink_msg_hil_propeller_sensor_get_zmag(msg);
    hil_propeller_sensor->abs_pressure = mavlink_msg_hil_propeller_sensor_get_abs_pressure(msg);
    hil_propeller_sensor->diff_pressure = mavlink_msg_hil_propeller_sensor_get_diff_pressure(msg);
    hil_propeller_sensor->pressure_alt = mavlink_msg_hil_propeller_sensor_get_pressure_alt(msg);
    hil_propeller_sensor->temperature = mavlink_msg_hil_propeller_sensor_get_temperature(msg);
    hil_propeller_sensor->fields_updated = mavlink_msg_hil_propeller_sensor_get_fields_updated(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN;
        memset(hil_propeller_sensor, 0, MAVLINK_MSG_ID_HIL_PROPELLER_SENSOR_LEN);
    memcpy(hil_propeller_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
