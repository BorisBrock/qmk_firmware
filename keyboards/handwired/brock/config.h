// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

//#define DEBUG_MATRIX_SCAN_RATE

//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// RGB configuration
#define RGB_ENABLE_PIN GP25
