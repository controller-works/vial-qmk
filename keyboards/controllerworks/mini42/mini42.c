/*
 * Copyright 2022 Kevin Gee <info@controller.works>
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

#include "mini42.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {{// Key Matrix to LED Index
                              {24, 23, 18, 17, 10, 9},
                              {25, 22, 19, 16, 11, 8},
                              {26, 21, 20, 15, 12, 7},
                              {14, 13, 6, NO_LED, NO_LED, NO_LED},
                              {36, 37, 44, 45, 50, 51},
                              {35, 38, 43, 46, 49, 52},
                              {34, 39, 42, 47, 48, 53},
                              {33, 40, 41, NO_LED, NO_LED, NO_LED}},
                             {// LED Index to Physical Position
                              // Left half
                              {75, 4}, {40, 2}, {8, 8}, {8, 43}, {49, 51}, {95, 55},
                              {92, 64}, {82, 39}, {82, 22}, {82, 5}, {65, 2}, {65, 14},
                              {65, 37}, {78, 58}, {58, 55}, {49, 34}, {49, 17}, {49, 0},
                              {33, 2}, {33, 19}, {33, 37}, {16, 41}, {16, 24}, {16, 7},
                              {0, 7}, {0, 24}, {0, 41},
                              // Right half
                              {149, 4}, {184, 2}, {216, 8}, {216, 43}, {175, 51}, {129, 55},
                              {132, 64}, {142, 39}, {142, 22}, {142, 5}, {159, 2}, {159, 19},
                              {159, 37}, {146, 58}, {166, 55}, {175, 34}, {175, 17}, {175, 0},
                              {191, 2}, {191, 19}, {191, 37}, {208, 41}, {208, 24}, {208, 7},
                              {224, 7}, {224, 24}, {224, 41}

                             },
                             {// LED Index to Flag
                              // 0x01 = 1 = modifier key
                              // 0x02 = 2 = underglow
                              // 0x04 = 4 = key backlight
                              // 0x08 = 8 = keyboard state indication
                              // Left half
                              2, 2, 2, 2, 2, 2, 1, 4, 4, 4, 4, 4, 4, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1,
                              // Right half
                              2, 2, 2, 2, 2, 2, 1, 4, 4, 4, 4, 4, 4, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1 }};

#endif // RGB_MATRIX_ENABLE

