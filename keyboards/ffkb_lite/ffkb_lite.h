#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
 /*
#define LAYOUT_split_3x6_3( \
    KC_NO, K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K10, KC_NO, \
    KC_NO, K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K20, KC_NO, \
    KC_NO, K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K30, KC_NO, \
                  K33,   K34,   K35,   K36,   K37,   K38  \
) { \
    { KC_NO, K01,   K02,   K03,   K04,   K05 }, \
    { KC_NO, K11,   K12,   K13,   K14,   K15 }, \
    { KC_NO, K21,   K22,   K23,   K24,   K25 }, \
    { KC_NO, KC_NO, KC_NO, K33,   K34,   K35 }, \
    { K10,   K09,   K08,   K07,   K06, KC_NO }, \
    { K20,   K19,   K18,   K17,   K16, KC_NO }, \
    { K30,   K29,   K28,   K27,   K26, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, K38,   K37,   K36 }, \
}
 */

//workaround issue https://github.com/qmk/qmk_firmware/issues/20378
#define KC_N1 KC_NO
#define KC_N2 KC_NO
#define KC_N3 KC_NO
#define KC_N4 KC_NO
#define KC_N5 KC_NO
#define KC_N6 KC_NO

#define LAYOUT_split_3x6_3( \
KC_N1, K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, KC_N4,  \
KC_N2, K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, KC_N5,  \
KC_N3, K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, KC_N6,  \
            K32,  K33,  K34,         K35,  K36,  K37 \
) \
{ \
    { KC_NO, K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, KC_NO }, \
    { KC_NO, K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, KC_NO }, \
    { KC_NO, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, K32, K33, K34, K35, K36, K37, KC_NO, KC_NO, KC_NO } \
}
