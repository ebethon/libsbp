/*
 * Copyright (C) 2015-2018 Swift Navigation Inc.
 * Contact: https://support.swiftnav.com
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

/*****************************************************************************
 * Automatically generated from yaml/swiftnav/sbp/system.yaml
 * with generate.py. Please do not hand edit!
 *****************************************************************************/

/** \defgroup system System
 *
 * * Standardized system messages from Swift Navigation devices.
 * \{ */

#ifndef LIBSBP_SYSTEM_MESSAGES_H
#define LIBSBP_SYSTEM_MESSAGES_H

#include "common.h"

SBP_PACK_START


/** System start-up message
 *
 * The system start-up message is sent once on system
 * start-up. It notifies the host or other attached devices that
 * the system has started and is now ready to respond to commands
 * or configuration requests.
 */
#define SBP_MSG_STARTUP               0xFF00
#define SBP_STARTUP_CAUSE_OF_STARTUP_MASK (0x1ff)
#define SBP_STARTUP_CAUSE_OF_STARTUP_SHIFT (0u)
#define SBP_STARTUP_CAUSE_OF_STARTUP_GET(flags) \
                             (((flags) >> SBP_STARTUP_CAUSE_OF_STARTUP_SHIFT) \
                             & SBP_STARTUP_CAUSE_OF_STARTUP_MASK)
#define SBP_STARTUP_CAUSE_OF_STARTUP_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_STARTUP_CAUSE_OF_STARTUP_MASK)) \
                             << (SBP_STARTUP_CAUSE_OF_STARTUP_SHIFT)));} while(0)
                             

#define SBP_STARTUP_CAUSE_OF_STARTUP_POWER_ON (0)
#define SBP_STARTUP_CAUSE_OF_STARTUP_SOFTWARE_RESET (1)
#define SBP_STARTUP_CAUSE_OF_STARTUP_WATCHDOG_RESET (2)
#define SBP_STARTUP__MASK (0x1ff)
#define SBP_STARTUP__SHIFT (0u)
#define SBP_STARTUP__GET(flags) \
                             (((flags) >> SBP_STARTUP__SHIFT) \
                             & SBP_STARTUP__MASK)
#define SBP_STARTUP__SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_STARTUP__MASK)) \
                             << (SBP_STARTUP__SHIFT)));} while(0)
                             

#define SBP_STARTUP__COLD_START (0)
#define SBP_STARTUP__WARM_START (1)
#define SBP_STARTUP__HOT_START (2)

typedef struct SBP_ATTR_PACKED {
  u8 cause;           /**< Cause of startup */
  u8 startup_type;    /**< Startup type */
  u16 reserved;        /**< Reserved */
} msg_startup_t;


/** System heartbeat message
 *
 * The heartbeat message is sent periodically to inform the host
 * or other attached devices that the system is running. It is
 * used to monitor system malfunctions. It also contains status
 * flags that indicate to the host the status of the system and
 * whether it is operating correctly. Currently, the expected
 * heartbeat interval is 1 sec.
 * 
 * The system error flag is used to indicate that an error has
 * occurred in the system. To determine the source of the error,
 * the remaining error flags should be inspected.
 */
#define SBP_MSG_HEARTBEAT             0xFFFF
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_MASK (0x1)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_SHIFT (31u)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_SHIFT) \
                             & SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_MASK)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_MASK)) \
                             << (SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_NO_EXTERNAL_ANTENNA_DETECTED (0)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_PRESENT_EXTERNAL_ANTENNA_IS_PRESENT (1)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_MASK (0x1)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_SHIFT (30u)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_SHIFT) \
                             & SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_MASK)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_MASK)) \
                             << (SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_NO_SHORT_DETECTED (0)
#define SBP_HEARTBEAT_EXTERNAL_ANTENNA_SHORT_SHORT_DETECTED (1)
#define SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_MASK (0xff)
#define SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_SHIFT (16u)
#define SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_SHIFT) \
                             & SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_MASK)
#define SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_MASK)) \
                             << (SBP_HEARTBEAT_SBP_MAJOR_PROTOCOL_VERSION_NUMBER_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_MASK (0xff)
#define SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_SHIFT (8u)
#define SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_SHIFT) \
                             & SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_MASK)
#define SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_MASK)) \
                             << (SBP_HEARTBEAT_SBP_MINOR_PROTOCOL_VERSION_NUMBER_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_SWIFTNAP_ERROR_MASK (0x1)
#define SBP_HEARTBEAT_SWIFTNAP_ERROR_SHIFT (2u)
#define SBP_HEARTBEAT_SWIFTNAP_ERROR_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_SWIFTNAP_ERROR_SHIFT) \
                             & SBP_HEARTBEAT_SWIFTNAP_ERROR_MASK)
#define SBP_HEARTBEAT_SWIFTNAP_ERROR_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_SWIFTNAP_ERROR_MASK)) \
                             << (SBP_HEARTBEAT_SWIFTNAP_ERROR_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_SWIFTNAP_ERROR_SYSTEM_HEALTHY (0)
#define SBP_HEARTBEAT_SWIFTNAP_ERROR_AN_ERROR_HAS_OCCURRED_IN_THE_SWIFTNAP (1)
#define SBP_HEARTBEAT_IO_ERROR_MASK (0x1)
#define SBP_HEARTBEAT_IO_ERROR_SHIFT (1u)
#define SBP_HEARTBEAT_IO_ERROR_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_IO_ERROR_SHIFT) \
                             & SBP_HEARTBEAT_IO_ERROR_MASK)
#define SBP_HEARTBEAT_IO_ERROR_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_IO_ERROR_MASK)) \
                             << (SBP_HEARTBEAT_IO_ERROR_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_IO_ERROR_SYSTEM_HEALTHY (0)
#define SBP_HEARTBEAT_IO_ERROR_AN_IO_ERROR_HAS_OCCURRED (1)
#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_MASK (0x1)
#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_SHIFT (0u)
#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_GET(flags) \
                             (((flags) >> SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_SHIFT) \
                             & SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_MASK)
#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_MASK)) \
                             << (SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_SHIFT)));} while(0)
                             

#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_SYSTEM_HEALTHY (0)
#define SBP_HEARTBEAT_SYSTEM_ERROR_FLAG_AN_ERROR_HAS_OCCURRED (1)

typedef struct SBP_ATTR_PACKED {
  u32 flags;    /**< Status flags */
} msg_heartbeat_t;


/** Inertial Navigation System status message
 *
 * The INS status message describes the state of the operation
 * and initialization of the inertial navigation system. 
 */
#define SBP_MSG_INS_STATUS            0xFF03
#define SBP_INS_STATUS_INS_TYPE_MASK (0x7)
#define SBP_INS_STATUS_INS_TYPE_SHIFT (29u)
#define SBP_INS_STATUS_INS_TYPE_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_INS_TYPE_SHIFT) \
                             & SBP_INS_STATUS_INS_TYPE_MASK)
#define SBP_INS_STATUS_INS_TYPE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_INS_TYPE_MASK)) \
                             << (SBP_INS_STATUS_INS_TYPE_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_INS_TYPE_SMOOTHPOSE_LOOSELY_COUPLED (0)
#define SBP_INS_STATUS_INS_TYPE_OTHER_LOOSELY_COUPLED (1)
#define SBP_INS_STATUS_ODOMETRY_SYNCH_MASK (0x1)
#define SBP_INS_STATUS_ODOMETRY_SYNCH_SHIFT (10u)
#define SBP_INS_STATUS_ODOMETRY_SYNCH_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_ODOMETRY_SYNCH_SHIFT) \
                             & SBP_INS_STATUS_ODOMETRY_SYNCH_MASK)
#define SBP_INS_STATUS_ODOMETRY_SYNCH_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_ODOMETRY_SYNCH_MASK)) \
                             << (SBP_INS_STATUS_ODOMETRY_SYNCH_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_ODOMETRY_SYNCH_ODOMETRY_TIMESTAMP_NOMINAL (0)
#define SBP_INS_STATUS_ODOMETRY_SYNCH_ODOMETRY_TIMESTAMP_OUT_OF_BOUNDS (1)
#define SBP_INS_STATUS_ODOMETRY_STATUS_MASK (0x3)
#define SBP_INS_STATUS_ODOMETRY_STATUS_SHIFT (8u)
#define SBP_INS_STATUS_ODOMETRY_STATUS_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_ODOMETRY_STATUS_SHIFT) \
                             & SBP_INS_STATUS_ODOMETRY_STATUS_MASK)
#define SBP_INS_STATUS_ODOMETRY_STATUS_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_ODOMETRY_STATUS_MASK)) \
                             << (SBP_INS_STATUS_ODOMETRY_STATUS_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_ODOMETRY_STATUS_NO_ODOMETRY (0)
#define SBP_INS_STATUS_ODOMETRY_STATUS_ODOMETRY_RECEIVED_WITHIN_LAST_SECOND (1)
#define SBP_INS_STATUS_ODOMETRY_STATUS_ODOMETRY_NOT_RECEIVED_WITHIN_LAST_SECOND (2)
#define SBP_INS_STATUS_INS_ERROR_MASK (0xf)
#define SBP_INS_STATUS_INS_ERROR_SHIFT (4u)
#define SBP_INS_STATUS_INS_ERROR_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_INS_ERROR_SHIFT) \
                             & SBP_INS_STATUS_INS_ERROR_MASK)
#define SBP_INS_STATUS_INS_ERROR_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_INS_ERROR_MASK)) \
                             << (SBP_INS_STATUS_INS_ERROR_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_INS_ERROR_IMU_DATA_ERROR (1)
#define SBP_INS_STATUS_INS_ERROR_INS_LICENSE_ERROR (2)
#define SBP_INS_STATUS_INS_ERROR_IMU_CALIBRATION_DATA_ERROR (3)
#define SBP_INS_STATUS_GNSS_FIX_MASK (0x1)
#define SBP_INS_STATUS_GNSS_FIX_SHIFT (3u)
#define SBP_INS_STATUS_GNSS_FIX_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_GNSS_FIX_SHIFT) \
                             & SBP_INS_STATUS_GNSS_FIX_MASK)
#define SBP_INS_STATUS_GNSS_FIX_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_GNSS_FIX_MASK)) \
                             << (SBP_INS_STATUS_GNSS_FIX_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_GNSS_FIX_NO_GNSS_FIX_AVAILABLE (0)
#define SBP_INS_STATUS_GNSS_FIX_GNSS_FIX (1)
#define SBP_INS_STATUS_MODE_MASK (0x7)
#define SBP_INS_STATUS_MODE_SHIFT (0u)
#define SBP_INS_STATUS_MODE_GET(flags) \
                             (((flags) >> SBP_INS_STATUS_MODE_SHIFT) \
                             & SBP_INS_STATUS_MODE_MASK)
#define SBP_INS_STATUS_MODE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_STATUS_MODE_MASK)) \
                             << (SBP_INS_STATUS_MODE_SHIFT)));} while(0)
                             

#define SBP_INS_STATUS_MODE_AWAITING_INITIALIZATION (0)
#define SBP_INS_STATUS_MODE_DYNAMICALLY_ALIGNING (1)
#define SBP_INS_STATUS_MODE_READY (2)
#define SBP_INS_STATUS_MODE_GNSS_OUTAGE_EXCEEDS_MAX_DURATION (3)
#define SBP_INS_STATUS_MODE_FASTSTART_SEEDING (4)
#define SBP_INS_STATUS_MODE_FASTSTART_VALIDATING (5)

typedef struct SBP_ATTR_PACKED {
  u32 flags;    /**< Status flags */
} msg_ins_status_t;


/** Inertial Navigation System update status message
 *
 * The INS update status message contains informations about executed and rejected INS updates.
 * This message is expected to be extended in the future as new types of measurements are being added.
 */
#define SBP_MSG_INS_UPDATES           0xFF06
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_POSITION_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_GNSS_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_WHEELTICK_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_SPEED_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_NHC_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT (4u)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_ATTEMPTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             

#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK (0xf)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT (0u)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_GET(flags) \
                             (((flags) >> SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT) \
                             & SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)
#define SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SET(flags, val) \
                             do {((flags) |= \
                             (((val) & (SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_MASK)) \
                             << (SBP_INS_UPDATES_NUMBER_OF_REJECTED_ZERO_VELOCITY_UPDATES_SINCE_LAST_MESSAGE_SHIFT)));} while(0)
                             


typedef struct SBP_ATTR_PACKED {
  u32 tow;           /**< GPS Time of Week [ms] */
  u8 gnsspos;       /**< GNSS position update status flags */
  u8 gnssvel;       /**< GNSS velocity update status flags */
  u8 wheelticks;    /**< Wheelticks update status flags */
  u8 speed;         /**< Wheelticks update status flags */
  u8 nhc;           /**< NHC update status flags */
  u8 zerovel;       /**< Zero velocity update status flags */
} msg_ins_updates_t;


/** Offset of the local time with respect to GNSS time
 *
 * The GNSS time offset message contains the information that is needed to translate messages
 * tagged with a local timestamp (e.g. IMU or wheeltick messages) to GNSS time for the sender
 * producing this message.
 */
#define SBP_MSG_GNSS_TIME_OFFSET      0xFF07

typedef struct SBP_ATTR_PACKED {
  s16 weeks;           /**< Weeks portion of the time offset [weeks] */
  s32 milliseconds;    /**< Milliseconds portion of the time offset [ms] */
  s16 microseconds;    /**< Microseconds portion of the time offset [microseconds] */
  u8 flags;           /**< Status flags (reserved) */
} msg_gnss_time_offset_t;


/** \} */

SBP_PACK_END

#endif /* LIBSBP_SYSTEM_MESSAGES_H */