/*
 * HID Sensors Driver
 * Copyright (c) 2012, Intel Corporation.
 * Copyright (C) 2017 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
#ifndef _HID_SENSORS_IDS_H
#define _HID_SENSORS_IDS_H

#define HID_MAX_PHY_DEVICES					0xFF

/* Accel 3D (200073) */
#define HID_USAGE_SENSOR_TYPE_ACCEL_3D				0x200073
#define HID_USAGE_SENSOR_DATA_ACCEL				0x200452
#define HID_USAGE_SENSOR_DATA_ACCEL_X_AXIS			0x200453
#define HID_USAGE_SENSOR_DATA_ACCEL_Y_AXIS			0x200454
#define HID_USAGE_SENSOR_DATA_ACCEL_Z_AXIS			0x200455

/* Motion Detector (200077) */
#define HID_USAGE_SENSOR_TYPE_MOTION_DETECTOR			0x200077
#define HID_USAGE_SENSOR_DATA_MOTION_STATE			0x200451

/* Pressure (200031) */
#define HID_USAGE_SENSOR_TYPE_PRESSURE				0x200031
#define HID_USAGE_SENSOR_DATA_ATMOSPHERIC_PRESSURE		0x200431

/* Humidity (200032) */
#define HID_USAGE_SENSOR_TYPE_HUMIDITY				0x200032
#define HID_USAGE_SENSOR_DATA_RELATIVE_HUMIDITY			0x200433

/* Temperature (200033) */
#define HID_USAGE_SENSOR_TYPE_TEMPERATURE			0x200033
#define HID_USAGE_SENSOR_DATA_TEMPERATURE			0x200434

/* ALS (200041) */
#define HID_USAGE_SENSOR_TYPE_ALS				0x200041
#define HID_USAGE_SENSOR_DATA_LIGHT				0x2004D0
#define HID_USAGE_SENSOR_DATA_LIGHT_ILLUM			0x2004D1

/* Gyro 3D (200076) */
#define HID_USAGE_SENSOR_TYPE_GYRO_3D				0x200076
#define HID_USAGE_SENSOR_DATA_ANGL_VELOCITY			0x200456
#define HID_USAGE_SENSOR_DATA_ANGL_VELOCITY_X_AXIS		0x200457
#define HID_USAGE_SENSOR_DATA_ANGL_VELOCITY_Y_AXIS		0x200458
#define HID_USAGE_SENSOR_DATA_ANGL_VELOCITY_Z_AXIS		0x200459

/* Compass 3D (200083) */
#define HID_USAGE_SENSOR_TYPE_COMPASS_3D			0x200083
#define HID_USAGE_SENSOR_DATA_ORIENT_COMP_MAGN_NORTH		0x200475
#define HID_USAGE_SENSOR_DATA_ORIENT_COMP_TRUE_NORTH		0x200476
#define HID_USAGE_SENSOR_DATA_ORIENT_MAGN_FLUX			0x200484
#define HID_USAGE_SENSOR_DATA_ORIENT_MAGN_FLUX_X_AXIS		0x200485
#define HID_USAGE_SENSOR_DATA_ORIENT_MAGN_FLUX_Y_AXIS		0x200486
#define HID_USAGE_SENSOR_DATA_ORIENT_MAGN_FLUX_Z_AXIS		0x200487

/* Incli 3D (200086) */
#define HID_USAGE_SENSOR_TYPE_INCLI_3D				0x200086
#define HID_USAGE_SENSOR_DATA_ORIENT_TILT			0x20047E
#define HID_USAGE_SENSOR_DATA_ORIENT_TILT_X			0x20047F
#define HID_USAGE_SENSOR_DATA_ORIENT_TILT_Y			0x200480
#define HID_USAGE_SENSOR_DATA_ORIENT_TILT_Z			0x200481

/* Device Orientation (20008a) */
#define HID_USAGE_SENSOR_TYPE_DEVICE_ORIENTATION		0x20008A
#define HID_USAGE_SENSOR_DATA_ORIENT_ROTATION_MATRIX		0x200482
#define HID_USAGE_SENSOR_DATA_ORIENT_QUATERNION			0x200483
#define HID_USAGE_SENSOR_DATA_ORIENT_MAGNETIC_HEADING		0x200471

/* Distance (20008d) */
#define HID_USAGE_SENSOR_TYPE_DISTANCE				0x20008D
#define HID_USAGE_SENSOR_DATA_ORIENT_DISTANCE			0x200479

/* Time (2000a0) */
#define HID_USAGE_SENSOR_TYPE_TIME				0x2000A0
#define HID_USAGE_SENSOR_DATA_TIME				0x200520
#define HID_USAGE_SENSOR_DATA_TIME_YEAR				0x200521
#define HID_USAGE_SENSOR_DATA_TIME_MONTH			0x200522
#define HID_USAGE_SENSOR_DATA_TIME_DAY				0x200523
#define HID_USAGE_SENSOR_DATA_TIME_HOUR				0x200525
#define HID_USAGE_SENSOR_DATA_TIME_MINUTE			0x200526
#define HID_USAGE_SENSOR_DATA_TIME_SECOND			0x200527
#define HID_USAGE_SENSOR_DATA_TIME_MILLISECOND			0x200528
#define HID_USAGE_SENSOR_DATA_TIME_TIMESTAMP			0x200529

/* Generic (2000e2) */
#define HID_USAGE_SENSOR_TYPE_GENERIC				0x2000E2
#define HID_USAGE_SENSOR_DATA_GENERIC				0x200560

/* Custom (2000e1) */
#define HID_USAGE_SENSOR_TYPE_CUSTOM				0x2000E1
#define HID_USAGE_SENSOR_DATA_CUSTOM_VALUE			0x200543
#define HID_USAGE_SENSOR_DATA_CUSTOM_VALUES(i)			(0x200544 + (i))
#define HID_USAGE_SENSOR_DATA_CUSTOM_VALUES_NB			\
	(HID_USAGE_SENSOR_DATA_GENERIC - HID_USAGE_SENSOR_DATA_CUSTOM_VALUES(0))

/* Data modifiers */
#define HID_USAGE_SENSOR_DATA_MOD_SENSITIVITY_ABS		0x1000
#define HID_USAGE_SENSOR_DATA_MOD_MAX				0x2000
#define HID_USAGE_SENSOR_DATA_MOD_MIN				0x3000
#define HID_USAGE_SENSOR_DATA_MOD_ACCURACY			0x4000
#define HID_USAGE_SENSOR_DATA_MOD_RESOLUTION			0x5000
#define HID_USAGE_SENSOR_DATA_MOD_THRESHOLD_HIGH		0x6000
#define HID_USAGE_SENSOR_DATA_MOD_THRESHOLD_LOW			0x7000
#define HID_USAGE_SENSOR_DATA_MOD_PERIOD_MAX			0xC000
#define HID_USAGE_SENSOR_DATA_MOD_SENSITIVITY_RANGE_PCT		0xD000
#define HID_USAGE_SENSOR_DATA_MOD_SENSITIVITY_REL_PCT		0xE000

/* Units */
#define HID_USAGE_SENSOR_UNITS_NOT_SPECIFIED			0x00
#define HID_USAGE_SENSOR_UNITS_LUX				0xE1000001
#define HID_USAGE_SENSOR_UNITS_KELVIN				0x01000100
#define HID_USAGE_SENSOR_UNITS_FAHRENHEIT			0x03000100
#define HID_USAGE_SENSOR_UNITS_PASCAL				0xF1E1
#define HID_USAGE_SENSOR_UNITS_NEWTON				0x11E1
#define HID_USAGE_SENSOR_UNITS_METERS_PER_SECOND		0x11F0
#define HID_USAGE_SENSOR_UNITS_METERS_PER_SEC_SQRD		0x11E0
#define HID_USAGE_SENSOR_UNITS_FARAD				0xE14F2000
#define HID_USAGE_SENSOR_UNITS_AMPERE				0x01001000
#define HID_USAGE_SENSOR_UNITS_WATT				0x21d1
#define HID_USAGE_SENSOR_UNITS_HENRY				0x21E1E000
#define HID_USAGE_SENSOR_UNITS_OHM				0x21D1E000
#define HID_USAGE_SENSOR_UNITS_VOLT				0x21D1F000
#define HID_USAGE_SENSOR_UNITS_HERTZ				0x01F0
#define HID_USAGE_SENSOR_UNITS_DEGREES				0x14
#define HID_USAGE_SENSOR_UNITS_DEGREES_PER_SECOND		0x14F0
#define HID_USAGE_SENSOR_UNITS_DEGREES_PER_SEC_SQRD		0x14E0
#define HID_USAGE_SENSOR_UNITS_RADIANS				0x12
#define HID_USAGE_SENSOR_UNITS_RADIANS_PER_SECOND		0x12F0
#define HID_USAGE_SENSOR_UNITS_RADIANS_PER_SEC_SQRD		0x12E0
#define HID_USAGE_SENSOR_UNITS_SECOND				0x0110
#define HID_USAGE_SENSOR_UNITS_GAUSS				0x01E1F000
#define HID_USAGE_SENSOR_UNITS_GRAM				0x0101
#define HID_USAGE_SENSOR_UNITS_CENTIMETER			0x11

/* Common selectors */
#define HID_USAGE_SENSOR_STATE					0x200201
#define HID_USAGE_SENSOR_EVENT					0x200202
#define HID_USAGE_SENSOR_PROPERTY				0x200300
#define HID_USAGE_SENSOR_PROP_FRIENDLY_NAME			0x200301
#define HID_UASGE_SENSOR_PROP_PERSISTENT_UNIQUE_ID		0x200302
#define HID_USAGE_SENSOR_PROP_SENSOR_STATUS			0x200303
#define HID_USAGE_SENSOR_PROP_MINIMUM_REPORT_INTERVAL		0x200304
#define HID_USAGE_SENSOR_PROP_SENSOR_MANUFACTURER		0x200305
#define HID_USAGE_SENSOR_PROP_SENSOR_MODEL			0x200306
#define HID_USAGE_SENSOR_PROP_SENSOR_SERIAL_NUMBER		0x200307
#define HID_USAGE_SENSOR_PROP_SENSOR_DESCRIPTION		0x200308
#define HID_USAGE_SENSOR_PROP_HARDWARE_REVISION			0x20030B
#define HID_USAGE_SENSOR_PROP_FIRMWARE_VERSION			0x20030C
#define HID_USAGE_SENSOR_PROP_REPORT_INTERVAL			0x20030E
#define HID_USAGE_SENSOR_PROP_SENSITIVITY_ABS			0x20030F
#define HID_USAGE_SENSOR_PROP_SENSITIVITY_RANGE_PCT		0x200310
#define HID_USAGE_SENSOR_PROP_SENSITIVITY_REL_PCT		0x200311
#define HID_USAGE_SENSOR_PROP_ACCURACY				0x200312
#define HID_USAGE_SENSOR_PROP_RESOLUTION			0x200313
#define HID_USAGE_SENSOR_PROP_RANGE_MAXIMUM			0x200314
#define HID_USAGE_SENSOR_PROP_RANGE_MINIMUM			0x200315
#define HID_USAGE_SENSOR_PROP_REPORT_STATE			0x200316
#define HID_USAGE_SENSOR_PROP_SAMPLING_RATE			0x200317
#define HID_USAGE_SENSOR_PROP_POWER_STATE			0x200319

/* Sensor States */
#define HID_USAGE_SENSOR_STATE_UNKNOWN				0x00
#define HID_USAGE_SENSOR_STATE_READY				0x01
#define HID_USAGE_SENSOR_STATE_NOT_AVAILABLE			0x02
#define HID_USAGE_SENSOR_STATE_NO_DATA				0x03
#define HID_USAGE_SENSOR_STATE_INITIALIZING			0x04
#define HID_USAGE_SENSOR_STATE_ACCESS_DENIED			0x05
#define HID_USAGE_SENSOR_STATE_ERROR				0x06

/* Sensor Events */
#define HID_USAGE_SENSOR_EVENT_UNKNOWN				0x00
#define HID_USAGE_SENSOR_EVENT_STATE_CHANGED			0x01
#define HID_USAGE_SENSOR_EVENT_PROPERTY_CHANGED			0x02
#define HID_USAGE_SENSOR_EVENT_DATA_UPDATED			0x03
#define HID_USAGE_SENSOR_EVENT_POLL_RESPONSE			0x04
#define HID_USAGE_SENSOR_EVENT_CHANGE_SENSITIVITY		0x05
#define HID_USAGE_SENSOR_EVENT_MAX_REACHED			0x06
#define HID_USAGE_SENSOR_EVENT_MIN_REACHED			0x07
#define HID_USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_UPWARD	0x08
#define HID_USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_DOWNWARD	0x09
#define HID_USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_UPWARD	0x0a
#define HID_USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_DOWNWARD	0x0b
#define HID_USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_UPWARD	0x0c
#define HID_USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_DOWNWARD	0x0d
#define HID_USAGE_SENSOR_EVENT_PERIOD_EXCEEDED			0x0e
#define HID_USAGE_SENSOR_EVENT_FREQUENCY_EXCEEDED		0x0f
#define HID_USAGE_SENSOR_EVENT_COMPLEX_TRIGGER			0x10

/* Power state enumerations */
#define HID_USAGE_SENSOR_PROP_POWER_STATE_UNDEFINED			0x00
#define HID_USAGE_SENSOR_PROP_POWER_STATE_D0_FULL_POWER			0x01
#define HID_USAGE_SENSOR_PROP_POWER_STATE_D1_LOW_POWER			0x02
#define HID_USAGE_SENSOR_PROP_POWER_STATE_D2_STANDBY_WITH_WAKE		0x03
#define HID_USAGE_SENSOR_PROP_POWER_STATE_D3_SLEEP_WITH_WAKE		0x04
#define HID_USAGE_SENSOR_PROP_POWER_STATE_D4_POWER_OFF			0x05

/* Report State enumerations */
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_NO_EVENTS			0x00
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_ALL_EVENTS		0x01
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_THRESHOLD_EVENTS		0x02
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_NO_EVENTS_WAKE		0x03
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_ALL_EVENTS_WAKE		0x04
#define HID_USAGE_SENSOR_PROP_REPORTING_STATE_THRESHOLD_EVENTS_WAKE	0x05

#endif
