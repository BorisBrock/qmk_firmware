// Copyright 2022 Boris Brock
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

//#define DEBUG_MATRIX_SCAN_RATE

//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* pinout - DON'T CHANGE */
#define MATRIX_ROW_PINS { GP18, GP19, GP20, GP21, GP22, GP24 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
