#pragma once

//Disable unused functionality
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

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
