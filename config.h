/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once
#undef DEBOUNCE
#define DEBOUNCE 8
#define CAPS_LOCK_STATUS
#define USB_SUSPEND_WAKEUP_DELAY 0
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_STARTUP_SPD 60

// Per Key setting are available on most of the below settings
#undef TAPPING_TERM
#define TAPPING_TERM 250
#define QUICK_TAP_TERM 200 // Allow auto-repeat on Dual Function Keys by Double Tapping
#define COMBO_TERM 50     // How quickly all combo keys must be pressed in succession to trigger
#define COMBO_HOLD_TERM 100  // How long at least one of the combo keys must be held to trigger
#define COMBO_MUST_HOLD_MODS
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_VARIABLE_LEN
#define PERMISSIVE_HOLD // Nested Taps are allowed under the Tapping Term
//define HOLD_ON_OTHER_KEY_PRESS // Rolling Taps are allowed under the Tapping Term
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY // Rolling Taps are allowed under the Tapping Term per Key
