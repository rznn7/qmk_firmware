/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layer_names { BASE, NAV, MOUSE, MEDIA, NUM, SYM, FUN };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[BASE]  = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_NO, KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(3, KC_ESC), LT(1, KC_SPC), LT(2, KC_TAB), LT(5, KC_ENT), LT(4, KC_BSPC), LT(6, KC_DEL)),
                                                              [NAV]   = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_ENT, KC_BSPC, KC_DEL),
                                                              [MOUSE] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO, KC_NO, KC_NO, KC_TRNS, MS_BTN1, MS_BTN2, MS_BTN3),
                                                              [MEDIA] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, RGB_SPI, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE),
                                                              [NUM]   = LAYOUT_split_3x6_3(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_NO, KC_NO, KC_NO),
                                                              [SYM]   = LAYOUT_split_3x6_3(KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO),
                                                              [FUN]   = LAYOUT_split_3x6_3(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [1] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [2] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [3] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
};
#endif

#ifdef OLED_ENABLE

// static void render_logo(void) {
//     static const char PROGMEM raw_logo[] = {
//         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,196,136, 16, 32, 32, 32,160,144,136,  4,  3,  0,  0,  0,  0,248,255,255,255,255,  1,  0,130,199,255,  7,255,255,255,255,255,255,255,255,255,255,255,  9, 25,120,140,124,252,252,252,248,248,216,240, 48, 33, 65,130,130,250,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127, 79, 67, 33, 32,248,255, 31, 11,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
//         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,193,130,  5, 11, 27, 51, 51,113,113,112,240,248,248,252,254,255,255,255,255,255,255,254,248,241,199,143, 31,255,255,255,255,255,255,255,255,255, 31,255,252,224,  0,  0,  0,  1,  3,  3,  3,  3,  1,  0,  0,  0,  8, 28, 31, 63, 63, 63, 63, 63, 63, 31, 95, 63, 63, 31, 15,  7,115,249,248,252,252,118, 62,  7,  7,140,120, 63,255,255,255,255,255,255,255,255,255,255,127,  3,  1,255, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
//         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  6, 29, 58,116,244,244,252,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,255,255,255,255,255,255,255,255,255,254,112,193,  3,  7, 12, 16, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 96,224,216,252,255,255,255,255,255,255,255,255,255, 31,  7,128, 96, 28,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
//         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,163, 51, 63, 31, 31,159,207,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255, 31, 63, 24,112,193,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64,128,128,  1,  1,  0,  0,  0,  0,  0,  0,  0, 96,192,192,224,240,252,254,255,255,255,255,255,255,255,255, 47,  7, 11,  4,  2,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
//     };
//     oled_write_raw_P(raw_logo, sizeof(raw_logo));
// }

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,112,168,246,249,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,255,255,255,255,127,255,255,255,159,143,207,231,255,255,255,255,255,255,255,127, 63, 15, 39, 35, 16, 16, 16, 17, 31,255,255,255,255,255,255,255,255,255,255,255,255,252,  1, 14,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64, 48,  8,  6,193, 48,204,243,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,240,193,  3,  0,  7, 15, 15, 15, 15,  7,  1,  1,  3,  3,  3,  3,  3,  9,  9,  4,  2,  1,  0,  0,  0, 12, 62,126,127, 59, 31,  3,  3, 23,207,255,255,255, 63,207,227,252,255,255,255,255,244,200,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 96, 24,  6,129, 96, 16,140,195,248,255,255,255,255,255,255,127,  3,255,255,255,255,255,255,255,255,255,255,255,255,255,223, 30, 30, 14,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16, 16,  0,  0,  0,  0,  0,  0,  0,  0, 16,152,252,252,247,243,251,249,252,254,255,255,255, 15, 63,255,255,255,255,255,252,240,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128, 64, 32,156,203,100,  2, 13,  6,192,248,255,255,255,255,255,255,255,127,  7,  0,252,240,199,159,191,255,255,255,255,255,255,255,255,255,255,255,254,124, 56,112,224,192,128,128,  0,  0,  2,  2,  2,  2,  2,128,128,192,192,224,224,240,248,252,254,255,255,255,255,255,255,255,255,255,255,255, 31,128,252,255, 63,127,255,255,255,255,255,255,254,124,248,240,224,192,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


bool oled_task_user() {
render_logo();


    return false;
    // oled_set_cursor(0, 1);

    // switch (get_highest_layer(layer_state)) {
    //     case BASE:
    //         oled_write("Miryoku      ", false);
    //         break;

    //     case NAV:
    //         oled_write("=> navigation", false);
    //         break;

    //     case MOUSE:
    //         oled_write("=> mouse     ", false);
    //         break;

    //     case MEDIA:
    //         oled_write("=> media     ", false);
    //         break;

    //     case NUM:
    //         oled_write("=> numbers   ", false);
    //         break;

    //     case SYM:
    //         oled_write("=> symbols   ", false);
    //         break;

    //     case FUN:
    //         oled_write("=> functions ", false);
    //         break;
    // }

    // return false;
}
#endif
