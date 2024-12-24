// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
     /* BASE LAYER
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ P │ Y │ F │ G | C | R | L | S |del| 7 | 8 | 9 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ O │ E │ U │ I | D | H | T | N | e | 4 | 5 | 6 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ n ┼───┼───┼───┤
     * │ Q │ J │ K │ X │ B | M | W | V | Z | t | 1 | 2 | 3 |
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │ctr│shf│                           |alt|fn | 0 |dot|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,	KC_P,	KC_Y,	KC_F,	KC_G,	KC_C,	KC_R,	KC_L,	KC_S,	KC_BSPC,	KC_7,	KC_8,	KC_9,
        KC_A,	KC_O,	KC_E,	KC_U,	KC_I,	KC_D,	KC_H,	KC_T,	KC_N,	KC_ENT,		KC_4,	KC_5,	KC_6,
        KC_Q,   KC_J,	KC_K,	KC_X,	KC_B,	KC_M,	KC_W,	KC_V,	KC_Z,	     		KC_1,	KC_2,	KC_3,
        KC_LCTL,LSFT_T(KC_LGUI),		KC_SPC,									    KC_ALGR,    MO(1),  KC_0,	KC_DOT
    ),
     /* FN LAYER
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ ↑ │ Y │ F │ G | C | R | L | S |del| 7 | 8 | 9 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ ← │ ↓ │ → │ U │ I | D | H | T | N | f | 4 | 5 | 6 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ 1 ┼───┼───┼───┤
     * │ Q │ J │ K │ X │ B | M | W | V | Z | 2 | 1 | 2 | 3 |
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │crl│shf│                           |alt| - | 0 |dot|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
     [1] = LAYOUT(
        KC_ESC,	KC_UP,	KC_Y,	KC_F,	KC_G,	KC_C,	KC_R,	KC_L,	KC_S,	KC_DEL,		KC_F7,	KC_F8,	KC_F9,
        KC_LEFT,KC_DOWN,KC_RGHT,KC_U,	KC_I,	KC_D,	KC_H,	KC_T,	KC_N,   KC_F12,	    KC_F4,	KC_F5,	KC_F6,
        KC_Q,   KC_J,	KC_K,	KC_X,	KC_B,	KC_M,	KC_W,	KC_V,	KC_Z,	     		KC_F1,	KC_F2,	KC_F3,
        KC_LCTL,KC_LSFT,		KC_TAB,									        KC_ALGR,    KC_TRNS,KC_F10,	KC_F11
    )
};
