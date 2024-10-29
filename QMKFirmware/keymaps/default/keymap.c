// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
     /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T | Y | U | I | O | P | 7 | 8 | 9 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G | H | J | K | L | e | 4 | 5 | 6 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ n ┼───┼───┼───┤
     * │shf│ Z │ X │ C │ V | B | N | M |bks| t | 1 | 2 | 3 |
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │crl│alt│                           |fn | 0 | . |num|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,		KC_KP_7,	KC_KP_8,	KC_KP_9,
        KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_ENT,		KC_KP_4,	KC_KP_5,	KC_KP_6,
        KC_LSFT,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_BSPC,			KC_KP_1,	KC_KP_2,	KC_KP_3,
        KC_LCTL,KC_LALT,				KC_SPC,									KC_F1,		KC_KP_0,	KC_KP_DOT,	KC_NUM
    )
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ ! │ " │ # │ $ │ % | & | / | ( | ) | = |F7 |F8 |F9 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ \ │ S │ D | º | + | ' | ~ | ' │ « | e |F4 |F5 |F6 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ n ┼───┼───┼───┤
     * │shf│ < │ X │ Ç │ V | , | . | - |esc| t |F1 |F2 |F3 |
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │alg│alt│            tab            |trn|F10|F11|F12|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
};
