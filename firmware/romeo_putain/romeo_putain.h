/* Copyright 2019 coseyfannitutti
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
#pragma once

#include "quantum.h"

#define _x_ KC_NO

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/* Standard arrangement (split backspace, split spacebar) / LAYOUT_all
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b |3b |
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │10  │11 |12 │13 │14 │15 │16 │17 │18 │19 │1a │1b    │
 * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b  │
 * ├─────┬┴──┬┴───┴┬──┴───┴─┬─┴───┴───┴┬──┴─┬─┴─┬─┴────┤
 * │30   │31 │32   |34      |36        |38  |39 |3a    |
 * └─────┴───┴─────┴────────┴──────────┴────┴───┴──────┘
*/
#define LAYOUT_all( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K3B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31, K32,      K34,      K36,      K38, K39, K3A      \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, }, \
{ K30, K31, K32, _x_, K34, _x_, K36, _x_, K38, K39, K3A, K3B, }  \
}

/* Split backspace, full spacebar / LAYOUT_split_back_full_space
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b |3b |
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │10  │11 |12 │13 │14 │15 │16 │17 │18 │19 │1a │1b    │
 * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b  │
 * ├────┬─┴─┬─┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴────┤
 * │30  │31 │32 |36                      |38 |39 |3a   |
 * └────┴───┴───┴────────────────────────┴───┴───┴─────┘
*/
#define LAYOUT_split_back_full_space( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K3B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31, K32,                K36,      K38, K39, K3A  \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, }, \
{ K30, K31, K32, _x_, _x_, _x_, K36, _x_, K38, K39, K3A, K3B, }  \
}

/* Full backspace, split spacebar / LAYOUT_full_back_split_space
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b     |
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤
 * │10  │11 |12 │13 │14 │15 │16 │17 │18 │19 │1a │1b    │
 * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b  │
 * ├─────┬┴──┬┴───┴┬──┴───┴─┬─┴───┴───┴┬──┴─┬─┴─┬─┴────┤
 * │30   │31 │32   |34      |36        |38  |39 |3a    |
 * └─────┴───┴─────┴────────┴──────────┴────┴───┴──────┘
*/
#define LAYOUT_full_back_split_space( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31, K32,      K34,      K36,      K38, K39, K3A       \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, }, \
{ K30, K31, K32, _x_, K34, _x_, K36, _x_, K38, K39, K3A, _x_, }  \
}

/* Full backspace, full spacebar / LAYOUT_full_back_full_space
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b     |
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤
 * │10  │11 |12 │13 │14 │15 │16 │17 │18 │19 │1a │1b    │
 * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b  │
 * ├────┬─┴─┬─┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴────┤
 * │30  │31 │32 |34                      |38 |39 |3a   |
 * └────┴───┴───┴────────────────────────┴───┴───┴─────┘
*/
#define LAYOUT_full_back_full_space( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31, K32,                K36,      K38, K39, K3A       \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, }, \
{ K30, K31, K32, _x_, _x_, _x_, K36, _x_, K38, K39, K3A, _x_, }  \
}
