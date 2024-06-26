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

enum layers {
    _BASE,
    _SYM,
    _NAV,
    _NUM,
    _FN,
    _MS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //.--------------------------------------------------------------------------------.                    .------------------------------------------------------------------------------------------------.
      XXXXXXX,      KC_Q,         KC_W,           KC_F,           KC_P,           KC_B,                       KC_J,           KC_L,           KC_U,               KC_Y,           KC_SCLN,            XXXXXXX,
  //|--------------------------------------------------------------------------------|                    |------------------------------------------------------------------------------------------------|
      XXXXXXX,      LGUI_T(KC_A), LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),   KC_G,                       LT(_MS, KC_M),  LSFT_T(KC_N),   LCTL_T(KC_E),       LALT_T(KC_I),   LGUI_T(KC_O),       XXXXXXX,
  //|--------------------------------------------------------------------------------|                    |------------------------------------------------------------------------------------------------|
      XXXXXXX,      KC_Z,         KC_X,           KC_C,           KC_D,           KC_V,                       KC_K,           KC_H,           KC_COMM,            KC_DOT,         KC_SLSH,            XXXXXXX,
  //|--------------------------------------------------------------------------------|                    |------------------------------------------------------------------------------------------------|
                                                  XXXXXXX,     LT(_NAV, KC_BSPC), LT(_FN, KC_ENT),           LT(_NUM, KC_TAB),LT(_SYM, KC_SPC),  XXXXXXX
  ),

    [_SYM] = LAYOUT_split_3x6_3(
  //.--------------------------------------------------------------------.              .-------------------------------------------------------------------.
      XXXXXXX,      KC_NO,      KC_LPRN,    KC_RPRN,    KC_QUOT,    KC_NO,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      XXXXXXX,
  //.---------------------------   (   -----    )  -----    "   ---------|              |-------------------------------------------------------------------|
      XXXXXXX,      KC_BSLS,    KC_LBRC,    KC_RBRC,    KC_EQL,     KC_GRV,             KC_NO,      KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    XXXXXXX,
  //.---------------  \|   -----   [{  -----   ]}  -----  =+   -----  `~ |              |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_MINS,    KC_NO,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      XXXXXXX,
  //.---------------------------------------------------   -_  ----------|              |-------------------------------------------------------------------|
                                            XXXXXXX,    KC_ESC,     KC_BSPC,            _______,    _______,    XXXXXXX
  ),
    [_NAV] = LAYOUT_split_3x6_3(
  //.-------------------------------------------------------------------.               .-------------------------------------------------------------------.
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_BRIU,    XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,              KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_MUTE,    XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_MPRV,    KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_BRID,    XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
                                            XXXXXXX,    _______,    _______,            KC_MPLY,    KC_DEL,     XXXXXXX
  ),

    [_NUM] = LAYOUT_split_3x6_3(
  //.-------------------------------------------------------------------.               .-------------------------------------------------------------------.
      XXXXXXX,      KC_NO,      KC_7,       KC_8,       KC_9,       KC_NO,              KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_4,       KC_5,       KC_6,       KC_NO,              KC_NO,       KC_LSFT,     KC_LCTL,     KC_LALT,     KC_LGUI,    XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_1,       KC_2,       KC_3,       KC_NO,              KC_NO,       KC_NO,       KC_COMM,     KC_DOT,      KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
                                            XXXXXXX,    KC_0,       KC_ENT,             _______,     _______,     XXXXXXX
  ),

    [_FN] = LAYOUT_split_3x6_3(
  //.-------------------------------------------------------------------.               .-------------------------------------------------------------------.
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_F7,       KC_F8,       KC_F9,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,              KC_NO,      KC_F4,       KC_F5,       KC_F6,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_F1,       KC_F2,       KC_F3,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
                                            XXXXXXX,    _______,    _______,            KC_TAB,     KC_NO,       XXXXXXX
  ),
    [_MS] = LAYOUT_split_3x6_3(
  //.-------------------------------------------------------------------.               .-------------------------------------------------------------------.
      XXXXXXX,      KC_NO,      KC_NO,      KC_MS_U,    KC_NO,      KC_NO,              KC_NO,      KC_NO,       KC_NO,       KC_NO,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_NO,              KC_NO,      KC_NO,       KC_NO,       KC_NO,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
      XXXXXXX,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_NO,       KC_NO,       KC_NO,       KC_NO,      XXXXXXX,
  //|-------------------------------------------------------------------|               |-------------------------------------------------------------------|
                                            XXXXXXX,    _______,    _______,            KC_BTN1,    KC_BTN2,       XXXXXXX
  )
};
