/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once
#undef DEBOUNCE
#define DEBOUNCE 8

#undef TAPPING_TERM
#define TAPPING_TERM 300
#define COMBO_TERM 65     // how quickly all combo keys must be pressed in succession to trigger
#define COMBO_HOLD_TERM 150  // how long at least one of the combo keys must be held to trigger
#define IGNORE_MOD_TAP_INTERRUPT

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_STARTUP_SPD 60
#define COMBO_VARIABLE_LEN
