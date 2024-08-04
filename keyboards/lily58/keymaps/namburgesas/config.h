/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

// #define SSD1306OLED

// #define USE_SERIAL_PD2

// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
*/

// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_MAX_SPEED 7
// #define MOUSEKEY_TIME_TO_MAX 40
// #define MOUSEKEY_WHEEL_MAX_SPEED 1
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 255

#define MOUSE_EXTENDED_REPORT

#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 10
#define MOUSEKEY_MOVE_DELTA 64
#define MOUSEKEY_INITIAL_SPEED 100
#define MOUSEKEY_BASE_SPEED 3000
#define MOUSEKEY_DECELERATED_SPEED 400
#define MOUSEKEY_ACCELERATED_SPEED 3000
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 16
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8

// https://jasoncarloscox.com/blog/combo-mods/
#define COMBO_TERM 50        // how quickly all combo keys must be pressed in succession to trigger
#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger
