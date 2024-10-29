#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_combo.h"

enum custom_keycodes {
    ELPS = SAFE_RANGE,
    MDASH,
    NDASH,
    DVIDE,
    DGREE,
    FRMWR,
    FLSH,
    R_QUE,
    R_EXC,
    R_XXX,
    PT_RHT,
    PT_LFT,
    PT_DWN,
    PT_UP,
    PRAYER,
    STOP,
    CHILDX,
    SLCTALL,
    UNDO,
    COPY,
    CUT,
    PASTE,
};

// Layer 0 = Basic Qwerty (Blue), Layer 1 = Various Symbol Keys (White), Layer 2 = Function Keys & Number Pad (Green)

const uint16_t PROGMEM keymaps[] [MATRIX_ROWS] [MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,           KC_9,               KC_5,               KC_1,               KC_3,               KC_7,              TO(2),               TO(2),               KC_6,               KC_2,               KC_0,               KC_4,               KC_8,               KC_MINUS,
    LT(2, KC_TAB),      KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,              LGUI(KC_P),          LGUI(KC_W),          KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,               LT(2, KC_BSLS),
    LT(1, KC_ESC),      KC_A,               KC_S,               KC_D,               KC_F,               KC_G,              KC_LBRC,             KC_RBRC,             KC_H,               KC_J,               KC_K,               KC_L,               KC_SCLN,            KC_QUOTE,
    SC_LSPO,            KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,                                                        KC_N,               KC_M,               KC_COMMA,           KC_DOT,             KC_SLASH,           SC_RSPC,
    KC_LSFT,            LCTL_T(KC_NO),      LALT_T(KC_LEFT),    LGUI_T(KC_RIGHT),   LCTL(KC_BSPC),                         TO(1),               TO(1),                                   KC_BSPC,            RCTL_T(KC_DOWN),    RALT_T(KC_UP),      RGUI_T(KC_NO),      KC_RSFT,
                                                                                    KC_SPC,             KC_ENTER,          KC_HOME,             KC_END,              LT(1, KC_TAB),      KC_SPC
  ),
// The left keypad is not used on Layer 1 to protect against strange behavior in using a multi-use key with the ' key.
  [1] = LAYOUT_moonlander(:
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,             KC_NO,               KC_NO,               KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_TRNS,
    KC_TAB,             KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,             KC_NO,               KC_NO,               LSFT(KC_7),         LSFT(KC_3),         LSFT(KC_1),         LSFT(KC_8),         ELPS,               LSFT(KC_6),
    KC_ESC,             KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,             KC_NO,               KC_NO,               LSFT(KC_2),         LSFT(KC_MINUS),     MDASH,              NDASH,              KC_LBRC,            KC_RBRC,
    SC_LSPO,            KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                                                       LSFT(KC_4),         LSFT(KC_5),         KC_GRV,             LSFT(KC_GRV),       LSFT(KC_LBRC),      LSFT(KC_RBRC),
    KC_LSFT,            LCTL_T(KC_NO),      LALT_T(KC_LEFT),    LGUI_T(KC_RIGHT),   LCTL(KC_BSPC),                         TO(0),               TO(0),                                   KC_DEL,             RCTL_T(KC_DOWN),    RALT_T(KC_UP),      RGUI_T(KC_NO),      KC_RSFT,
                                                                                    KC_SPC,             KC_ENTER,          KC_PGUP,             KC_PGDN,             KC_TAB,             KC_SPC
  ),

  [2] = LAYOUT_moonlander(
    FLSH,               KC_F9,              KC_F5,              KC_F1,              KC_F3,              KC_F7,             KC_F11,              KC_F12,              KC_F6,              KC_F2,              KC_F10,             KC_F4,              KC_F8,              FRMWR,
    KC_TAB,             PT_UP,              PRAYER,             STOP,               R_QUE,              R_EXC,             DGREE,               DVIDE,               KC_EQUAL,           KC_7,               KC_8,               KC_9,               KC_COMMA,           KC_BSLS,
    KC_ESC,             UNDO,               SLCTALL,            CUT,                COPY,               PASTE,             KC_LBRC,             KC_RBRC,             KC_MINUS,           KC_4,               KC_5,               KC_6,               KC_SCLN,            KC_DOT,
    SC_LSPO,            PT_DWN,             R_XXX,              PT_RHT,             PT_LFT,             CHILDX,                                                      KC_0,               KC_1,               KC_2,               KC_3,               KC_SLASH,           KC_TRNS,
    KC_LSFT,            LCTL_T(KC_NO),      LALT_T(KC_LEFT),    LGUI_T(KC_RIGHT),   LCTL(KC_DEL),                          TO(0),               TO(0),                                   KC_BSPC,            RCTL_T(KC_DOWN),    RALT_T(KC_UP),      RGUI_T(KC_NO),      KC_TRNS,
                                                                                    KC_SPC,             KC_ENTER,          KC_PGUP,             KC_PGDN,             KC_TAB,             KC_SPC
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {

    [0] = { {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255} },

    [1] = { {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255} },

    [2] = { {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SC_LSPO:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
    switch (keycode) {
        case SC_RSPC:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  switch (keycode) {
      case FRMWR:
      if (record->event.pressed) {
          SEND_STRING ("qmk compile -kb moonlander -km FlowHD");
      }

      break;
      case FLSH:
      if (record->event.pressed) {
          SEND_STRING ("qmk flash -kb moonlander -km FlowHD");
      }

      break;
      case SLCTALL:
      if (record->event.pressed) {
          tap_code16(LCTL(KC_A)); // Select All
          return false;
      }
      return true;             // Return true for normal processing of tap keycode

      break;
      case UNDO:
      if (record->event.pressed) {
          tap_code16(LCTL(KC_Z)); // Send Cmd-Z for Undo
          return false;
      }
      return true;             // Return true for normal processing of tap keycode

      break;
      case COPY:
      if (record->event.pressed) {
          tap_code16(LCTL(KC_C)); // Send Cmd-C for Copy
          return false;
      }
      return true;             // Return true for normal processing of tap keycode

      break;
      case CUT:
      if (record->event.pressed) {
          tap_code16(LCTL(KC_X)); // Send Cmd-X for Cut
          return false;
      }
      return true;             // Return true for normal processing of tap keycode

      break;
      case PASTE:
      if (record->event.pressed) {
          tap_code16(LCTL(KC_V)); // Send Cmd-V for Paste
          return false;
      }
      return true;             // Return true for normal processing of tap keycode

      break;
      case ELPS: // Type ... as a single character
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("2026");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
      case MDASH: // Long Dash
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("2014");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
      case NDASH: // Middle Dash
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("2013");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
      case DVIDE: // Division Symbol
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("00f7");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case DGREE: // Degree Symbol
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("00b0");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case R_QUE: // Big Red Question Mark
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("2753");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case R_EXC: // Big Red Exclamation Mark
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("2757");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case PT_LFT: // Hand pointing left
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f448");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case PT_RHT: // Hand pointing right
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f449");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case PT_UP: // Hand point up
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f446");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case PT_DWN: // Hand point down
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f447");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
   case PRAYER: // Praying hands
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f64f");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
   case STOP: // Praying hands
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f6d1");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case CHILDX: // Warning Children Crossing
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("1f6b8");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    case R_XXX: // Big Red X
      if (record->event.pressed) {
          SEND_STRING (SS_LCTL(SS_LSFT("u")));
          SEND_STRING ("274c");
          tap_code16 (KC_SPC);
          return false;
      }
      return true;

      break;
    return true;
  }
  return true;
}
