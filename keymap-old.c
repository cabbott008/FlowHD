#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_combo.h"

enum custom_keycodes {
    ELPS = ML_SAFE_RANGE,
    QMKLS,
    FRMWR,
    FLSH,
    SLCTALL,
    UNDO,
    COPY,
    CUT,
    PASTE,
};
// Layer 0 & 1 = Basic FlowHD (Blue&L.Blue), Layer 2 = FunctionKeys & NumPad (White)
const uint16_t PROGMEM keymaps[] [MATRIX_ROWS] [MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_DLR,             KC_9,               KC_5,               KC_1,               KC_3,               KC_7,              TO(3),               TO(3),               KC_6,               KC_2,               KC_0,               KC_4,               KC_8,               LSFT(LGUI(KC_ESC)),
    KC_Z,               KC_X,               KC_G,               KC_L,               KC_C,               KC_B,              LCTL(KC_GRV),        KC_MPLY,             KC_MINUS,           KC_U,               KC_O,               KC_Y,               KC_K,               KC_Q,
    MO(1),              KC_R,               KC_S,               KC_N,               KC_D,               KC_W,              LT(2,KC_LBRC),       LT(2,KC_RBRC),       KC_UNDS,            KC_A,               KC_E,               KC_I,               KC_H,               MO(1),
    KC_AT,              KC_J,               KC_F,               KC_M,               KC_P,               KC_V,                                                        KC_QUES,            KC_COMM,            KC_QUOTE,           KC_DOT,             KC_DQUO,            KC_SLSH,
    KC_HOME,            KC_END,             KC_LEFT,            KC_RIGHT,           LCTL(KC_BSPC),                         MEH_T(KC_ESC),       HYPR_T(KC_ESC),                          KC_BSPC,            KC_DOWN,            KC_UP,              KC_NO,              KC_MPLY,
                                                                                    KC_T,               KC_ENTER,          MO(2),               KC_ESC,              KC_TAB,             KC_SPC
  ),

  [1] = LAYOUT_moonlander(
    KC_NO,              KC_PERC,            KC_TILD,            KC_PIPE,            KC_CIRC,            KC_LABK,           TO(4),               KC_TRNS,             KC_RABK,            KC_EQUAL,           KC_ASTR,            KC_PLUS,            KC_AMPR,            KC_NO,
    LSFT(KC_Z),         LSFT(KC_X),         LSFT(KC_G),         LSFT(KC_L),         LSFT(KC_C),         LSFT(KC_B),        KC_TRNS,             KC_TRNS,             KC_GRV,             LSFT(KC_U),         LSFT(KC_O),         LSFT(KC_Y),         LSFT(KC_K),         LSFT(KC_Q),
    MO(0),              LSFT(KC_R),         LSFT(KC_S),         LSFT(KC_N),         LSFT(KC_D),         LSFT(KC_W),        KC_LCBR,             KC_RCBR,             KC_HASH,            LSFT(KC_A),         LSFT(KC_E),         LSFT(KC_I),         LSFT(KC_H),         MO(0),
    ELPS,               LSFT(KC_J),         LSFT(KC_F),         LSFT(KC_M),         LSFT(KC_P),         LSFT(KC_V),                                                  KC_EXLM,            KC_SCLN,            KC_LPRN,            LSFT(KC_SCLN),      KC_RPRN,            KC_BSLS,
    KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            LCTL(KC_DEL),                          KC_TRNS,             KC_TRNS,                                 KC_DEL,             KC_PGDOWN,          KC_PGUP,            KC_NO,              KC_TRNS,
                                                                                    LSFT(KC_T),         LSFT(KC_ENTER),    KC_TRNS,             KC_TRNS,             LSFT(KC_TAB),       KC_SPC
  ),

  [2] = LAYOUT_moonlander(
    KC_TRNS,            KC_F9,              KC_F5,              KC_F1,              KC_F3,              KC_F7,             TO(0),               TO(0),               KC_F6,              KC_F2,              KC_F10,             KC_F4,              KC_F8,              KC_F11,
    KC_TAB,             QMKLS,              FRMWR,              FLSH,               KC_GRV,             KC_NO,             KC_TRNS,             KC_DLR,              KC_KP_MINUS,        KC_KP_7,            KC_KP_8,            KC_KP_9,            KC_PAST,            KC_F12,
    KC_BSPC,            UNDO,               SLCTALL,            CUT,                COPY,               PASTE,             KC_TRNS,             KC_TRNS,             KC_NUM,             KC_KP_4,            KC_KP_5,            KC_KP_6,            KC_KP_DOT,          KC_KP_COMMA,
    KC_LCBR,            KC_RCBR,            KC_LBRC,            KC_RBRC,            KC_LPRN,            KC_RPRN,                                                     KC_KP_0,            KC_KP_1,            KC_KP_2,            KC_KP_3,            KC_KP_PLUS,         KC_KP_SLASH,
    TO(0),              KC_BSLS,            KC_LGUI,            KC_NO,              LCTL(KC_BSPC),                         TO(0),               KC_TAB,                                  KC_BSPC,            KC_DOWN,            KC_UP,              KC_LEFT,            KC_RIGHT,
                                                                                    KC_NO,              KC_ENTER,          KC_NO,               KC_EQUAL,            KC_TAB,             KC_SPC
  ),

  [3] = LAYOUT_moonlander(
    KC_EQUAL,           KC_1,               KC_2,               KC_3,               KC_4,               KC_5,              TO(0),               KC_NO,               KC_6,               KC_7,               KC_8,               KC_9,               KC_0,               KC_MINUS,
    KC_DEL,             KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,              KC_NO,               KC_NO,               KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,               KC_BSLASH,
    KC_ESC,             KC_A,               KC_S,               KC_D,               KC_F,               KC_G,              KC_LBRC,             KC_RBRC,             KC_H,               KC_J,               KC_K,               KC_L,               KC_SCOLON,          KC_QUOTE,
    KC_LSFT,            KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,                                                        KC_N,               KC_M,               KC_COMMA,           KC_DOT,             KC_SLASH,           KC_RSFT,
    KC_NO,              KC_NO,              KC_LEFT,            KC_RIGHT,           LCTL(KC_BSPC),                         KC_NO,               KC_NO,                                   KC_BSPC,            KC_DOWN,            KC_UP,              KC_NO,              KC_NO,
                                                                                    KC_SPC,             KC_ENTER,          KC_NO,               TO(0),               KC_TAB,             KC_SPC
  ),

};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][4] = {

    [0] = { {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255} },

    [1] = { {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255} },

    [2] = { {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255} },

    [3] = { {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
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
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case ELPS: // Type ... as a single character
        if (record->event.pressed) {
            SEND_STRING (SS_LCTL(SS_LSFT("u")));
            SEND_STRING ("2026");
            tap_code16 (KC_SPC);
            return false;
        }
        return true;

        break;
        case QMKLS:
        if (record->event.pressed) {
            SEND_STRING ("cd Sources/qmk_firmware");
        }

        break;
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
        case LT(0,KC_LBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN); // Hold [ to send (
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LT(0,KC_RBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN); // Hold ] to send )
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LSFT_T(KC_DQUO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DQUO); // Left Command Key on Hold
                return false;        // Return false to ignore further processing of key
        }
        return true;             // Return true for normal processing of tap keycode

        break;
    }
    return true;
}
