#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_combo.h"

enum custom_keycodes {
    QSPC = ML_SAFE_RANGE,
    XCLMSPC,
    CMASPC,
    SCLNSPC,
    DOTSPC,
    CLNSPC,
    RPSPC,
    TSPC,
    DSPC,
    ELPS,
    ESPC,
    SSPC, 
};

const uint16_t PROGMEM keymaps[] [MATRIX_ROWS] [MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_HASH,               KC_9,                  LT(0,KC_5),						 LT(0,KC_1),					  LT(0,KC_3),						 LT(0,KC_7),					  TG(2),						   CMB_TOG,					      KC_6,						       KC_2,					        KC_0,						       KC_4,			           KC_8,			            KC_AT,
    KC_BSPC,               KC_X,					        KC_G,						       KC_L,						      KC_C,                  KC_B,						      LGUI(KC_GRV),        TG(4),					        KC_MINUS,		           KC_U,						      KC_O,						       KC_Y,						     KC_K,						      KC_Q,
    OSL(1),						     KC_R,						      KC_S,                  KC_N,                  KC_D,                  KC_W,                  LT(0,KC_LBRC),       LT(0,KC_RBRC),		      LALT(KC_BSPC),		     KC_A,			            KC_E,			             KC_I,			           KC_H,			            OSL(1),
    LCTL_T(KC_Z),		       LGUI_T(KC_J),		      KC_F,                  KC_M,                  KC_P,                  KC_V,                                                              QSPC,				           CMASPC,				        KC_QUOTE,					     DOTSPC,			         LSFT_T(KC_DQUO),			  LALT_T(KC_SLSH), 
    LALT_T(KC_HOME),	     LSFT_T(KC_END),        KC_LEFT,					     KC_RIGHT,					    DSPC,					                                MEH_T(KC_ESC),       HYPR_T(TG(1)),	                               TSPC,				          KC_DOWN,					     KC_UP,	               LGUI_T(KC_NO),         LCTL_T(KC_MPLY),
                                                                                                LT(4,KC_T),            SSPC,				          KC_ENTER,            KC_TAB,					      ESPC,				           LT(4,KC_SPC)
  ),

  [1] = LAYOUT_moonlander(
    KC_DLR,				         KC_PERC,					      KC_TILD,					     KC_PIPE,					      KC_CIRC,			         KC_LABK,			          TG(2),					     KC_TRNS,			          KC_RABK,		  	       KC_EQUAL,				      KC_ASTR,				       KC_PLUS,			         KC_AMPR,			          KC_GRV,
    KC_DEL,					       KC_X,		              LSFT(KC_G),					   LSFT(KC_L),					  LSFT(KC_C),					   LSFT(KC_B),					  KC_TRNS,				     KC_TRNS,			          KC_UNDS,				       LSFT(KC_U),			      LSFT(KC_O),				     LSFT(KC_Y),			     LSFT(KC_K),	  		    LSFT(KC_Q),
    OSL(0),						     LSFT(KC_R),				    LSFT(KC_S),				     LSFT(KC_N),				    LSFT(KC_D),				     LSFT(KC_W),			      KC_LCBR,					   KC_RCBR,				        LALT(KC_BSPC),		     LSFT(KC_A),				    LSFT(KC_E),			       LSFT(KC_I),				   LSFT(KC_H),				    OSL(0),
    LSFT(KC_Z),            LSFT(KC_J),            LSFT(KC_F),				     LSFT(KC_M),				    LSFT(KC_P),				     LSFT(KC_V),												                                XCLMSPC,				       SCLNSPC,				        KC_LPRN,				       CLNSPC,				       RPSPC,			            LALT_T(KC_BSLS), 
    KC_TRNS,               KC_TRNS,               KC_TRNS,			       	 KC_TRNS,				        KC_DEL,					                              KC_TRNS,             KC_TRNS,			                                 ELPS,		              KC_PGDOWN,			       KC_PGUP,				       KC_TRNS,		            KC_TRNS,        
                                                                                                LSFT(KC_T),				     KC_NO,				          LSFT(KC_ENTER),      LSFT(KC_TAB),				  KC_NO,			           KC_NO
  ),

  [2] = LAYOUT_moonlander(
    KC_HASH,               KC_9,                  LT(0,KC_5),						 LT(0,KC_1),						LT(0,KC_3),						 LT(0,KC_7),					  TG(0),						   CMB_TOG,					      KC_6,						       KC_2,					        KC_0,						       KC_4,			           KC_8,			            KC_AT,
    KC_BSPC,               KC_X,					        KC_G,						       KC_L,						      KC_C,                  KC_B,						      LGUI(KC_GRV),        TG(4),					        KC_MINUS,		           KC_U,						      KC_O,						       KC_Y,						     KC_K,						      KC_Q,
    OSL(3),						     KC_R,						      KC_S,                  KC_N,                  KC_D,                  KC_W,                  LT(0,KC_LBRC),       LT(0,KC_RBRC),		      LALT(KC_BSPACE),		   KC_A,			            KC_E,			             KC_I,			           KC_H,			            OSL(3),
    LCTL_T(KC_Z),		       LGUI_T(KC_J),		      KC_F,                  KC_M,                  KC_P,                  KC_V,                                                              KC_QUES,				       KC_COMMA,				      KC_QUOTE,					     KC_DOT,			         LSFT_T(KC_DQUO),			  LALT_T(KC_SLSH), 
    LALT_T(KC_HOME),	     LSFT_T(KC_END),        KC_LEFT,					     KC_RIGHT,					    KC_D,					                                MEH_T(KC_ESC),       HYPR_T(TG(1)),	                               KC_T,				          KC_DOWN,					     KC_UP,	               LGUI_T(KC_NO),         LCTL_T(KC_MPLY),
                                                                                                LT(4,KC_T),            KC_S,				          KC_ENTER,            KC_TAB,					      KC_E,				           LT(4,KC_SPC)
  ),

  [3] = LAYOUT_moonlander(
    KC_DLR,				         KC_PERC,					      KC_TILD,					     KC_PIPE,					      KC_CIRC,			         KC_LABK,			          TG(2),					     KC_TRNS,			          KC_RABK,		  	       KC_EQUAL,				      KC_ASTR,				       KC_PLUS,			         KC_AMPR,			          KC_GRV,
    KC_DEL,					       KC_X,		              LSFT(KC_G),					   LSFT(KC_L),					  LSFT(KC_C),					   LSFT(KC_B),					  KC_TRNS,				     KC_TRNS,			          KC_UNDS,				       LSFT(KC_U),			      LSFT(KC_O),				     LSFT(KC_Y),			     LSFT(KC_K),	  		    LSFT(KC_Q),
    OSL(2),						     LSFT(KC_R),				    LSFT(KC_S),				     LSFT(KC_N),				    LSFT(KC_D),				     LSFT(KC_W),			      KC_LCBR,					   KC_RCBR,				        LALT(KC_BSPC),		     LSFT(KC_A),				    LSFT(KC_E),			       LSFT(KC_I),				   LSFT(KC_H),				    OSL(2),
    LSFT(KC_Z),            LSFT(KC_J),            LSFT(KC_F),				     LSFT(KC_M),				    LSFT(KC_P),				     LSFT(KC_V),												                                KC_EXLM,				       KC_SCLN,				        KC_LPRN,				       LSFT(KC_SCLN),				 KC_RPRN,			          LALT_T(KC_BSLS), 
    KC_TRNS,               KC_TRNS,               KC_TRNS,			       	 KC_TRNS,				        KC_DEL,					                              TO(0),               KC_TRNS,			                                 ELPS,		              KC_PGDOWN,			       KC_PGUP,				       KC_TRNS,		            KC_TRNS,        
                                                                                                LSFT(KC_T),				     KC_NO,				          LSFT(KC_ENTER),      LSFT(KC_TAB),				  KC_NO,			           KC_NO
  ),

  [4] = LAYOUT_moonlander(
    KC_TRNS,			         KC_F9,						      KC_F5,						     KC_F1,				          KC_F3,				         KC_F7,			            TO(0),						   KC_LGUI,					      KC_F6,			           KC_F2,			            KC_F10,			           KC_F4,			           KC_F8,			            KC_F11,
    KC_TAB,					       KC_EXLM,				        KC_AT,				         KC_LCBR,			          KC_RCBR,			         KC_PIPE,			          TO(0),						   KC_TRNS,		    	      KC_UP,				         KC_KP_7,				        KC_KP_8,				       KC_KP_9,				       KC_PAST,			          KC_F12, 
    KC_BSPC,				       KC_HASH,			          KC_DLR,				         KC_LPRN,				        KC_RPRN,			         KC_GRAVE,			        KC_TRNS,				     KC_TRNS,			          KC_DOWN,				       KC_KP_4,				        KC_KP_5,				       KC_KP_6,				       KC_KP_MINUS,				    KC_KP_PLUS, 
    KC_LSHIFT,				     KC_PERC,			          KC_CIRC,			         KC_LBRC,			          KC_RBRC,			         KC_TILD,												                                    KC_KP_0,				       KC_KP_1,				        KC_KP_2,				       KC_KP_3,				       KC_KP_EQUAL,				    KC_KP_SLASH,
    TO(0),					       KC_BSLS,				        KC_LGUI,			         KC_NO,						      KC_NO,						                            TO(0),						 	 KC_TAB,				                               KC_BSPC,				        KC_KP_COMMA,				   KC_KP_DOT,				     KC_LEFT,				        KC_RIGHT,       
                                                                                                KC_SPC,                KC_NO,						      KC_ENTER,            KC_TAB,					      KC_NO,				         KC_SPC
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][5] = {

    [0] = { {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255} },

    [1] = { {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255} },

    [2] = { {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255} },

    [3] = { {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255}, {210,252,255} },
    
    [4] = { {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255} },
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
    case 4:
      set_layer_color(4);
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
        case QSPC:
        if (record->event.pressed) {
            SEND_STRING ("? ");
        }

        break;
        case XCLMSPC:
        if (record->event.pressed) {
            SEND_STRING ("! ");
        }

        break;
        case CMASPC:
        if (record->event.pressed) {
            SEND_STRING (", ");
        }

        break;
        case SCLNSPC:
        if (record->event.pressed) {
            SEND_STRING ("; ");
        }

        break;
        case DOTSPC:
        if (record->event.pressed) {
            SEND_STRING (". ");
        } 
      
        break;

        case CLNSPC:
        if (record->event.pressed) {
            SEND_STRING (": ");
        }

        break;
        case RPSPC:
        if (record->event.pressed) {
            SEND_STRING (") ");
        }

        break;
        case TSPC:
        if (record->event.pressed) {
            SEND_STRING ("t ");
        }

        break;
        case DSPC:
        if (record->event.pressed) {
            SEND_STRING ("d ");
        }

        break;
        case ELPS:
        if (record->event.pressed) {
            SEND_STRING (SS_LALT(";"));
        }

        break;
        case ESPC:
        if (record->event.pressed) {
            SEND_STRING ("e ");
        }

        break;
        case SSPC:
        if (record->event.pressed) {
            SEND_STRING ("s ");
        }

        break;
        case LT(0,KC_5):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_Z)); // Hold f to send Cmd-Z for Undo 
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LT(0,KC_3):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_X)); // Hold m to send Cmd-X for Cut 
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

       break; 
        case LT(0,KC_1):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_C)); // Hold p to send Cmd-C for Copy
                return false;
        }
        return true;             // Return true for normal processing of tap keycode
    
        break;
        case LT(0,KC_7):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_V)); // Hold v to send Cmd-V for Paste
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
                tap_code16(KC_DQUO); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
        }
        return true;             // Return true for normal processing of tap keycode

        break;
    }
    return true;
}
