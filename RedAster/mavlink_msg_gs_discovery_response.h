#pragma once
// MESSAGE GS_DISCOVERY_RESPONSE PACKING

#define MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE 241


typedef struct __mavlink_gs_discovery_response_t {
 uint32_t ip; /*<  IP address of the device*/
 uint16_t port; /*<  Port of the device*/
 uint8_t device_id; /*<  Device ID*/
} mavlink_gs_discovery_response_t;

#define MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN 7
#define MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN 7
#define MAVLINK_MSG_ID_241_LEN 7
#define MAVLINK_MSG_ID_241_MIN_LEN 7

#define MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC 142
#define MAVLINK_MSG_ID_241_CRC 142



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GS_DISCOVERY_RESPONSE { \
    241, \
    "GS_DISCOVERY_RESPONSE", \
    3, \
    {  { "ip", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gs_discovery_response_t, ip) }, \
         { "port", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gs_discovery_response_t, port) }, \
         { "device_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_gs_discovery_response_t, device_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GS_DISCOVERY_RESPONSE { \
    "GS_DISCOVERY_RESPONSE", \
    3, \
    {  { "ip", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gs_discovery_response_t, ip) }, \
         { "port", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gs_discovery_response_t, port) }, \
         { "device_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_gs_discovery_response_t, device_id) }, \
         } \
}
#endif

/**
 * @brief Pack a gs_discovery_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ip  IP address of the device
 * @param port  Port of the device
 * @param device_id  Device ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_discovery_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t ip, uint16_t port, uint8_t device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint16_t(buf, 4, port);
    _mav_put_uint8_t(buf, 6, device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#else
    mavlink_gs_discovery_response_t packet;
    packet.ip = ip;
    packet.port = port;
    packet.device_id = device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
}

/**
 * @brief Pack a gs_discovery_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param ip  IP address of the device
 * @param port  Port of the device
 * @param device_id  Device ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_discovery_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t ip, uint16_t port, uint8_t device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint16_t(buf, 4, port);
    _mav_put_uint8_t(buf, 6, device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#else
    mavlink_gs_discovery_response_t packet;
    packet.ip = ip;
    packet.port = port;
    packet.device_id = device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a gs_discovery_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ip  IP address of the device
 * @param port  Port of the device
 * @param device_id  Device ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_discovery_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t ip,uint16_t port,uint8_t device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint16_t(buf, 4, port);
    _mav_put_uint8_t(buf, 6, device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#else
    mavlink_gs_discovery_response_t packet;
    packet.ip = ip;
    packet.port = port;
    packet.device_id = device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
}

/**
 * @brief Encode a gs_discovery_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gs_discovery_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_discovery_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gs_discovery_response_t* gs_discovery_response)
{
    return mavlink_msg_gs_discovery_response_pack(system_id, component_id, msg, gs_discovery_response->ip, gs_discovery_response->port, gs_discovery_response->device_id);
}

/**
 * @brief Encode a gs_discovery_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gs_discovery_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_discovery_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gs_discovery_response_t* gs_discovery_response)
{
    return mavlink_msg_gs_discovery_response_pack_chan(system_id, component_id, chan, msg, gs_discovery_response->ip, gs_discovery_response->port, gs_discovery_response->device_id);
}

/**
 * @brief Encode a gs_discovery_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gs_discovery_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_discovery_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gs_discovery_response_t* gs_discovery_response)
{
    return mavlink_msg_gs_discovery_response_pack_status(system_id, component_id, _status, msg,  gs_discovery_response->ip, gs_discovery_response->port, gs_discovery_response->device_id);
}

/**
 * @brief Send a gs_discovery_response message
 * @param chan MAVLink channel to send the message
 *
 * @param ip  IP address of the device
 * @param port  Port of the device
 * @param device_id  Device ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gs_discovery_response_send(mavlink_channel_t chan, uint32_t ip, uint16_t port, uint8_t device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint16_t(buf, 4, port);
    _mav_put_uint8_t(buf, 6, device_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE, buf, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#else
    mavlink_gs_discovery_response_t packet;
    packet.ip = ip;
    packet.port = port;
    packet.device_id = device_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a gs_discovery_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gs_discovery_response_send_struct(mavlink_channel_t chan, const mavlink_gs_discovery_response_t* gs_discovery_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_discovery_response_send(chan, gs_discovery_response->ip, gs_discovery_response->port, gs_discovery_response->device_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE, (const char *)gs_discovery_response, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gs_discovery_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t ip, uint16_t port, uint8_t device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint16_t(buf, 4, port);
    _mav_put_uint8_t(buf, 6, device_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE, buf, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#else
    mavlink_gs_discovery_response_t *packet = (mavlink_gs_discovery_response_t *)msgbuf;
    packet->ip = ip;
    packet->port = port;
    packet->device_id = device_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE GS_DISCOVERY_RESPONSE UNPACKING


/**
 * @brief Get field ip from gs_discovery_response message
 *
 * @return  IP address of the device
 */
static inline uint32_t mavlink_msg_gs_discovery_response_get_ip(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field port from gs_discovery_response message
 *
 * @return  Port of the device
 */
static inline uint16_t mavlink_msg_gs_discovery_response_get_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field device_id from gs_discovery_response message
 *
 * @return  Device ID
 */
static inline uint8_t mavlink_msg_gs_discovery_response_get_device_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a gs_discovery_response message into a struct
 *
 * @param msg The message to decode
 * @param gs_discovery_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_gs_discovery_response_decode(const mavlink_message_t* msg, mavlink_gs_discovery_response_t* gs_discovery_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gs_discovery_response->ip = mavlink_msg_gs_discovery_response_get_ip(msg);
    gs_discovery_response->port = mavlink_msg_gs_discovery_response_get_port(msg);
    gs_discovery_response->device_id = mavlink_msg_gs_discovery_response_get_device_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN;
        memset(gs_discovery_response, 0, MAVLINK_MSG_ID_GS_DISCOVERY_RESPONSE_LEN);
    memcpy(gs_discovery_response, _MAV_PAYLOAD(msg), len);
#endif
}
