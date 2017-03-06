/*
 * Created 02/11/2016 - Fading.H
 * 
 * Vapoduino - Arduino based controller for a Vaporizer.
 * 
 * Copyright (C) 2014 Benedikt Schlagberger
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef Fading_h
#define Fading_h

/*
 * Table for smoothly fading leds via PWM.
 */
const unsigned char fading_curve[256] = {
        0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 
        1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 
        2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 
        3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 
        5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 
        7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 
        10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 
        13, 14, 14, 15, 15, 15, 16, 16, 17, 17, 
        17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 
        22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 
        28, 28, 29, 29, 30, 31, 31, 32, 32, 33, 
        34, 34, 35, 36, 37, 37, 38, 39, 39, 40, 
        41, 42, 43, 43, 44, 45, 46, 47, 47, 48, 
        49, 50, 51, 52, 53, 54, 54, 55, 56, 57, 
        58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 
        68, 70, 71, 72, 73, 74, 75, 76, 77, 79, 
        80, 81, 82, 83, 85, 86, 87, 88, 90, 91, 
        92, 94, 95, 96, 98, 99, 100, 102, 103, 105, 
        106, 108, 109, 110, 112, 113, 115, 116, 118, 120, 
        121, 123, 124, 126, 128, 129, 131, 132, 134, 136, 
        138, 139, 141, 143, 145, 146, 148, 150, 152, 154, 
        155, 157, 159, 161, 163, 165, 167, 169, 171, 173, 
        175, 177, 179, 181, 183, 185, 187, 189, 191, 193, 
        196, 198, 200, 202, 204, 207, 209, 211, 214, 216, 
        218, 220, 223, 225, 228, 230, 232, 235, 237, 240, 
        242, 245, 247, 250, 252, 255
};

#endif
