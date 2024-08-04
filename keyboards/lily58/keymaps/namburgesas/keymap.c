#include QMK_KEYBOARD_H

// #ifdef PROTOCOL_LUFA
//   #include "lufa.h"
//   #include "split_util.h"
// #endif
// #ifdef SSD1306OLED
//   #include "ssd1306.h"
// #endif

// #ifdef RGBLIGHT_ENABLE
// //Following line allows macro to read current RGB settings
// extern rgblight_config_t rgblight_config;
// #endif

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

// Aliases
// #define LOWER TL_LOWR
// #define RAISE TL_UPPR
#define MSBTN1 KC_MS_BTN1
#define MSBTN2 KC_MS_BTN2
#define MSBTN3 KC_MS_BTN3
#define MSUP KC_MS_UP
#define MSDN KC_MS_DOWN
#define MSLT KC_MS_LEFT
#define MSRT KC_MS_RIGHT
#define MSWHUP KC_MS_WH_UP
#define MSWHDN KC_MS_WH_DOWN
#define MSWHLT KC_MS_WH_LEFT
#define MSWHRT KC_MS_WH_RIGHT

// Dual function keys
#define KC_CTLESC   CTL_T(KC_ESC)
#define KC_ALTESC   ALT_T(KC_ESC)
#define LWR_ESC     LT(_LOWER, KC_ESC)
#define RSE_TAB     LT(_RAISE, KC_TAB)

// Combos
enum combos {
    COMBO_BOOT,
    COMBO_LCTL,
    COMBO_LGUI,
    COMBO_LALT,
    COMBO_LCTLGUI,
    COMBO_LCTLALT,
    COMBO_LGUIALT,
    COMBO_LCTLGUIALT,
    COMBO_RCTL,
    COMBO_RGUI,
    COMBO_RALT,
    COMBO_RCTLGUI,
    COMBO_RCTLALT,
    COMBO_RGUIALT,
    COMBO_RCTLGUIALT,
    COMBO_LSCTL,
    COMBO_LSGUI,
    COMBO_LSALT,
    COMBO_LSCTLGUI,
    COMBO_LSCTLALT,
    COMBO_LSGUIALT,
    COMBO_LSCTLGUIALT,
    COMBO_RSCTL,
    COMBO_RSGUI,
    COMBO_RSALT,
    COMBO_RSCTLGUI,
    COMBO_RSCTLALT,
    COMBO_RSGUIALT,
    COMBO_RSCTLGUIALT,
    COMBO_LS,
    COMBO_RS,

    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

uint16_t COMBO_LEN = COMBO_LENGTH; // nifty trick continued

const uint16_t PROGMEM boot_combo[] = {KC_Z, KC_SLSH, KC_SPC, SC_SENT, COMBO_END};
const uint16_t PROGMEM fd_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM fs_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM fa_combo[] = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM fds_combo[] = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM fda_combo[] = {KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM fsa_combo[] = {KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM fdsa_combo[] = {KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM js_combo[] = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM jks_combo[] = {KC_J, KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jls_combo[] = {KC_J, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jkls_combo[] = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM gd_combo[] = {KC_G, KC_D, COMBO_END};
const uint16_t PROGMEM gs_combo[] = {KC_G, KC_S, COMBO_END};
const uint16_t PROGMEM ga_combo[] = {KC_G, KC_A, COMBO_END};
const uint16_t PROGMEM gds_combo[] = {KC_G, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM gda_combo[] = {KC_G, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM gsa_combo[] = {KC_G, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM gdsa_combo[] = {KC_G, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM hk_combo[] = {KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM hl_combo[] = {KC_H, KC_L, COMBO_END};
const uint16_t PROGMEM hs_combo[] = {KC_H, KC_SCLN, COMBO_END};
const uint16_t PROGMEM hkl_combo[] = {KC_H, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM hks_combo[] = {KC_H, KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM hls_combo[] = {KC_H, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM hkls_combo[] = {KC_H, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM gf_combo[] = {KC_G, KC_F, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};

combo_t key_combos[] = {
    [COMBO_BOOT] = COMBO(boot_combo, QK_BOOT),
    [COMBO_LCTL] = COMBO(fd_combo, KC_LCTL),
    [COMBO_LGUI] = COMBO(fs_combo, KC_LGUI),
    [COMBO_LALT] = COMBO(fa_combo, KC_LALT),
    [COMBO_LCTLGUI] = COMBO(fds_combo, LCTL(KC_LGUI)),
    [COMBO_LCTLALT] = COMBO(fda_combo, LCTL(KC_LALT)),
    [COMBO_LGUIALT] = COMBO(fsa_combo, LGUI(KC_LALT)),
    [COMBO_LCTLGUIALT] = COMBO(fdsa_combo, LCA(KC_LGUI)),
    [COMBO_RCTL] = COMBO(jk_combo, KC_RCTL),
    [COMBO_RGUI] = COMBO(jl_combo, KC_RGUI),
    [COMBO_RALT] = COMBO(js_combo, KC_RALT),
    [COMBO_RCTLGUI] = COMBO(jkl_combo, RCTL(KC_RGUI)),
    [COMBO_RCTLALT] = COMBO(jks_combo, RCTL(KC_RALT)),
    [COMBO_RGUIALT] = COMBO(jls_combo, RGUI(KC_RALT)),
    [COMBO_RCTLGUIALT] = COMBO(jkls_combo, RAG(KC_RCTL)),
    [COMBO_LSCTL] = COMBO(gd_combo, LSFT(KC_LCTL)),
    [COMBO_LSGUI] = COMBO(gs_combo, LSFT(KC_LGUI)),
    [COMBO_LSALT] = COMBO(ga_combo, LSFT(KC_LALT)),
    [COMBO_LSCTLGUI] = COMBO(gds_combo, LSG(KC_LCTL)),
    [COMBO_LSCTLALT] = COMBO(gda_combo, LSA(KC_LCTL)),
    [COMBO_LSGUIALT] = COMBO(gsa_combo, LSG(KC_LALT)),
    [COMBO_LSCTLGUIALT] = COMBO(gdsa_combo, LSFT(LAG(KC_LCTL))),
    [COMBO_RSCTL] = COMBO(hk_combo, RSFT(KC_RCTL)),
    [COMBO_RSGUI] = COMBO(hl_combo, RSFT(KC_RGUI)),
    [COMBO_RSALT] = COMBO(hs_combo, RSFT(KC_RALT)),
    [COMBO_RSCTLGUI] = COMBO(hkl_combo, RSG(KC_RCTL)),
    [COMBO_RSCTLALT] = COMBO(hks_combo, RSA(KC_RCTL)),
    [COMBO_RSGUIALT] = COMBO(hls_combo, RSG(KC_RALT)),
    [COMBO_RSCTLGUIALT] = COMBO(hkls_combo, RSFT(RAG(KC_RCTL))),
    [COMBO_LS] = COMBO(gf_combo, KC_LSFT),
    [COMBO_RS] = COMBO(hj_combo, KC_RSFT),
};

// Main keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT( \
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,  \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ALTESC,\
  KC_CTLESC,KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  \
  SC_LSPO,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    MSWHLT,  MSWHRT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,  \
                             KC_LALT, KC_LGUI, LWR_ESC, KC_SPC,  SC_SENT, RSE_TAB, KC_RALT, KC_RGUI \
),

[_LOWER] = LAYOUT( \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
  KC_GRV , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    MSWHLT,  \
  _______, KC_LSFT, _______, KC_EQL,  KC_MINS, KC_LPRN,                   KC_RPRN, MSBTN3,  MSUP,    MSBTN2,  MSWHUP,  MSWHRT,  \
  _______, _______, _______, KC_DQUO, KC_QUOT, KC_LBRC, _______, _______, KC_RBRC, MSLT,    MSDN,    MSRT,    MSWHDN,  _______, \
                             _______, _______, _______, _______, _______, MSBTN1, _______, _______ \
),

[_RAISE] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, KC_PGUP, KC_UP,   KC_HOME, KC_GRV,  KC_INS,                    KC_PSCR, KC_LPRN, KC_RPRN, _______, _______, _______, \
  _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_DEL,                    _______, KC_MINS, KC_EQL,  KC_PAUS, KC_SCRL, _______, \
  _______, KC_PGDN, KC_APP,  KC_END,  KC_BSLS, KC_CAPS, _______, _______, _______, KC_QUOT, KC_DQUO, KC_VOLD, KC_VOLU, _______, \
                             _______, _______, _______, KC_LSFT, _______, _______, _______, _______ \
),

[_ADJUST] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
  _______, KC_F11,  KC_F12,  _______, _______, MSWHLT,                    MSWHRT,  _______, _______, _______, MSWHLT,  _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MSWHRT,  _______, \
                             _______, _______, _______, _______, _______, _______, _______, _______ \
  )

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
