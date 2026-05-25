/** @file
 *  @brief MAVLink comm protocol generated from RedAster.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_REDASTER_H
#define MAVLINK_REDASTER_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_REDASTER.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_REDASTER_XML_HASH 5412512865450340266

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{1, 136, 8, 8, 0, 0, 0}, {2, 198, 1, 1, 0, 0, 0}, {3, 165, 1, 1, 0, 0, 0}, {4, 248, 1, 1, 0, 0, 0}, {5, 184, 1, 1, 0, 0, 0}, {6, 215, 5, 5, 0, 0, 0}, {7, 226, 1, 1, 0, 0, 0}, {8, 160, 1, 1, 0, 0, 0}, {9, 113, 4, 4, 0, 0, 0}, {10, 38, 4, 4, 0, 0, 0}, {11, 71, 12, 12, 0, 0, 0}, {12, 168, 16, 16, 0, 0, 0}, {13, 67, 8, 8, 0, 0, 0}, {15, 44, 4, 4, 0, 0, 0}, {16, 81, 8, 8, 0, 0, 0}, {18, 199, 4, 4, 0, 0, 0}, {23, 68, 4, 4, 0, 0, 0}, {24, 131, 4, 4, 0, 0, 0}, {25, 5, 1, 1, 0, 0, 0}, {55, 21, 16, 16, 0, 0, 0}, {63, 183, 12, 12, 0, 0, 0}, {64, 220, 12, 12, 0, 0, 0}, {65, 181, 1, 1, 0, 0, 0}, {100, 50, 2, 2, 0, 0, 0}, {101, 251, 4, 4, 0, 0, 0}, {102, 51, 4, 4, 0, 0, 0}, {103, 57, 74, 74, 0, 0, 0}, {104, 72, 64, 64, 0, 0, 0}, {105, 87, 32, 32, 0, 0, 0}, {106, 229, 60, 60, 0, 0, 0}, {107, 245, 32, 32, 0, 0, 0}, {108, 212, 32, 32, 0, 0, 0}, {109, 140, 32, 32, 0, 0, 0}, {111, 6, 56, 56, 0, 0, 0}, {112, 165, 22, 22, 0, 0, 0}, {113, 87, 5, 5, 0, 0, 0}, {114, 0, 10, 10, 0, 0, 0}, {115, 103, 36, 36, 0, 0, 0}, {116, 9, 36, 36, 0, 0, 0}, {117, 68, 36, 36, 0, 0, 0}, {118, 234, 40, 40, 0, 0, 0}, {150, 17, 72, 72, 0, 0, 0}, {200, 93, 15, 15, 0, 0, 0}, {201, 142, 46, 46, 0, 0, 0}, {202, 108, 28, 28, 0, 0, 0}, {204, 19, 44, 44, 0, 0, 0}, {206, 66, 77, 77, 0, 0, 0}, {208, 235, 178, 178, 0, 0, 0}, {210, 32, 177, 177, 0, 0, 0}, {214, 116, 84, 84, 0, 0, 0}, {215, 183, 56, 56, 0, 0, 0}, {240, 234, 6, 6, 0, 0, 0}, {241, 142, 7, 7, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_REDASTER

// ENUM DEFINITIONS


/** @brief Enum that lists all the system IDs of the various devices */
#ifndef HAVE_ENUM_SysIDs
#define HAVE_ENUM_SysIDs
typedef enum SysIDs
{
   MAV_SYSID_ASTERICS=1, /*  | */
   MAV_SYSID_CACOFONICS=2, /*  | */
   MAV_SYSID_PANORAMIX=3, /*  | */
   MAV_SYSID_OBELICS=4, /*  | */
   MAV_SYSID_IDEFIX=5, /*  | */
   SysIDs_ENUM_END=6, /*  | */
} SysIDs;
#endif

/** @brief Enum list for all the telemetries that can be requested */
#ifndef HAVE_ENUM_SystemTMList
#define HAVE_ENUM_SystemTMList
typedef enum SystemTMList
{
   MAV_SYS_ID=1, /* State of init results about system hardware/software components | */
   MAV_LOGGER_ID=3, /* SD Logger stats | */
   MAV_MAVLINK_STATS_ID=4, /* Mavlink driver stats | */
   MAV_TASK_STATS_ID=5, /* Task scheduler statistics answer: n mavlink messages where n is the number of tasks | */
   MAV_NAS_ID=7, /* NavigationSystem data | */
   MAV_FLIGHT_ID=10, /* Flight telemetry | */
   MAV_STATS_ID=11, /* Telemetry Satistics | */
   MAV_SENSORS_STATE_ID=12, /* Sensors init state telemetry | */
   MAV_CALIBRATION_ID=17, /* Command to fetch calibration values | */
   SystemTMList_ENUM_END=18, /*  | */
} SystemTMList;
#endif

/** @brief Enum list of all sensors telemetries that can be requested */
#ifndef HAVE_ENUM_SensorsTMList
#define HAVE_ENUM_SensorsTMList
typedef enum SensorsTMList
{
   MAV_MS6511_ID=1, /* MS6511 pressure data | */
   MAV_BMI088_ID=2, /* BMI088 acc/gyro data | */
   MAV_MPU9250_ID=3, /* MPU9250 IMU data | */
   MAV_ICM42688P_ID=4, /* ICM42688P acc/gyro data | */
   MAV_BMP585_ID=5, /* BMP585 abs. preassure data | */
   MAV_H3LIS331DLTR_ID=6, /* H3LIS331DLTR accelerometer data | */
   MAV_HSCDRRN001BDSA3_ID=7, /* HSCDRRN001BDSA3 pressure difference data | */
   MAV_LIS2MDL_ID=8, /* Magnetometer data | */
   MAV_BNO055_ID=9, /* acc gyro magnetometer data | */
   MAV_GPS_ID=13, /* GPS data | */
   MAV_CURRENT_SENSE_ID=14, /* Electrical current sensors data | */
   MAV_BATTERY_VOLTAGE_ID=15, /* Battery voltage data | */
   MAV_STATIC_PRESS_ID=18, /* Static pressure data | */
   MAV_STATIC_PITOT_PRESS_ID=20, /* Pitot pressure data | */
   MAV_TOTAL_PITOT_PRESS_ID=21, /* Pitot pressure data | */
   MAV_DYNAMIC_PITOT_PRESS_ID=22, /* Pitot pressure data | */
   SensorsTMList_ENUM_END=23, /*  | */
} SensorsTMList;
#endif

/** @brief Enum of the commands */
#ifndef HAVE_ENUM_MavCommandList
#define HAVE_ENUM_MavCommandList
typedef enum MavCommandList
{
   MAV_CMD_ARM=1, /* Command to arm the rocket | */
   MAV_CMD_DISARM=2, /* Command to disarm the rocket | */
   MAV_CMD_CALIBRATE=3, /* Command to trigger the calibration | */
   MAV_CMD_SAVE_CALIBRATION=4, /* Command to save the current calibration into a file | */
   MAV_CMD_FORCE_LAUNCH=6, /* Command to force the launch state on the rocket | */
   MAV_CMD_FORCE_EXPULSION=8, /* Command to trigger nosecone expulsion | */
   MAV_CMD_FORCE_DEPLOYMENT=9, /* Command to activate the thermal cutters and cut the drogue, activating both thermal cutters sequentially | */
   MAV_CMD_START_LOGGING=11, /* Command to enable sensor logging | */
   MAV_CMD_STOP_LOGGING=12, /* Command to permanently close the log file | */
   MAV_CMD_FORCE_REBOOT=13, /* Command to reset the board from test status | */
   MAV_CMD_ENTER_TEST_MODE=14, /* Command to enter the test mode | */
   MAV_CMD_EXIT_TEST_MODE=15, /* Command to exit the test mode | */
   MAV_CMD_START_RECORDING=16, /* Command to start the internal cameras recordings | */
   MAV_CMD_STOP_RECORDING=17, /* Command to stop the internal cameras recordings | */
   MAV_CMD_APPLY_ZVK_CALIBRATION=18, /* Command to apply ZVK calibration to the sensors | */
   MavCommandList_ENUM_END=19, /*  | */
} MavCommandList;
#endif

/** @brief Enum of all the servos */
#ifndef HAVE_ENUM_ServosList
#define HAVE_ENUM_ServosList
typedef enum ServosList
{
   AIR_BRAKES_SERVO=11, /* Servo controlling the air brakes | */
   RECOVERY_SERVO_1=15, /* Servo of the expulsion system | */
   RECOVERY_SERVO_2=16, /* Servo of the expulsion system | */
   ANTENNA_SERVO_PITCH=41, /* Servo of the antenna tracking system | */
   ANTENNA_SERVO_ROLL=42, /* Servo of the antenna tracking system | */
   ServosList_ENUM_END=43, /*  | */
} ServosList;
#endif

/** @brief Enum of all the pins */
#ifndef HAVE_ENUM_PinsList
#define HAVE_ENUM_PinsList
typedef enum PinsList
{
   RAMP_PIN=0, /*  | */
   SECURITY_PIN=1, /*  | */
   PinsList_ENUM_END=2, /*  | */
} PinsList;
#endif

/** @brief Enum of all pyro charge channel */
#ifndef HAVE_ENUM_PyroChannelList
#define HAVE_ENUM_PyroChannelList
typedef enum PyroChannelList
{
   PYRO_CH_1=0, /*  | */
   PYRO_CH_2=1, /*  | */
   PyroChannelList_ENUM_END=2, /*  | */
} PyroChannelList;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ping_tc.h"
#include "./mavlink_msg_pong_tc.h"
#include "./mavlink_msg_command_tc.h"
#include "./mavlink_msg_system_tm_request_tc.h"
#include "./mavlink_msg_sensor_tm_request_tc.h"
#include "./mavlink_msg_servo_tm_request_tc.h"
#include "./mavlink_msg_set_servo_angle_tc.h"
#include "./mavlink_msg_reset_servo_tc.h"
#include "./mavlink_msg_wiggle_servo_tc.h"
#include "./mavlink_msg_set_reference_altitude_tc.h"
#include "./mavlink_msg_set_reference_temperature_tc.h"
#include "./mavlink_msg_set_orientation_tc.h"
#include "./mavlink_msg_set_orientation_quat_tc.h"
#include "./mavlink_msg_set_coordinates_tc.h"
#include "./mavlink_msg_set_deployment_altitude_tc.h"
#include "./mavlink_msg_set_target_coordinates_tc.h"
#include "./mavlink_msg_set_calibration_pressure_tc.h"
#include "./mavlink_msg_set_ada_shadow_mode_time_tc.h"
#include "./mavlink_msg_set_apogee_timeout_tc.h"
#include "./mavlink_msg_do_fire_pyro.h"
#include "./mavlink_msg_set_antenna_coordinates_arp_tc.h"
#include "./mavlink_msg_set_rocket_coordinates_arp_tc.h"
#include "./mavlink_msg_arp_command_tc.h"
#include "./mavlink_msg_ack_tm.h"
#include "./mavlink_msg_nack_tm.h"
#include "./mavlink_msg_wack_tm.h"
#include "./mavlink_msg_gps_tm.h"
#include "./mavlink_msg_imu_tm.h"
#include "./mavlink_msg_pressure_tm.h"
#include "./mavlink_msg_adc_tm.h"
#include "./mavlink_msg_voltage_tm.h"
#include "./mavlink_msg_current_tm.h"
#include "./mavlink_msg_temp_tm.h"
#include "./mavlink_msg_attitude_tm.h"
#include "./mavlink_msg_sensor_state_tm.h"
#include "./mavlink_msg_servo_tm.h"
#include "./mavlink_msg_pin_tm.h"
#include "./mavlink_msg_reference_tm.h"
#include "./mavlink_msg_registry_float_tm.h"
#include "./mavlink_msg_registry_int_tm.h"
#include "./mavlink_msg_registry_coord_tm.h"
#include "./mavlink_msg_arp_tm.h"
#include "./mavlink_msg_sys_tm.h"
#include "./mavlink_msg_logger_tm.h"
#include "./mavlink_msg_mavlink_stats_tm.h"
#include "./mavlink_msg_task_stats_tm.h"
#include "./mavlink_msg_nas_tm.h"
#include "./mavlink_msg_rocket_flight_tm.h"
#include "./mavlink_msg_rocket_stats_tm.h"
#include "./mavlink_msg_calibration_tm.h"
#include "./mavlink_msg_zvk_tm.h"
#include "./mavlink_msg_gs_discovery_request.h"
#include "./mavlink_msg_gs_discovery_response.h"

// base include



#if MAVLINK_REDASTER_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_PING_TC, MAVLINK_MESSAGE_INFO_COMMAND_TC, MAVLINK_MESSAGE_INFO_SYSTEM_TM_REQUEST_TC, MAVLINK_MESSAGE_INFO_SENSOR_TM_REQUEST_TC, MAVLINK_MESSAGE_INFO_SERVO_TM_REQUEST_TC, MAVLINK_MESSAGE_INFO_SET_SERVO_ANGLE_TC, MAVLINK_MESSAGE_INFO_RESET_SERVO_TC, MAVLINK_MESSAGE_INFO_WIGGLE_SERVO_TC, MAVLINK_MESSAGE_INFO_SET_REFERENCE_ALTITUDE_TC, MAVLINK_MESSAGE_INFO_SET_REFERENCE_TEMPERATURE_TC, MAVLINK_MESSAGE_INFO_SET_ORIENTATION_TC, MAVLINK_MESSAGE_INFO_SET_ORIENTATION_QUAT_TC, MAVLINK_MESSAGE_INFO_SET_COORDINATES_TC, MAVLINK_MESSAGE_INFO_SET_DEPLOYMENT_ALTITUDE_TC, MAVLINK_MESSAGE_INFO_SET_TARGET_COORDINATES_TC, MAVLINK_MESSAGE_INFO_SET_CALIBRATION_PRESSURE_TC, MAVLINK_MESSAGE_INFO_SET_ADA_SHADOW_MODE_TIME_TC, MAVLINK_MESSAGE_INFO_SET_APOGEE_TIMEOUT_TC, MAVLINK_MESSAGE_INFO_DO_FIRE_PYRO, MAVLINK_MESSAGE_INFO_PONG_TC, MAVLINK_MESSAGE_INFO_SET_ANTENNA_COORDINATES_ARP_TC, MAVLINK_MESSAGE_INFO_SET_ROCKET_COORDINATES_ARP_TC, MAVLINK_MESSAGE_INFO_ARP_COMMAND_TC, MAVLINK_MESSAGE_INFO_ACK_TM, MAVLINK_MESSAGE_INFO_NACK_TM, MAVLINK_MESSAGE_INFO_WACK_TM, MAVLINK_MESSAGE_INFO_GPS_TM, MAVLINK_MESSAGE_INFO_IMU_TM, MAVLINK_MESSAGE_INFO_PRESSURE_TM, MAVLINK_MESSAGE_INFO_ADC_TM, MAVLINK_MESSAGE_INFO_VOLTAGE_TM, MAVLINK_MESSAGE_INFO_CURRENT_TM, MAVLINK_MESSAGE_INFO_TEMP_TM, MAVLINK_MESSAGE_INFO_ATTITUDE_TM, MAVLINK_MESSAGE_INFO_SENSOR_STATE_TM, MAVLINK_MESSAGE_INFO_SERVO_TM, MAVLINK_MESSAGE_INFO_PIN_TM, MAVLINK_MESSAGE_INFO_REFERENCE_TM, MAVLINK_MESSAGE_INFO_REGISTRY_FLOAT_TM, MAVLINK_MESSAGE_INFO_REGISTRY_INT_TM, MAVLINK_MESSAGE_INFO_REGISTRY_COORD_TM, MAVLINK_MESSAGE_INFO_ARP_TM, MAVLINK_MESSAGE_INFO_SYS_TM, MAVLINK_MESSAGE_INFO_LOGGER_TM, MAVLINK_MESSAGE_INFO_MAVLINK_STATS_TM, MAVLINK_MESSAGE_INFO_TASK_STATS_TM, MAVLINK_MESSAGE_INFO_NAS_TM, MAVLINK_MESSAGE_INFO_ROCKET_FLIGHT_TM, MAVLINK_MESSAGE_INFO_ROCKET_STATS_TM, MAVLINK_MESSAGE_INFO_CALIBRATION_TM, MAVLINK_MESSAGE_INFO_ZVK_TM, MAVLINK_MESSAGE_INFO_GS_DISCOVERY_REQUEST, MAVLINK_MESSAGE_INFO_GS_DISCOVERY_RESPONSE}
# define MAVLINK_MESSAGE_NAMES {{ "ACK_TM", 100 }, { "ADC_TM", 106 }, { "ARP_COMMAND_TC", 65 }, { "ARP_TM", 150 }, { "ATTITUDE_TM", 111 }, { "CALIBRATION_TM", 214 }, { "COMMAND_TC", 2 }, { "CURRENT_TM", 108 }, { "DO_FIRE_PYRO", 25 }, { "GPS_TM", 103 }, { "GS_DISCOVERY_REQUEST", 240 }, { "GS_DISCOVERY_RESPONSE", 241 }, { "IMU_TM", 104 }, { "LOGGER_TM", 201 }, { "MAVLINK_STATS_TM", 202 }, { "NACK_TM", 101 }, { "NAS_TM", 206 }, { "PING_TC", 1 }, { "PIN_TM", 114 }, { "PONG_TC", 55 }, { "PRESSURE_TM", 105 }, { "REFERENCE_TM", 115 }, { "REGISTRY_COORD_TM", 118 }, { "REGISTRY_FLOAT_TM", 116 }, { "REGISTRY_INT_TM", 117 }, { "RESET_SERVO_TC", 7 }, { "ROCKET_FLIGHT_TM", 208 }, { "ROCKET_STATS_TM", 210 }, { "SENSOR_STATE_TM", 112 }, { "SENSOR_TM_REQUEST_TC", 4 }, { "SERVO_TM", 113 }, { "SERVO_TM_REQUEST_TC", 5 }, { "SET_ADA_SHADOW_MODE_TIME_TC", 23 }, { "SET_ANTENNA_COORDINATES_ARP_TC", 63 }, { "SET_APOGEE_TIMEOUT_TC", 24 }, { "SET_CALIBRATION_PRESSURE_TC", 18 }, { "SET_COORDINATES_TC", 13 }, { "SET_DEPLOYMENT_ALTITUDE_TC", 15 }, { "SET_ORIENTATION_QUAT_TC", 12 }, { "SET_ORIENTATION_TC", 11 }, { "SET_REFERENCE_ALTITUDE_TC", 9 }, { "SET_REFERENCE_TEMPERATURE_TC", 10 }, { "SET_ROCKET_COORDINATES_ARP_TC", 64 }, { "SET_SERVO_ANGLE_TC", 6 }, { "SET_TARGET_COORDINATES_TC", 16 }, { "SYSTEM_TM_REQUEST_TC", 3 }, { "SYS_TM", 200 }, { "TASK_STATS_TM", 204 }, { "TEMP_TM", 109 }, { "VOLTAGE_TM", 107 }, { "WACK_TM", 102 }, { "WIGGLE_SERVO_TC", 8 }, { "ZVK_TM", 215 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_REDASTER_H
