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

/* #define SSD1306OLED */
#undef USE_I2C
#undef SSD1306OLED

#define USE_SERIAL_PD2

// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

#define MOUSE_EXTENDED_REPORT

// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_MAX_SPEED 7
// #define MOUSEKEY_TIME_TO_MAX 40
// #define MOUSEKEY_WHEEL_MAX_SPEED 1
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 255

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

// #define MOUSEKEY_INERTIA
// #define MOUSEKEY_DELAY 100
// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_MAX_SPEED 32 // 1920 pixels / 60 FPS = 32 pixels / frame
// #define MOUSEKEY_TIME_TO_MAX 24 // FPS / 2
// #define MOUSEKEY_FRICTION 8
// #define MOUSEKEY_MOVE_DELTA 1
// #define MOUSEKEY_WHEEL_DELAY 10
// #define MOUSEKEY_WHEEL_INTERVAL 40
// #define MOUSEKEY_WHEEL_MAX_SPEED 32
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 40

// https://jasoncarloscox.com/blog/combo-mods/
#define COMBO_TERM 50        // how quickly all combo keys must be pressed in succession to trigger
#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger


#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES  // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true  // turn off effects when suspended
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150  // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 5
#    define RGB_MATRIX_SPD_STEP 10

    // #define RGB_MATRIX_FRAMEBUFFER_EFFECTS

    /* Disable the animations you don't want/need.  You will need to disable a good number of these    *
    * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
    #define DISABLE_RGB_MATRIX_ALPHAS_MODS  // Static dual hue, speed is hue for secondary hue
    #define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN  // Static gradient top to bottom, speed controls how much gradient changes
    #define DISABLE_RGB_MATRIX_BREATHING  // Single hue brightness cycling animation
    #define DISABLE_RGB_MATRIX_BAND_SAT  // Single hue band fading saturation scrolling left to right
    #define DISABLE_RGB_MATRIX_BAND_VAL  // Single hue band fading brightness scrolling left to right
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT  // Single hue 3 blade spinning pinwheel fades saturation
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL  // Single hue 3 blade spinning pinwheel fades brightness
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT  // Single hue spinning spiral fades saturation
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL  // Single hue spinning spiral fades brightness
    #define DISABLE_RGB_MATRIX_CYCLE_ALL  // Full keyboard solid hue cycling through full gradient
    #define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT  // Full gradient scrolling left to right
    #define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN  // Full gradient scrolling top to bottom
    #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN  // Full gradient scrolling out to in
    #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL  // Full dual gradients scrolling out to in
    #define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL  // Full dual gradients scrolling out to in
    #define DISABLE_RGB_MATRIX_CYCLE_SPIRAL  // Full dual gradients scrolling out to in
    #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradent Chevron shapped scrolling left to right
    #define DISABLE_RGB_MATRIX_DUAL_BEACON  // Full gradient spinning pinwheel around center of keyboard
    #define DISABLE_RGB_MATRIX_RAINBOW_BEACON  // Full tighter gradient spinning around center of keyboard
    #define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS  // Full dual gradients spinning two halfs of keyboard
    #define DISABLE_RGB_MATRIX_RAINDROPS  // Randomly changes a single key's hue
    #define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS  // Randomly changes a single key's hue and saturation
    #define DISABLE_RGB_MATRIX_TYPING_HEATMAP  // How hot is your WPM!
    #define DISABLE_RGB_MATRIX_DIGITAL_RAIN  // That famous computer simulation
    // #define DISABLE_RGB_MATRIX_SOLID_REACTIVE  // Static single hue, pulses keys hit to shifted hue then fades to current hue
    // #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE  // Pulses keys hit to hue & value then fades value out
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE  // Hue & value pulse near a single key hit then fades value out
    /* #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out */
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS  // Hue & value pulse the same column and row of a single key hit then fades value out
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS  // Hue & value pulse the same column and row of multiple key hits then fades value out
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS  // Hue & value pulse away on the same column and row of a single key hit then fades value out
    // #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS  // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    #define DISABLE_RGB_MATRIX_SPLASH  // Full gradient & value pulse away from a single key hit then fades value out
    #define DISABLE_RGB_MATRIX_MULTISPLASH  // Full gradient & value pulse away from multiple key hits then fades value out
    #define DISABLE_RGB_MATRIX_SOLID_SPLASH  // Hue & value pulse away from a single key hit then fades value out
    // #define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH // Hue & value pulse away from multiple key hits then fades value out

    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#endif
