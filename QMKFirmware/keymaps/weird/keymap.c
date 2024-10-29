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
     * │crl│alg│                           |fn |scl| 0 | . |
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,		KC_7,	KC_8,	KC_9,
        KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_ENT,		KC_4,	KC_5,	KC_6,
        LSFT_T(KC_CAPS),KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_BSPC,			KC_1,	KC_2,	KC_3,
        KC_LCTL,ALGR_T(KC_LGUI),		KC_SPC,									MO(1),		MO(2),  KC_0,	KC_DOT
    ),
     /*
      * FN LAYER
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ |\│ W │ E │ R │ T | ' | - | = | [ | ] |f7 |f8 |f9 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G | H | ; | " | \ | e |f4 |f5 |f6 |
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ n ┼───┼───┼───┤
     * │shf│ Z │ X │ C │ V | B | , | . | / | t |f1 |f2 |f3 |
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │crl│alg│                           |trn|f10|f11|f12|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
     // KC_MINS KC_EQL KC_LBRC KC_RBRC KC_BSLS KC_NUHS KC_SCLN KC_QUOT KC_GRV KC_COMMA KC_DOT KC_SLASH 
    [1] = LAYOUT(
        KC_ESC,KC_NUBS,	KC_E,	KC_R,	KC_T,	KC_GRV,	KC_MINS,KC_EQL,	KC_LBRC,KC_RBRC,	KC_F7,	KC_F8,	KC_F9,
        KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_SCLN,KC_QUOT,KC_BSLS,KC_ENT,		KC_F4,	KC_F5,	KC_F6,
        KC_LSFT,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_COMM,KC_DOT,	KC_SLSH,    		KC_F1,	KC_F2,	KC_F3,
        KC_LCTL,KC_ALGR,				KC_TAB,									KC_TRNS,	KC_F10, KC_F11,	KC_F12
    ),
     /*
      * SCROLL LAYER
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ W │ E │ R │ T | ' | - | = | [ | ] |HOM|PRT|PGU|
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G | H | ; | " | \ | e |END|UP |PGD|
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼ n ┼───┼───┼───┤
     * │shf│ Z │ X │ C │ V | B | , | . |del| t |LFT|DWN|RGH|
     * ├───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┤
     * │crl│alt│                           |MEN|trn|INS|APP|
     * └───┴───┴───────────────────────────┴───┴───┴───┴───┘
     */
     // KC_MINS KC_EQL KC_LBRC KC_RBRC KC_BSLS KC_NUHS KC_SCLN KC_QUOT KC_GRV KC_COMMA KC_DOT KC_SLASH 
    [2] = LAYOUT(
        KC_ESC,KC_W,	KC_E,	KC_R,	KC_T,	KC_GRV,	KC_MINS,KC_EQL,	KC_LBRC,KC_RBRC,	KC_HOME,KC_PSCR,KC_PGUP,
        KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_SCLN,KC_QUOT,KC_BSLS,KC_ENT,		KC_END,	KC_UP,	KC_PGDN,
        KC_LSFT,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_COMM,KC_DOT,	KC_DEL,      		KC_LEFT,KC_DOWN,KC_RGHT,
        KC_LCTL,KC_LALT,				KC_TAB,									KC_MENU,	KC_TRNS,KC_INS,KC_APP
    )
};
