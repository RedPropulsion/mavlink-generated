#pragma once
// MESSAGE PIN_TM PACKING

#define MAVLINK_MSG_ID_PIN_TM 114


typedef struct __mavlink_pin_tm_t {
 uint64_t timestamp; /*< [us] Timestamp*/
 uint8_t pin_id; /*<  A member of the PinsList enum*/
 uint8_t current_state; /*<  Current state of pin*/
} mavlink_pin_tm_t;

#define MAVLINK_MSG_ID_PIN_TM_LEN 10
#define MAVLINK_MSG_ID_PIN_TM_MIN_LEN 10
#define MAVLINK_MSG_ID_114_LEN 10
#define MAVLINK_MSG_ID_114_MIN_LEN 10

#define MAVLINK_MSG_ID_PIN_TM_CRC 0
#define MAVLINK_MSG_ID_114_CRC 0



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PIN_TM { \
    114, \
    "PIN_TM", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pin_tm_t, timestamp) }, \
         { "pin_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_pin_tm_t, pin_id) }, \
         { "current_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_pin_tm_t, current_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PIN_TM { \
    "PIN_TM", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pin_tm_t, timestamp) }, \
         { "pin_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_pin_tm_t, pin_id) }, \
         { "current_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_pin_tm_t, current_state) }, \
         } \
}
#endif

/**
 * @brief Pack a pin_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp
 * @param pin_id  A member of the PinsList enum
 * @param current_state  Current state of pin
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pin_tm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t pin_id, uint8_t current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIN_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, pin_id);
    _mav_put_uint8_t(buf, 9, current_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIN_TM_LEN);
#else
    mavlink_pin_tm_t packet;
    packet.timestamp = timestamp;
    packet.pin_id = pin_id;
    packet.current_state = current_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIN_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIN_TM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
}

/**
 * @brief Pack a pin_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp
 * @param pin_id  A member of the PinsList enum
 * @param current_state  Current state of pin
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pin_tm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t pin_id, uint8_t current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIN_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, pin_id);
    _mav_put_uint8_t(buf, 9, current_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIN_TM_LEN);
#else
    mavlink_pin_tm_t packet;
    packet.timestamp = timestamp;
    packet.pin_id = pin_id;
    packet.current_state = current_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIN_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIN_TM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN);
#endif
}

/**
 * @brief Pack a pin_tm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp
 * @param pin_id  A member of the PinsList enum
 * @param current_state  Current state of pin
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pin_tm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t pin_id,uint8_t current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIN_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, pin_id);
    _mav_put_uint8_t(buf, 9, current_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIN_TM_LEN);
#else
    mavlink_pin_tm_t packet;
    packet.timestamp = timestamp;
    packet.pin_id = pin_id;
    packet.current_state = current_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIN_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIN_TM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
}

/**
 * @brief Encode a pin_tm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pin_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pin_tm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pin_tm_t* pin_tm)
{
    return mavlink_msg_pin_tm_pack(system_id, component_id, msg, pin_tm->timestamp, pin_tm->pin_id, pin_tm->current_state);
}

/**
 * @brief Encode a pin_tm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pin_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pin_tm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pin_tm_t* pin_tm)
{
    return mavlink_msg_pin_tm_pack_chan(system_id, component_id, chan, msg, pin_tm->timestamp, pin_tm->pin_id, pin_tm->current_state);
}

/**
 * @brief Encode a pin_tm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param pin_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pin_tm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_pin_tm_t* pin_tm)
{
    return mavlink_msg_pin_tm_pack_status(system_id, component_id, _status, msg,  pin_tm->timestamp, pin_tm->pin_id, pin_tm->current_state);
}

/**
 * @brief Send a pin_tm message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp
 * @param pin_id  A member of the PinsList enum
 * @param current_state  Current state of pin
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pin_tm_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t pin_id, uint8_t current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIN_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, pin_id);
    _mav_put_uint8_t(buf, 9, current_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIN_TM, buf, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#else
    mavlink_pin_tm_t packet;
    packet.timestamp = timestamp;
    packet.pin_id = pin_id;
    packet.current_state = current_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIN_TM, (const char *)&packet, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#endif
}

/**
 * @brief Send a pin_tm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pin_tm_send_struct(mavlink_channel_t chan, const mavlink_pin_tm_t* pin_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pin_tm_send(chan, pin_tm->timestamp, pin_tm->pin_id, pin_tm->current_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIN_TM, (const char *)pin_tm, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#endif
}

#if MAVLINK_MSG_ID_PIN_TM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pin_tm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t pin_id, uint8_t current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, pin_id);
    _mav_put_uint8_t(buf, 9, current_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIN_TM, buf, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#else
    mavlink_pin_tm_t *packet = (mavlink_pin_tm_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->pin_id = pin_id;
    packet->current_state = current_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIN_TM, (const char *)packet, MAVLINK_MSG_ID_PIN_TM_MIN_LEN, MAVLINK_MSG_ID_PIN_TM_LEN, MAVLINK_MSG_ID_PIN_TM_CRC);
#endif
}
#endif

#endif

// MESSAGE PIN_TM UNPACKING


/**
 * @brief Get field timestamp from pin_tm message
 *
 * @return [us] Timestamp
 */
static inline uint64_t mavlink_msg_pin_tm_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pin_id from pin_tm message
 *
 * @return  A member of the PinsList enum
 */
static inline uint8_t mavlink_msg_pin_tm_get_pin_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field current_state from pin_tm message
 *
 * @return  Current state of pin
 */
static inline uint8_t mavlink_msg_pin_tm_get_current_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a pin_tm message into a struct
 *
 * @param msg The message to decode
 * @param pin_tm C-struct to decode the message contents into
 */
static inline void mavlink_msg_pin_tm_decode(const mavlink_message_t* msg, mavlink_pin_tm_t* pin_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    pin_tm->timestamp = mavlink_msg_pin_tm_get_timestamp(msg);
    pin_tm->pin_id = mavlink_msg_pin_tm_get_pin_id(msg);
    pin_tm->current_state = mavlink_msg_pin_tm_get_current_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PIN_TM_LEN? msg->len : MAVLINK_MSG_ID_PIN_TM_LEN;
        memset(pin_tm, 0, MAVLINK_MSG_ID_PIN_TM_LEN);
    memcpy(pin_tm, _MAV_PAYLOAD(msg), len);
#endif
}
