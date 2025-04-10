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

static void render_logo_left(void) {
    static const char PROGMEM raw_logo[] = {
        0,   85, 0,   17, 0,  85, 0,  17,  0,  85,  0,  17,  0,  85, 0,  17, 0,   85,  0,   17,  0,   85, 0,   17, 0,   85,  0,   17,  0,  85,  32,  81,  0,   85,  0,  21,  8,   85,  0,   21,  8,   85,  0,   21,  8,   85,  0,   17, 0,   85,  0,  17, 0,  85, 0,  81, 224, 213, 248, 117, 252, 125, 190, 85, 191, 85, 34, 85, 0,  85, 0,  17, 0,  85, 0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  160, 85,  248, 93,  191, 87,  159, 95,  191, 87,  227, 213, 243, 87,  227, 213, 243, 87,  227, 213, 226, 81,  128, 85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,  85,  176, 113, 224, 213, 128, 81,  0,   85,  254, 85,  136, 85,  0,   17,  0,   85,  0,
        17,  0,  85,  10, 21, 8,  85, 128, 81, 128, 85, 130, 85, 3,  85, 35, 85,  11,  85,  2,   21,  0,  85,  0,  81,  128, 85,  128, 81, 224, 213, 240, 113, 104, 85, 160, 81,  224, 245, 250, 117, 254, 253, 255, 119, 255, 127, 63, 119, 127, 95, 63, 87, 15, 87, 31, 23,  15,  87,  31,  23,  15,  87,  15, 21,  0,  85, 32, 81, 0,  85, 0,  17, 0,  85,  0,   17,  0,   85,  0,   17,  0,   85,  160, 113, 0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  0,   17,  0,   85,  59,  87,  255, 95,  255, 117, 254, 253, 255, 117, 248, 213, 240, 81,  224, 213, 160, 81,  224, 213, 160, 81,  232, 245, 251, 119, 255, 255, 255, 119, 254, 253, 254, 117, 254, 253, 254, 117, 254, 253, 254, 87, 239, 215, 175, 87,  239, 213, 251, 117, 254, 253, 255, 119, 255, 255, 255, 119, 255, 255,
        255, 85, 227, 85, 0,  17, 0,  85,  0,  17,  0,  85,  14, 21, 0,  85, 186, 117, 254, 253, 250, 85, 184, 85, 160, 85,  128, 85,  0,  17,  0,   85,  0,   17,  0,  85,  160, 85,  254, 93,  187, 85,  0,   85,  0,   17,  0,   85, 0,   17,  0,  85, 0,  17, 0,  85, 0,   17,  0,   85,  0,   17,  0,   85, 0,   17, 0,  85, 0,  17, 2,  85, 47, 87, 255, 127, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 255, 255, 119, 255, 253, 250, 117, 232, 213, 224, 81,  224, 213, 248, 117, 254, 253, 255, 119, 255, 255, 255, 119, 254, 87,  47, 21,  0,   85,  0,   17,  0,   85,  160, 85,  248, 85,  35,  21,  3,   85,  0,   17,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

static void render_logo_right(void) {
    static const char PROGMEM raw_logo[] = {
        0,   68,  0,   85,  0,   68, 0,  85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  32,  85,  0,   84,  32,  85,  0,   68,  0,   85,  0,   68,  0,   85,  0,  85,  11,  87,  14,  71, 15, 87,  14,  69,  14,  87,  14,  71, 15, 95, 14, 95,  62,  125, 40,  124, 248, 245, 224, 244, 160, 213, 128, 84, 0,  85, 0,  68, 0,  85, 0,  68, 0,  85,  0,  68, 0,  85, 0,  68, 0,  85, 0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  32,  85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  168, 95,  10,  85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  168, 245, 128, 85,  0,   85,  42,  93,  168, 253, 160, 85,  0,   68,  0,   85,  0,   69,  34,  117, 236, 244, 162,
        223, 174, 252, 170, 213, 0,  68, 0,   85,  0,   71,  130, 213, 232, 253, 250, 247, 170, 223, 187, 247, 232, 244, 224, 245, 224, 244, 160, 213, 128, 196, 128, 213, 128, 196, 128, 85, 128, 212, 160, 117, 32, 84, 128, 213, 160, 244, 224, 117, 32, 85, 10, 85, 128, 212, 168, 245, 234, 255, 58,  85,  0,   68,  0,   85,  0,  68, 0,  85, 0,  68, 0,  85, 0,  68, 0,   85, 0,  68, 0,  85, 0,  68, 0,  85,  10,  84,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  2,   87,  43,  127, 40,  244, 224, 245, 234, 255, 255, 247, 128, 68,  0,   85,  0,   69,  0,   85,  238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 254, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 63,  95,  14,  71,
        10,  87,  2,   71,  35,  87, 2,  215, 226, 247, 130, 199, 131, 87,  2,   69,  2,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,  85,  0,   68,  0,   85, 0,  68,  0,   85,  0,   68,  0,   85, 0,  68, 0,  85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85, 0,  69, 3,  87, 14, 95, 63, 95, 46, 125, 32, 85, 0,  68, 0,  85, 2,  95, 191, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 255, 255, 255, 238, 127, 63,  127, 174, 223, 255, 255, 238, 255, 255, 255, 238, 255, 250, 253, 232, 244, 224, 245, 224, 212, 248, 245, 238, 255, 255, 255, 234, 117, 34,  85,  0,   69,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,  0,   68,  0,   85,
    };

    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user() {
    if (is_keyboard_left()) {
        render_logo_left();
    } else {
        render_logo_right();
    }

    return false;
}
#endif
