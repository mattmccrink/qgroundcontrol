#pragma once
// MESSAGE HIL_PROPELLER_STATE_QUATERNION PACKING

#define MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION 236

MAVPACKED(
typedef struct __mavlink_hil_propeller_state_quaternion_t {
 uint64_t time_usec; /*< Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
 int32_t attitude_quaternion[4]; /*< Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 2^30 0 0 0 being the null-rotation)*/
 int32_t rollspeed; /*< Body frame roll / phi angular speed (rad/s) * 1E7*/
 int32_t pitchspeed; /*< Body frame pitch / theta angular speed (rad/s) * 1E7*/
 int32_t yawspeed; /*< Body frame yaw / psi angular speed (rad/s) * 1E7*/
 int32_t xacc; /*< X acceleration (g) * 1E7*/
 int32_t yacc; /*< Y acceleration (g) * 1E7*/
 int32_t zacc; /*< Z acceleration (g) * 1E7*/
 int32_t lat; /*< Latitude, expressed as * 1E7*/
 int32_t lon; /*< Longitude, expressed as * 1E7*/
 int32_t alt; /*< Altitude in meters, expressed as * 1000 (millimeters)*/
 int16_t vx; /*< Ground X Speed (Latitude), expressed as m/s * 100*/
 int16_t vy; /*< Ground Y Speed (Longitude), expressed as m/s * 100*/
 int16_t vz; /*< Ground Z Speed (Altitude), expressed as m/s * 100*/
 uint16_t ind_airspeed; /*< Indicated airspeed, expressed as m/s * 100*/
 uint16_t true_airspeed; /*< True airspeed, expressed as m/s * 100*/
 int16_t xmag; /*< x magnetometer in Guass * 1000*/
 uint16_t ymag; /*< y magnetometer in Guass * 1000*/
 uint16_t zmag; /*< z magnetometer in Guass * 1000*/
}) mavlink_hil_propeller_state_quaternion_t;

#define MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN 76
#define MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN 76
#define MAVLINK_MSG_ID_236_LEN 76
#define MAVLINK_MSG_ID_236_MIN_LEN 76

#define MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC 7
#define MAVLINK_MSG_ID_236_CRC 7

#define MAVLINK_MSG_HIL_PROPELLER_STATE_QUATERNION_FIELD_ATTITUDE_QUATERNION_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_PROPELLER_STATE_QUATERNION { \
    236, \
    "HIL_PROPELLER_STATE_QUATERNION", \
    19, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_propeller_state_quaternion_t, time_usec) }, \
         { "attitude_quaternion", NULL, MAVLINK_TYPE_INT32_T, 4, 8, offsetof(mavlink_hil_propeller_state_quaternion_t, attitude_quaternion) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_hil_propeller_state_quaternion_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_hil_propeller_state_quaternion_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_hil_propeller_state_quaternion_t, yawspeed) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_hil_propeller_state_quaternion_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_hil_propeller_state_quaternion_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_hil_propeller_state_quaternion_t, zacc) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_hil_propeller_state_quaternion_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_hil_propeller_state_quaternion_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_hil_propeller_state_quaternion_t, alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_hil_propeller_state_quaternion_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_hil_propeller_state_quaternion_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_hil_propeller_state_quaternion_t, vz) }, \
         { "ind_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_hil_propeller_state_quaternion_t, ind_airspeed) }, \
         { "true_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_hil_propeller_state_quaternion_t, true_airspeed) }, \
         { "xmag", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_hil_propeller_state_quaternion_t, xmag) }, \
         { "ymag", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_hil_propeller_state_quaternion_t, ymag) }, \
         { "zmag", NULL, MAVLINK_TYPE_UINT16_T, 0, 74, offsetof(mavlink_hil_propeller_state_quaternion_t, zmag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_PROPELLER_STATE_QUATERNION { \
    "HIL_PROPELLER_STATE_QUATERNION", \
    19, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_propeller_state_quaternion_t, time_usec) }, \
         { "attitude_quaternion", NULL, MAVLINK_TYPE_INT32_T, 4, 8, offsetof(mavlink_hil_propeller_state_quaternion_t, attitude_quaternion) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_hil_propeller_state_quaternion_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_hil_propeller_state_quaternion_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_hil_propeller_state_quaternion_t, yawspeed) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_hil_propeller_state_quaternion_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_hil_propeller_state_quaternion_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_hil_propeller_state_quaternion_t, zacc) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_hil_propeller_state_quaternion_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_hil_propeller_state_quaternion_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_hil_propeller_state_quaternion_t, alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_hil_propeller_state_quaternion_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_hil_propeller_state_quaternion_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_hil_propeller_state_quaternion_t, vz) }, \
         { "ind_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_hil_propeller_state_quaternion_t, ind_airspeed) }, \
         { "true_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_hil_propeller_state_quaternion_t, true_airspeed) }, \
         { "xmag", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_hil_propeller_state_quaternion_t, xmag) }, \
         { "ymag", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_hil_propeller_state_quaternion_t, ymag) }, \
         { "zmag", NULL, MAVLINK_TYPE_UINT16_T, 0, 74, offsetof(mavlink_hil_propeller_state_quaternion_t, zmag) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_propeller_state_quaternion message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param attitude_quaternion Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 2^30 0 0 0 being the null-rotation)
 * @param rollspeed Body frame roll / phi angular speed (rad/s) * 1E7
 * @param pitchspeed Body frame pitch / theta angular speed (rad/s) * 1E7
 * @param yawspeed Body frame yaw / psi angular speed (rad/s) * 1E7
 * @param xacc X acceleration (g) * 1E7
 * @param yacc Y acceleration (g) * 1E7
 * @param zacc Z acceleration (g) * 1E7
 * @param lat Latitude, expressed as * 1E7
 * @param lon Longitude, expressed as * 1E7
 * @param alt Altitude in meters, expressed as * 1000 (millimeters)
 * @param vx Ground X Speed (Latitude), expressed as m/s * 100
 * @param vy Ground Y Speed (Longitude), expressed as m/s * 100
 * @param vz Ground Z Speed (Altitude), expressed as m/s * 100
 * @param ind_airspeed Indicated airspeed, expressed as m/s * 100
 * @param true_airspeed True airspeed, expressed as m/s * 100
 * @param xmag x magnetometer in Guass * 1000
 * @param ymag y magnetometer in Guass * 1000
 * @param zmag z magnetometer in Guass * 1000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, const int32_t *attitude_quaternion, int32_t rollspeed, int32_t pitchspeed, int32_t yawspeed, int32_t xacc, int32_t yacc, int32_t zacc, int32_t lat, int32_t lon, int32_t alt, int16_t vx, int16_t vy, int16_t vz, uint16_t ind_airspeed, uint16_t true_airspeed, int16_t xmag, uint16_t ymag, uint16_t zmag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 24, rollspeed);
    _mav_put_int32_t(buf, 28, pitchspeed);
    _mav_put_int32_t(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, xacc);
    _mav_put_int32_t(buf, 40, yacc);
    _mav_put_int32_t(buf, 44, zacc);
    _mav_put_int32_t(buf, 48, lat);
    _mav_put_int32_t(buf, 52, lon);
    _mav_put_int32_t(buf, 56, alt);
    _mav_put_int16_t(buf, 60, vx);
    _mav_put_int16_t(buf, 62, vy);
    _mav_put_int16_t(buf, 64, vz);
    _mav_put_uint16_t(buf, 66, ind_airspeed);
    _mav_put_uint16_t(buf, 68, true_airspeed);
    _mav_put_int16_t(buf, 70, xmag);
    _mav_put_uint16_t(buf, 72, ymag);
    _mav_put_uint16_t(buf, 74, zmag);
    _mav_put_int32_t_array(buf, 8, attitude_quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN);
#else
    mavlink_hil_propeller_state_quaternion_t packet;
    packet.time_usec = time_usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ind_airspeed = ind_airspeed;
    packet.true_airspeed = true_airspeed;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    mav_array_memcpy(packet.attitude_quaternion, attitude_quaternion, sizeof(int32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
}

/**
 * @brief Pack a hil_propeller_state_quaternion message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param attitude_quaternion Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 2^30 0 0 0 being the null-rotation)
 * @param rollspeed Body frame roll / phi angular speed (rad/s) * 1E7
 * @param pitchspeed Body frame pitch / theta angular speed (rad/s) * 1E7
 * @param yawspeed Body frame yaw / psi angular speed (rad/s) * 1E7
 * @param xacc X acceleration (g) * 1E7
 * @param yacc Y acceleration (g) * 1E7
 * @param zacc Z acceleration (g) * 1E7
 * @param lat Latitude, expressed as * 1E7
 * @param lon Longitude, expressed as * 1E7
 * @param alt Altitude in meters, expressed as * 1000 (millimeters)
 * @param vx Ground X Speed (Latitude), expressed as m/s * 100
 * @param vy Ground Y Speed (Longitude), expressed as m/s * 100
 * @param vz Ground Z Speed (Altitude), expressed as m/s * 100
 * @param ind_airspeed Indicated airspeed, expressed as m/s * 100
 * @param true_airspeed True airspeed, expressed as m/s * 100
 * @param xmag x magnetometer in Guass * 1000
 * @param ymag y magnetometer in Guass * 1000
 * @param zmag z magnetometer in Guass * 1000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,const int32_t *attitude_quaternion,int32_t rollspeed,int32_t pitchspeed,int32_t yawspeed,int32_t xacc,int32_t yacc,int32_t zacc,int32_t lat,int32_t lon,int32_t alt,int16_t vx,int16_t vy,int16_t vz,uint16_t ind_airspeed,uint16_t true_airspeed,int16_t xmag,uint16_t ymag,uint16_t zmag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 24, rollspeed);
    _mav_put_int32_t(buf, 28, pitchspeed);
    _mav_put_int32_t(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, xacc);
    _mav_put_int32_t(buf, 40, yacc);
    _mav_put_int32_t(buf, 44, zacc);
    _mav_put_int32_t(buf, 48, lat);
    _mav_put_int32_t(buf, 52, lon);
    _mav_put_int32_t(buf, 56, alt);
    _mav_put_int16_t(buf, 60, vx);
    _mav_put_int16_t(buf, 62, vy);
    _mav_put_int16_t(buf, 64, vz);
    _mav_put_uint16_t(buf, 66, ind_airspeed);
    _mav_put_uint16_t(buf, 68, true_airspeed);
    _mav_put_int16_t(buf, 70, xmag);
    _mav_put_uint16_t(buf, 72, ymag);
    _mav_put_uint16_t(buf, 74, zmag);
    _mav_put_int32_t_array(buf, 8, attitude_quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN);
#else
    mavlink_hil_propeller_state_quaternion_t packet;
    packet.time_usec = time_usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ind_airspeed = ind_airspeed;
    packet.true_airspeed = true_airspeed;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    mav_array_memcpy(packet.attitude_quaternion, attitude_quaternion, sizeof(int32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
}

/**
 * @brief Encode a hil_propeller_state_quaternion struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_propeller_state_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_propeller_state_quaternion_t* hil_propeller_state_quaternion)
{
    return mavlink_msg_hil_propeller_state_quaternion_pack(system_id, component_id, msg, hil_propeller_state_quaternion->time_usec, hil_propeller_state_quaternion->attitude_quaternion, hil_propeller_state_quaternion->rollspeed, hil_propeller_state_quaternion->pitchspeed, hil_propeller_state_quaternion->yawspeed, hil_propeller_state_quaternion->xacc, hil_propeller_state_quaternion->yacc, hil_propeller_state_quaternion->zacc, hil_propeller_state_quaternion->lat, hil_propeller_state_quaternion->lon, hil_propeller_state_quaternion->alt, hil_propeller_state_quaternion->vx, hil_propeller_state_quaternion->vy, hil_propeller_state_quaternion->vz, hil_propeller_state_quaternion->ind_airspeed, hil_propeller_state_quaternion->true_airspeed, hil_propeller_state_quaternion->xmag, hil_propeller_state_quaternion->ymag, hil_propeller_state_quaternion->zmag);
}

/**
 * @brief Encode a hil_propeller_state_quaternion struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_propeller_state_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_propeller_state_quaternion_t* hil_propeller_state_quaternion)
{
    return mavlink_msg_hil_propeller_state_quaternion_pack_chan(system_id, component_id, chan, msg, hil_propeller_state_quaternion->time_usec, hil_propeller_state_quaternion->attitude_quaternion, hil_propeller_state_quaternion->rollspeed, hil_propeller_state_quaternion->pitchspeed, hil_propeller_state_quaternion->yawspeed, hil_propeller_state_quaternion->xacc, hil_propeller_state_quaternion->yacc, hil_propeller_state_quaternion->zacc, hil_propeller_state_quaternion->lat, hil_propeller_state_quaternion->lon, hil_propeller_state_quaternion->alt, hil_propeller_state_quaternion->vx, hil_propeller_state_quaternion->vy, hil_propeller_state_quaternion->vz, hil_propeller_state_quaternion->ind_airspeed, hil_propeller_state_quaternion->true_airspeed, hil_propeller_state_quaternion->xmag, hil_propeller_state_quaternion->ymag, hil_propeller_state_quaternion->zmag);
}

/**
 * @brief Send a hil_propeller_state_quaternion message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param attitude_quaternion Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 2^30 0 0 0 being the null-rotation)
 * @param rollspeed Body frame roll / phi angular speed (rad/s) * 1E7
 * @param pitchspeed Body frame pitch / theta angular speed (rad/s) * 1E7
 * @param yawspeed Body frame yaw / psi angular speed (rad/s) * 1E7
 * @param xacc X acceleration (g) * 1E7
 * @param yacc Y acceleration (g) * 1E7
 * @param zacc Z acceleration (g) * 1E7
 * @param lat Latitude, expressed as * 1E7
 * @param lon Longitude, expressed as * 1E7
 * @param alt Altitude in meters, expressed as * 1000 (millimeters)
 * @param vx Ground X Speed (Latitude), expressed as m/s * 100
 * @param vy Ground Y Speed (Longitude), expressed as m/s * 100
 * @param vz Ground Z Speed (Altitude), expressed as m/s * 100
 * @param ind_airspeed Indicated airspeed, expressed as m/s * 100
 * @param true_airspeed True airspeed, expressed as m/s * 100
 * @param xmag x magnetometer in Guass * 1000
 * @param ymag y magnetometer in Guass * 1000
 * @param zmag z magnetometer in Guass * 1000
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_propeller_state_quaternion_send(mavlink_channel_t chan, uint64_t time_usec, const int32_t *attitude_quaternion, int32_t rollspeed, int32_t pitchspeed, int32_t yawspeed, int32_t xacc, int32_t yacc, int32_t zacc, int32_t lat, int32_t lon, int32_t alt, int16_t vx, int16_t vy, int16_t vz, uint16_t ind_airspeed, uint16_t true_airspeed, int16_t xmag, uint16_t ymag, uint16_t zmag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 24, rollspeed);
    _mav_put_int32_t(buf, 28, pitchspeed);
    _mav_put_int32_t(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, xacc);
    _mav_put_int32_t(buf, 40, yacc);
    _mav_put_int32_t(buf, 44, zacc);
    _mav_put_int32_t(buf, 48, lat);
    _mav_put_int32_t(buf, 52, lon);
    _mav_put_int32_t(buf, 56, alt);
    _mav_put_int16_t(buf, 60, vx);
    _mav_put_int16_t(buf, 62, vy);
    _mav_put_int16_t(buf, 64, vz);
    _mav_put_uint16_t(buf, 66, ind_airspeed);
    _mav_put_uint16_t(buf, 68, true_airspeed);
    _mav_put_int16_t(buf, 70, xmag);
    _mav_put_uint16_t(buf, 72, ymag);
    _mav_put_uint16_t(buf, 74, zmag);
    _mav_put_int32_t_array(buf, 8, attitude_quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION, buf, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
#else
    mavlink_hil_propeller_state_quaternion_t packet;
    packet.time_usec = time_usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ind_airspeed = ind_airspeed;
    packet.true_airspeed = true_airspeed;
    packet.xmag = xmag;
    packet.ymag = ymag;
    packet.zmag = zmag;
    mav_array_memcpy(packet.attitude_quaternion, attitude_quaternion, sizeof(int32_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION, (const char *)&packet, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
#endif
}

/**
 * @brief Send a hil_propeller_state_quaternion message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_propeller_state_quaternion_send_struct(mavlink_channel_t chan, const mavlink_hil_propeller_state_quaternion_t* hil_propeller_state_quaternion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_propeller_state_quaternion_send(chan, hil_propeller_state_quaternion->time_usec, hil_propeller_state_quaternion->attitude_quaternion, hil_propeller_state_quaternion->rollspeed, hil_propeller_state_quaternion->pitchspeed, hil_propeller_state_quaternion->yawspeed, hil_propeller_state_quaternion->xacc, hil_propeller_state_quaternion->yacc, hil_propeller_state_quaternion->zacc, hil_propeller_state_quaternion->lat, hil_propeller_state_quaternion->lon, hil_propeller_state_quaternion->alt, hil_propeller_state_quaternion->vx, hil_propeller_state_quaternion->vy, hil_propeller_state_quaternion->vz, hil_propeller_state_quaternion->ind_airspeed, hil_propeller_state_quaternion->true_airspeed, hil_propeller_state_quaternion->xmag, hil_propeller_state_quaternion->ymag, hil_propeller_state_quaternion->zmag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION, (const char *)hil_propeller_state_quaternion, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_propeller_state_quaternion_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const int32_t *attitude_quaternion, int32_t rollspeed, int32_t pitchspeed, int32_t yawspeed, int32_t xacc, int32_t yacc, int32_t zacc, int32_t lat, int32_t lon, int32_t alt, int16_t vx, int16_t vy, int16_t vz, uint16_t ind_airspeed, uint16_t true_airspeed, int16_t xmag, uint16_t ymag, uint16_t zmag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 24, rollspeed);
    _mav_put_int32_t(buf, 28, pitchspeed);
    _mav_put_int32_t(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, xacc);
    _mav_put_int32_t(buf, 40, yacc);
    _mav_put_int32_t(buf, 44, zacc);
    _mav_put_int32_t(buf, 48, lat);
    _mav_put_int32_t(buf, 52, lon);
    _mav_put_int32_t(buf, 56, alt);
    _mav_put_int16_t(buf, 60, vx);
    _mav_put_int16_t(buf, 62, vy);
    _mav_put_int16_t(buf, 64, vz);
    _mav_put_uint16_t(buf, 66, ind_airspeed);
    _mav_put_uint16_t(buf, 68, true_airspeed);
    _mav_put_int16_t(buf, 70, xmag);
    _mav_put_uint16_t(buf, 72, ymag);
    _mav_put_uint16_t(buf, 74, zmag);
    _mav_put_int32_t_array(buf, 8, attitude_quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION, buf, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
#else
    mavlink_hil_propeller_state_quaternion_t *packet = (mavlink_hil_propeller_state_quaternion_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->xacc = xacc;
    packet->yacc = yacc;
    packet->zacc = zacc;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->ind_airspeed = ind_airspeed;
    packet->true_airspeed = true_airspeed;
    packet->xmag = xmag;
    packet->ymag = ymag;
    packet->zmag = zmag;
    mav_array_memcpy(packet->attitude_quaternion, attitude_quaternion, sizeof(int32_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION, (const char *)packet, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_PROPELLER_STATE_QUATERNION UNPACKING


/**
 * @brief Get field time_usec from hil_propeller_state_quaternion message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_hil_propeller_state_quaternion_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field attitude_quaternion from hil_propeller_state_quaternion message
 *
 * @return Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 2^30 0 0 0 being the null-rotation)
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_get_attitude_quaternion(const mavlink_message_t* msg, int32_t *attitude_quaternion)
{
    return _MAV_RETURN_int32_t_array(msg, attitude_quaternion, 4,  8);
}

/**
 * @brief Get field rollspeed from hil_propeller_state_quaternion message
 *
 * @return Body frame roll / phi angular speed (rad/s) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field pitchspeed from hil_propeller_state_quaternion message
 *
 * @return Body frame pitch / theta angular speed (rad/s) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field yawspeed from hil_propeller_state_quaternion message
 *
 * @return Body frame yaw / psi angular speed (rad/s) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field xacc from hil_propeller_state_quaternion message
 *
 * @return X acceleration (g) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_xacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field yacc from hil_propeller_state_quaternion message
 *
 * @return Y acceleration (g) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_yacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field zacc from hil_propeller_state_quaternion message
 *
 * @return Z acceleration (g) * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_zacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field lat from hil_propeller_state_quaternion message
 *
 * @return Latitude, expressed as * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Get field lon from hil_propeller_state_quaternion message
 *
 * @return Longitude, expressed as * 1E7
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  52);
}

/**
 * @brief Get field alt from hil_propeller_state_quaternion message
 *
 * @return Altitude in meters, expressed as * 1000 (millimeters)
 */
static inline int32_t mavlink_msg_hil_propeller_state_quaternion_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  56);
}

/**
 * @brief Get field vx from hil_propeller_state_quaternion message
 *
 * @return Ground X Speed (Latitude), expressed as m/s * 100
 */
static inline int16_t mavlink_msg_hil_propeller_state_quaternion_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  60);
}

/**
 * @brief Get field vy from hil_propeller_state_quaternion message
 *
 * @return Ground Y Speed (Longitude), expressed as m/s * 100
 */
static inline int16_t mavlink_msg_hil_propeller_state_quaternion_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  62);
}

/**
 * @brief Get field vz from hil_propeller_state_quaternion message
 *
 * @return Ground Z Speed (Altitude), expressed as m/s * 100
 */
static inline int16_t mavlink_msg_hil_propeller_state_quaternion_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field ind_airspeed from hil_propeller_state_quaternion message
 *
 * @return Indicated airspeed, expressed as m/s * 100
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_get_ind_airspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  66);
}

/**
 * @brief Get field true_airspeed from hil_propeller_state_quaternion message
 *
 * @return True airspeed, expressed as m/s * 100
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_get_true_airspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  68);
}

/**
 * @brief Get field xmag from hil_propeller_state_quaternion message
 *
 * @return x magnetometer in Guass * 1000
 */
static inline int16_t mavlink_msg_hil_propeller_state_quaternion_get_xmag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  70);
}

/**
 * @brief Get field ymag from hil_propeller_state_quaternion message
 *
 * @return y magnetometer in Guass * 1000
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_get_ymag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  72);
}

/**
 * @brief Get field zmag from hil_propeller_state_quaternion message
 *
 * @return z magnetometer in Guass * 1000
 */
static inline uint16_t mavlink_msg_hil_propeller_state_quaternion_get_zmag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  74);
}

/**
 * @brief Decode a hil_propeller_state_quaternion message into a struct
 *
 * @param msg The message to decode
 * @param hil_propeller_state_quaternion C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_propeller_state_quaternion_decode(const mavlink_message_t* msg, mavlink_hil_propeller_state_quaternion_t* hil_propeller_state_quaternion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_propeller_state_quaternion->time_usec = mavlink_msg_hil_propeller_state_quaternion_get_time_usec(msg);
    mavlink_msg_hil_propeller_state_quaternion_get_attitude_quaternion(msg, hil_propeller_state_quaternion->attitude_quaternion);
    hil_propeller_state_quaternion->rollspeed = mavlink_msg_hil_propeller_state_quaternion_get_rollspeed(msg);
    hil_propeller_state_quaternion->pitchspeed = mavlink_msg_hil_propeller_state_quaternion_get_pitchspeed(msg);
    hil_propeller_state_quaternion->yawspeed = mavlink_msg_hil_propeller_state_quaternion_get_yawspeed(msg);
    hil_propeller_state_quaternion->xacc = mavlink_msg_hil_propeller_state_quaternion_get_xacc(msg);
    hil_propeller_state_quaternion->yacc = mavlink_msg_hil_propeller_state_quaternion_get_yacc(msg);
    hil_propeller_state_quaternion->zacc = mavlink_msg_hil_propeller_state_quaternion_get_zacc(msg);
    hil_propeller_state_quaternion->lat = mavlink_msg_hil_propeller_state_quaternion_get_lat(msg);
    hil_propeller_state_quaternion->lon = mavlink_msg_hil_propeller_state_quaternion_get_lon(msg);
    hil_propeller_state_quaternion->alt = mavlink_msg_hil_propeller_state_quaternion_get_alt(msg);
    hil_propeller_state_quaternion->vx = mavlink_msg_hil_propeller_state_quaternion_get_vx(msg);
    hil_propeller_state_quaternion->vy = mavlink_msg_hil_propeller_state_quaternion_get_vy(msg);
    hil_propeller_state_quaternion->vz = mavlink_msg_hil_propeller_state_quaternion_get_vz(msg);
    hil_propeller_state_quaternion->ind_airspeed = mavlink_msg_hil_propeller_state_quaternion_get_ind_airspeed(msg);
    hil_propeller_state_quaternion->true_airspeed = mavlink_msg_hil_propeller_state_quaternion_get_true_airspeed(msg);
    hil_propeller_state_quaternion->xmag = mavlink_msg_hil_propeller_state_quaternion_get_xmag(msg);
    hil_propeller_state_quaternion->ymag = mavlink_msg_hil_propeller_state_quaternion_get_ymag(msg);
    hil_propeller_state_quaternion->zmag = mavlink_msg_hil_propeller_state_quaternion_get_zmag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN? msg->len : MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN;
        memset(hil_propeller_state_quaternion, 0, MAVLINK_MSG_ID_HIL_PROPELLER_STATE_QUATERNION_LEN);
    memcpy(hil_propeller_state_quaternion, _MAV_PAYLOAD(msg), len);
#endif
}
