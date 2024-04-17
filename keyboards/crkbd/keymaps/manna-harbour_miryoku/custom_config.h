// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once
#define  MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,              \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),  LT(U_MOUSE,KC_ENT),LT(U_NUM,KC_TAB),  LT(U_SYM,KC_SPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
KC_ASTR,           KC_LBRC,           KC_RBRC,           KC_PLUS,           KC_AMPR,           U_NA,              U_NA,   U_NA,  U_NA,   U_NA,     \
KC_SCLN,           KC_LCBR,           KC_RCBR,           KC_EQL,            KC_EXLM,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_HASH,           KC_CIRC,           KC_BSLS,           KC_MINUS,          KC_PIPE,           U_NA,              U_NA,   U_NA,  U_NA,   U_NA,              \
U_NP,              U_NP,              KC_UNDS,           KC_LPRN,           KC_RPRN,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// flippet sym
/* #define  MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,              \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),  LT(U_SYM,KC_ENT),LT(U_NUM,KC_TAB),  LT(U_MOUSE,KC_SPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_AMPR,           KC_PLUS,           KC_LBRC,           KC_RBRC,           KC_ASTR,     \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_EXLM,           KC_EQL,            KC_LCBR,           KC_RCBR,           KC_SCLN,     \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_PIPE,           KC_MINUS,          KC_BSLS,           KC_CIRC,           KC_HASH,     \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_UNDS,           KC_LPRN,           KC_RPRN,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_NA,   U_NA,     KC_MS_U,  U_NA,       U_NA,       U_NA, U_NA, U_NA, U_NA, U_NA, \
U_NA,   KC_MS_L,  KC_MS_D,  KC_MS_R,    U_NA,       U_NA, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, \
U_NA,   U_NA,     U_NA,     U_NA,       U_NA,       U_NA, U_NA, U_NA, U_NA, U_NA, \
U_NP,   U_NP,     KC_BTN3,  KC_BTN1,    KC_BTN2,    U_NA, U_NA, U_NA, U_NP, U_NP
 */