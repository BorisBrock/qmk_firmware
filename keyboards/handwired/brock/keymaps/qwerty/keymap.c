 /* Copyright 2020 Imam Rafii
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

#include <keymap_german.h>


enum layers {
    _BASE,
    _RAISE
};


// Custom key codes
#define KC_COPY  LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)
#define KC_CUT   LCTL(KC_X)
#define KC_UNDO  LCTL(KC_Z)
#define KC_REDO  LCTL(KC_Y)
#define KC_FMT   LCTL(LSFT(KC_I)) // VSCode Linux only?
#define KC_SAVE  LCTL(KC_S)

#define KC_LBR  LSFT(KC_9)    // Opening (left) round bracket
#define KC_RBR  LSFT(KC_0)    // Closing (right) round bracket
#define KC_LBS  KC_LBRC       // Opening (left) square bracket
#define KC_RBS  KC_RBRC       // Closing (right) square bracket
#define KC_LBC  LSFT(KC_LBRC) // Opening (left) curly bracket
#define KC_RBC  LSFT(KC_RBRC) // Closing (right) curly bracket
#define KC_LBP  KC_LT         // Opening (left) pointy bracket
#define KC_RBP  KC_GT         // Closing (right) pointy bracket

#define KC_AE RALT(KC_Q) // ä,Ä
#define KC_OE RALT(KC_P) // ö,Ö
#define KC_UE RALT(KC_Y) // ü,Ü
#define KC_SS RALT(KC_S) // ß
#define KC_EURO LCTL(LALT(KC_E)) // €



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer "Base"
 *
 *    0      1      2      3      4      5      6      7      8      9      10     11     12     13     14     15     16     17
 * ,------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------.
 * | ESC  | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F10  | F11  | F12  |      | DEL  | M1   | M2   | M3   |  0
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | CPY  | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 0    | (    | )    |      | BSP  | PRNT | FN   | PGUP |  1
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | PST  | Q    | W    | E    | R    | T    | Y    | U    | I    | O    | P    | {    | }    | UNDO | REDO | HOME | END  | PGDN |  2
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  | A    | S    | D    | F    | G    | H    | J    | K    | L    | /    | ;    | #    |      | RET  |      |      |      |  3
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | SHFT | Z    | X    | C    | V    | B    | N    | M    | ,    | .    | +    | -    | =    | FMT  | SAVE |      | UP   |      |  4
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | CTRL | WIN  | ALT  |      | SPC1 |      |      | SPC2 |      | Ö    | Ä    | Ü    | ß    |      | €    | LEFT | DOWN | RGHT |  5
 * `-----------------------------------------------------------------------------------------------------------------------------'
 */
[_BASE] = LAYOUT(
/*  0         1        2        3      4       5      6      7       8        9       10       11        12        13       14          15       16       17 */
    KC_ESC,   KC_F1,   KC_F2,   KC_F3, KC_F4,  KC_F5, KC_F6, KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_F11,   KC_F12,   KC_NO,   KC_DEL,     KC_A,    KC_A,    KC_A,
    KC_COPY,  KC_1,    KC_2,    KC_3,  KC_4,   KC_5,  KC_6,  KC_7,   KC_8,    KC_9,   KC_0,    KC_LBR,   KC_RBR,   KC_NO,   KC_BSPC,    KC_PSCR, KC_A,    KC_PGUP,
    KC_PASTE, KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,  KC_Y,  KC_U,   KC_I,    KC_O,   KC_P,    KC_LBC,   KC_RBC,   KC_UNDO, KC_REDO,    KC_HOME, KC_END,  KC_PGDN,
    KC_TAB,   KC_A,    KC_S,    KC_D,  KC_F,   KC_G,  KC_H,  KC_J,   KC_K,    KC_L,   KC_SLSH, KC_SCLN,  KC_HASH,  KC_NO,   KC_ENT,     KC_NO,   KC_NO,   KC_NO,
    KC_LSFT,  KC_Z,    KC_X,    KC_C,  KC_V,   KC_B,  KC_N,  KC_M,   KC_COMM, KC_DOT, KC_PLUS, KC_MINUS, KC_EQUAL, KC_FMT,  KC_SAVE,    KC_NO,   KC_UP,   KC_NO,
    KC_LCTL,  KC_LWIN, KC_LALT, KC_NO, KC_SPC, KC_NO, KC_NO, KC_SPC, KC_NO,   KC_OE,  KC_AE,   KC_UE,    KC_SS,    KC_NO,   KC_EURO,    KC_LEFT, KC_DOWN, KC_RGHT,
),


/* Layer "Raise"
 *
 *    0      1      2      3      4      5      6      7      8      9      10     11     12     13     14     15     16     17
 * ,------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |  0
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | CUT  | !    | @    | °    | $    | %    | ^    | &    | `    | ´    | ~    | <    | >    |      |      |      |      |      |  1
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | [    | ]    |      |      |      |      |      |  2
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      | \    | :    | |    |      |      |      |      |      |  3
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | "    | '    | *    | _    | ?    |      |      |      |      |      |  4
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |  5
 * `-----------------------------------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT(
/*  0        1        2         3        4        5        6        7        8        9        10       11       12       13       14         15       16       17 */
    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
    KC_CUT,  KC_EXLM, KC_AT,    KC_NO,   KC_DLR,  KC_PERC, KC_CIRC, KC_AMP,  KC_GRV,  KC_NO,   KC_NO,   KC_LT,   KC_GT,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
    KC_NO,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_LBS,  KC_RBS,  KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
    KC_NO,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, KC_BSLS, KC_COLN, KC_PIPE, KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
    KC_NO,   _______, _______,  _______, _______, _______, _______, _______, KC_QUOT, KC_QUOT, KC_ASTR, KC_UNDS, KC_QUES, KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,
),


};
