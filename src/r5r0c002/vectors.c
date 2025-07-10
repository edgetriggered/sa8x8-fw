/***************************************************************************
 *   Copyright (C) 2024 by Niccolò Izzo IU2KIN                             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, see <http://www.gnu.org/licenses/>   *
 ***************************************************************************/

#include "common.h"
#include "interrupts.h"

#define ID1 0xFF
#define ID2 0xFF
#define ID3 0xFF
#define ID4 0xFF
#define ID5 0xFF
#define ID6 0xFF
#define ID7 0xFF

#define OFS 0xFF

const void *_vects[] __attribute__((section(".vec"))) = {
    (void *)dummy, (void *)(0x0000 | ID1 << 8), // 0x00
    (void *)dummy, (void *)(0x0000 | ID2 << 8), // 0x01
    (void *)dummy, (void *)(0x0000),            // 0x02
    (void *)dummy, (void *)(0x0000 | ID3 << 8), // 0x03
    (void *)dummy, (void *)(0x0000 | ID4 << 8), // 0x04
    (void *)dummy, (void *)(0x0000 | ID5 << 8), // 0x05
    (void *)dummy, (void *)(0x0000 | ID6 << 8), // 0x06
    (void *)dummy, (void *)(0x0000 | ID7 << 8), // 0x07
    (void *)start, (void *)(0x0000 | OFS << 8), // 0x08
};

const void *_var_vects[] __attribute__((section(".var_vects"))) = {
    INT_BRK_I,     (void *)0x0000, // 0x00
    (void *)dummy, (void *)0x0000, // 0x01
    (void *)dummy, (void *)0x0000, // 0x02
    (void *)dummy, (void *)0x0000, // 0x03
    (void *)dummy, (void *)0x0000, // 0x04
    (void *)dummy, (void *)0x0000, // 0x05
    (void *)dummy, (void *)0x0000, // 0x06
    (void *)dummy, (void *)0x0000, // 0x07
    (void *)dummy, (void *)0x0000, // 0x08
    (void *)dummy, (void *)0x0000, // 0x09
    (void *)dummy, (void *)0x0000, // 0x0A
    (void *)dummy, (void *)0x0000, // 0x0B
    (void *)dummy, (void *)0x0000, // 0x0C
    INT_KI,        (void *)0x0000, // 0x0D
    INT_AD,        (void *)0x0000, // 0x0E
    INT_IIC,       (void *)0x0000, // 0x0F
    INT_CMP1,      (void *)0x0000, // 0x10
    INT_ST0,       (void *)0x0000, // 0x11
    INT_SR0,       (void *)0x0000, // 0x12
    INT_ST1,       (void *)0x0000, // 0x13
    INT_SR1,       (void *)0x0000, // 0x14
    (void *)dummy, (void *)0x0000, // 0x15
    INT_TMRX,      (void *)0x0000, // 0x16
    (void *)dummy, (void *)0x0000, // 0x17
    INT_TMRZ,      (void *)0x0000, // 0x18
    INT_INT1,      (void *)0x0000, // 0x19
    INT_INT3,      (void *)0x0000, // 0x1A
    INT_TMRC,      (void *)0x0000, // 0x1B
    INT_CMP0,      (void *)0x0000, // 0x1C
    INT_INT0,      (void *)0x0000, // 0x1D
    (void *)dummy, (void *)0x0000, // 0x1E
    (void *)dummy, (void *)0x0000, // 0x1F
    (void *)dummy, (void *)0x0000, // 0x20
    (void *)dummy, (void *)0x0000, // 0x21
    (void *)dummy, (void *)0x0000, // 0x22
    (void *)dummy, (void *)0x0000, // 0x23
    (void *)dummy, (void *)0x0000, // 0x24
    (void *)dummy, (void *)0x0000, // 0x25
    (void *)dummy, (void *)0x0000, // 0x26
    (void *)dummy, (void *)0x0000, // 0x27
    (void *)dummy, (void *)0x0000, // 0x28
    (void *)dummy, (void *)0x0000, // 0x29
    (void *)dummy, (void *)0x0000, // 0x2A
    (void *)dummy, (void *)0x0000, // 0x2B
    (void *)dummy, (void *)0x0000, // 0x2C
    (void *)dummy, (void *)0x0000, // 0x2D
    (void *)dummy, (void *)0x0000, // 0x2E
    (void *)dummy, (void *)0x0000, // 0x2F
    (void *)dummy, (void *)0x0000, // 0x30
    (void *)dummy, (void *)0x0000, // 0x31
    (void *)dummy, (void *)0x0000, // 0x32
    (void *)dummy, (void *)0x0000, // 0x33
    (void *)dummy, (void *)0x0000, // 0x34
    (void *)dummy, (void *)0x0000, // 0x35
    (void *)dummy, (void *)0x0000, // 0x36
    (void *)dummy, (void *)0x0000, // 0x37
    (void *)dummy, (void *)0x0000, // 0x38
    (void *)dummy, (void *)0x0000, // 0x39
    (void *)dummy, (void *)0x0000, // 0x3A
    (void *)dummy, (void *)0x0000, // 0x3B
    (void *)dummy, (void *)0x0000, // 0x3C
    (void *)dummy, (void *)0x0000, // 0x3D
    (void *)dummy, (void *)0x0000, // 0x3E
    (void *)dummy, (void *)0x0000, // 0x3F
};
