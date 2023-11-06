/*
Copyright 2023 Attila Deák

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

#pragma once

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #undef RGBLED_NUM
// #define RGBLED_NUM 14
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #define RGBLIGHT_SLEEP

/* Set Unicode mode by default */
#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS, UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE

/* Change the default tapping toggle value (normally 5) */
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 250

// #define RETRO_TAPPING
// #define IGNORE_MOD_TAP_INTERRUPT
