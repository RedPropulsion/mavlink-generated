#pragma once
// MESSAGE DO_FIRE_PYRO PACKING

#define MAVLINK_MSG_ID_DO_FIRE_PYRO 25


typedef struct __mavlink_do_fire_pyro_t {
 uint8_t charge_channel; /*<  */
} mavlink_do_fire_pyro_t;

#define MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN 1
#define MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN 1
#define MAVLINK_MSG_ID_25_LEN 1
#define MAVLINK_MSG_ID_25_MIN_LEN 1

#define MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC 5
#define MAVLINK_MSG_ID_25_CRC 5



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DO_FIRE_PYRO { \
    25, \
    "DO_FIRE_PYRO", \
    1, \
    {  { "charge_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_do_fire_pyro_t, charge_channel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DO_FIRE_PYRO { \
    "DO_FIRE_PYRO", \
    1, \
    {  { "charge_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_do_fire_pyro_t, charge_channel) }, \
         } \
}
#endif

/**
 * @brief Pack a do_fire_pyro message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param charge_channel  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_do_fire_pyro_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t charge_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN];
    _mav_put_uint8_t(buf, 0, charge_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#else
    mavlink_do_fire_pyro_t packet;
    packet.charge_channel = charge_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DO_FIRE_PYRO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
}

/**
 * @brief Pack a do_fire_pyro message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param charge_channel  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_do_fire_pyro_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t charge_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN];
    _mav_put_uint8_t(buf, 0, charge_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#else
    mavlink_do_fire_pyro_t packet;
    packet.charge_channel = charge_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DO_FIRE_PYRO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#endif
}

/**
 * @brief Pack a do_fire_pyro message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param charge_channel  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_do_fire_pyro_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t charge_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN];
    _mav_put_uint8_t(buf, 0, charge_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#else
    mavlink_do_fire_pyro_t packet;
    packet.charge_channel = charge_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DO_FIRE_PYRO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
}

/**
 * @brief Encode a do_fire_pyro struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param do_fire_pyro C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_do_fire_pyro_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_do_fire_pyro_t* do_fire_pyro)
{
    return mavlink_msg_do_fire_pyro_pack(system_id, component_id, msg, do_fire_pyro->charge_channel);
}

/**
 * @brief Encode a do_fire_pyro struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param do_fire_pyro C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_do_fire_pyro_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_do_fire_pyro_t* do_fire_pyro)
{
    return mavlink_msg_do_fire_pyro_pack_chan(system_id, component_id, chan, msg, do_fire_pyro->charge_channel);
}

/**
 * @brief Encode a do_fire_pyro struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param do_fire_pyro C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_do_fire_pyro_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_do_fire_pyro_t* do_fire_pyro)
{
    return mavlink_msg_do_fire_pyro_pack_status(system_id, component_id, _status, msg,  do_fire_pyro->charge_channel);
}

/**
 * @brief Send a do_fire_pyro message
 * @param chan MAVLink channel to send the message
 *
 * @param charge_channel  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_do_fire_pyro_send(mavlink_channel_t chan, uint8_t charge_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN];
    _mav_put_uint8_t(buf, 0, charge_channel);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DO_FIRE_PYRO, buf, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#else
    mavlink_do_fire_pyro_t packet;
    packet.charge_channel = charge_channel;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DO_FIRE_PYRO, (const char *)&packet, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#endif
}

/**
 * @brief Send a do_fire_pyro message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_do_fire_pyro_send_struct(mavlink_channel_t chan, const mavlink_do_fire_pyro_t* do_fire_pyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_do_fire_pyro_send(chan, do_fire_pyro->charge_channel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DO_FIRE_PYRO, (const char *)do_fire_pyro, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#endif
}

#if MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_do_fire_pyro_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t charge_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, charge_channel);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DO_FIRE_PYRO, buf, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#else
    mavlink_do_fire_pyro_t *packet = (mavlink_do_fire_pyro_t *)msgbuf;
    packet->charge_channel = charge_channel;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DO_FIRE_PYRO, (const char *)packet, MAVLINK_MSG_ID_DO_FIRE_PYRO_MIN_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN, MAVLINK_MSG_ID_DO_FIRE_PYRO_CRC);
#endif
}
#endif

#endif

// MESSAGE DO_FIRE_PYRO UNPACKING


/**
 * @brief Get field charge_channel from do_fire_pyro message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_do_fire_pyro_get_charge_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a do_fire_pyro message into a struct
 *
 * @param msg The message to decode
 * @param do_fire_pyro C-struct to decode the message contents into
 */
static inline void mavlink_msg_do_fire_pyro_decode(const mavlink_message_t* msg, mavlink_do_fire_pyro_t* do_fire_pyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    do_fire_pyro->charge_channel = mavlink_msg_do_fire_pyro_get_charge_channel(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN? msg->len : MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN;
        memset(do_fire_pyro, 0, MAVLINK_MSG_ID_DO_FIRE_PYRO_LEN);
    memcpy(do_fire_pyro, _MAV_PAYLOAD(msg), len);
#endif
}
