#pragma once
// MESSAGE PONG_TC PACKING

#define MAVLINK_MSG_ID_PONG_TC 55


typedef struct __mavlink_pong_tc_t {
 uint64_t origin_timestamp; /*<  Timestamp to identify when PING was sent*/
 uint64_t receive_timestamp; /*<  Timestamp to identify when PING was received*/
} mavlink_pong_tc_t;

#define MAVLINK_MSG_ID_PONG_TC_LEN 16
#define MAVLINK_MSG_ID_PONG_TC_MIN_LEN 16
#define MAVLINK_MSG_ID_55_LEN 16
#define MAVLINK_MSG_ID_55_MIN_LEN 16

#define MAVLINK_MSG_ID_PONG_TC_CRC 21
#define MAVLINK_MSG_ID_55_CRC 21



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PONG_TC { \
    55, \
    "PONG_TC", \
    2, \
    {  { "origin_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pong_tc_t, origin_timestamp) }, \
         { "receive_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_pong_tc_t, receive_timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PONG_TC { \
    "PONG_TC", \
    2, \
    {  { "origin_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pong_tc_t, origin_timestamp) }, \
         { "receive_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_pong_tc_t, receive_timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a pong_tc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param origin_timestamp  Timestamp to identify when PING was sent
 * @param receive_timestamp  Timestamp to identify when PING was received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pong_tc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t origin_timestamp, uint64_t receive_timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PONG_TC_LEN];
    _mav_put_uint64_t(buf, 0, origin_timestamp);
    _mav_put_uint64_t(buf, 8, receive_timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PONG_TC_LEN);
#else
    mavlink_pong_tc_t packet;
    packet.origin_timestamp = origin_timestamp;
    packet.receive_timestamp = receive_timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PONG_TC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PONG_TC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
}

/**
 * @brief Pack a pong_tc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param origin_timestamp  Timestamp to identify when PING was sent
 * @param receive_timestamp  Timestamp to identify when PING was received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pong_tc_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t origin_timestamp, uint64_t receive_timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PONG_TC_LEN];
    _mav_put_uint64_t(buf, 0, origin_timestamp);
    _mav_put_uint64_t(buf, 8, receive_timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PONG_TC_LEN);
#else
    mavlink_pong_tc_t packet;
    packet.origin_timestamp = origin_timestamp;
    packet.receive_timestamp = receive_timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PONG_TC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PONG_TC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN);
#endif
}

/**
 * @brief Pack a pong_tc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param origin_timestamp  Timestamp to identify when PING was sent
 * @param receive_timestamp  Timestamp to identify when PING was received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pong_tc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t origin_timestamp,uint64_t receive_timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PONG_TC_LEN];
    _mav_put_uint64_t(buf, 0, origin_timestamp);
    _mav_put_uint64_t(buf, 8, receive_timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PONG_TC_LEN);
#else
    mavlink_pong_tc_t packet;
    packet.origin_timestamp = origin_timestamp;
    packet.receive_timestamp = receive_timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PONG_TC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PONG_TC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
}

/**
 * @brief Encode a pong_tc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pong_tc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pong_tc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pong_tc_t* pong_tc)
{
    return mavlink_msg_pong_tc_pack(system_id, component_id, msg, pong_tc->origin_timestamp, pong_tc->receive_timestamp);
}

/**
 * @brief Encode a pong_tc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pong_tc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pong_tc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pong_tc_t* pong_tc)
{
    return mavlink_msg_pong_tc_pack_chan(system_id, component_id, chan, msg, pong_tc->origin_timestamp, pong_tc->receive_timestamp);
}

/**
 * @brief Encode a pong_tc struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param pong_tc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pong_tc_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_pong_tc_t* pong_tc)
{
    return mavlink_msg_pong_tc_pack_status(system_id, component_id, _status, msg,  pong_tc->origin_timestamp, pong_tc->receive_timestamp);
}

/**
 * @brief Send a pong_tc message
 * @param chan MAVLink channel to send the message
 *
 * @param origin_timestamp  Timestamp to identify when PING was sent
 * @param receive_timestamp  Timestamp to identify when PING was received
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pong_tc_send(mavlink_channel_t chan, uint64_t origin_timestamp, uint64_t receive_timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PONG_TC_LEN];
    _mav_put_uint64_t(buf, 0, origin_timestamp);
    _mav_put_uint64_t(buf, 8, receive_timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PONG_TC, buf, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#else
    mavlink_pong_tc_t packet;
    packet.origin_timestamp = origin_timestamp;
    packet.receive_timestamp = receive_timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PONG_TC, (const char *)&packet, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#endif
}

/**
 * @brief Send a pong_tc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pong_tc_send_struct(mavlink_channel_t chan, const mavlink_pong_tc_t* pong_tc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pong_tc_send(chan, pong_tc->origin_timestamp, pong_tc->receive_timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PONG_TC, (const char *)pong_tc, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#endif
}

#if MAVLINK_MSG_ID_PONG_TC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pong_tc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t origin_timestamp, uint64_t receive_timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, origin_timestamp);
    _mav_put_uint64_t(buf, 8, receive_timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PONG_TC, buf, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#else
    mavlink_pong_tc_t *packet = (mavlink_pong_tc_t *)msgbuf;
    packet->origin_timestamp = origin_timestamp;
    packet->receive_timestamp = receive_timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PONG_TC, (const char *)packet, MAVLINK_MSG_ID_PONG_TC_MIN_LEN, MAVLINK_MSG_ID_PONG_TC_LEN, MAVLINK_MSG_ID_PONG_TC_CRC);
#endif
}
#endif

#endif

// MESSAGE PONG_TC UNPACKING


/**
 * @brief Get field origin_timestamp from pong_tc message
 *
 * @return  Timestamp to identify when PING was sent
 */
static inline uint64_t mavlink_msg_pong_tc_get_origin_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field receive_timestamp from pong_tc message
 *
 * @return  Timestamp to identify when PING was received
 */
static inline uint64_t mavlink_msg_pong_tc_get_receive_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Decode a pong_tc message into a struct
 *
 * @param msg The message to decode
 * @param pong_tc C-struct to decode the message contents into
 */
static inline void mavlink_msg_pong_tc_decode(const mavlink_message_t* msg, mavlink_pong_tc_t* pong_tc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    pong_tc->origin_timestamp = mavlink_msg_pong_tc_get_origin_timestamp(msg);
    pong_tc->receive_timestamp = mavlink_msg_pong_tc_get_receive_timestamp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PONG_TC_LEN? msg->len : MAVLINK_MSG_ID_PONG_TC_LEN;
        memset(pong_tc, 0, MAVLINK_MSG_ID_PONG_TC_LEN);
    memcpy(pong_tc, _MAV_PAYLOAD(msg), len);
#endif
}
