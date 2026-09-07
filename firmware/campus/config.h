#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4650 // [f]lur[p]les
#define PRODUCT_ID      0x6780 // [C]am[P]us
#define DEVICE_VER      0x0001
#define PRODUCT         Campus

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B0, B1, B2, B3, F6 }
#define MATRIX_COL_PINS { C7, C6, B6, B5, B4, F7, F0, F1, F4, F5, D5, D3, D2, D1, D0 }
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D4, D6, D7 }
#define ENCODERS_PAD_B { D6, D7, D4 }
#define ENCODER_RESOLUTION 4

#define BACKLIGHT_PIN B7
#define BACKLIGHT_DEFAULT_ON
#define BACKLIGHT_LEVELS 12
#define BACKLIGHT_DEFAULT_LEVEL 12

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* Set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT