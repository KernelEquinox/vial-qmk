/* Copyright 2021 Katrina (@PepperKats)
 * Copyright 2023 KernelEquinox (@KernelEquinox)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
    _FN1,
    _FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
        ┌───┐   ┌───────┐┌───┬───┬───┐┌───┬───┬───┐
        │ESC│   │KC_BSPC││F1 │F2 │F3 ││F4 │F5 │F6 │
        └───┘   └───────┘└───┴───┴───┘└───┴───┴───┘
        ┌───┬───┬───┬───┐┌───┬───┬───┐
        │NUM│ / │ * │ - ││PAS│SCR│PSC│  ┌───┐ ┌───┐
        ├───┼───┼───┼───┤├───┼───┼───│  │HOM│ │END│
        │ 7 │ 8 │ 9 │   ││INS│HOM│PGU│  └───┘ └───┘
        ├───┼───┼───│ + │├───┼───┼───│
        │ 4 │ 5 │ 6 │   ││END│DEL│PGD│
        ├───┼───┼───┼───┤└───┼───┼───┘     ┌───┐
        │ 1 │ 2 │ 3 │ E │    │UP │         │   │
        ├───┼───┼───│ N │┌───┼───┼───┐     └───┘
        │   0   │DEL│ T ││LFT│DWN│RHT│
        └───┴───┴───┴───┘└───┴───┴───┘
*/

    [_BASE] = LAYOUT(
        MO(1),            KC_BSPC,          RGB_RMOD, RGB_TOG, RGB_MOD,   KC_F1,     KC_F2,     QK_RBT,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, KC_PAUS,  KC_SCRL, KC_PSCR, 
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_INS,   KC_HOME, KC_PGUP, 
        KC_P4,   KC_P5,   KC_P6,            KC_END,   KC_DEL,  KC_PGDN, 
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,           KC_UP,
        KC_P0,            KC_PDOT,          KC_LEFT,  KC_DOWN, KC_RGHT,  KC_HOME,    KC_END,    _______
    ),
    [_FN] = LAYOUT(
        _______,          _______,          _______,  _______, _______,  _______,    _______,   _______,
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______,          _______,  _______, _______, 
        _______, _______, _______, _______,           _______,
        _______,          _______,          _______,  _______, _______,  KC_HOME,    KC_END,    _______
    ),
    [_FN1] = LAYOUT(
        _______,          _______,          _______,  _______, _______,  _______,    _______,   _______,
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______,          _______,  _______, _______, 
        _______, _______, _______, _______,           _______,
        _______,          _______,          _______,  _______, _______,  KC_HOME,    KC_END,    _______
    ),
    [_FN2] = LAYOUT(
        _______,          _______,          _______,  _______, _______,  _______,    _______,   _______,
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______, _______, _______,  _______, _______, 
        _______, _______, _______,          _______,  _______, _______, 
        _______, _______, _______, _______,           _______,
        _______,          _______,          _______,  _______, _______,  KC_HOME,    KC_END,    _______
    ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] = { ENCODER_CCW_CW(KC_LBRC, KC_RBRC), ENCODER_CCW_CW(KC_LBRC, KC_RBRC), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_FN1]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_FN2]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif

/*NOTE FOR PERSON MODIFYING KEYMAP
The large knob press is mapped as KC_B, despite it not having one.
I'm not quite sure why, but the only reason it can't be clicked is because the potentiometer is different.
If you were to replace it with one that can be clicked, it would work. I shorted it and it does work.*/