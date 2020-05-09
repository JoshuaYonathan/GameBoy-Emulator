/**************************************************************************
*	Copyright 2020 Joshua Yonathan
*
*	Licensed under the Apache License, Version 2.0 (the "License");
*	you may not use this file except in compliance with the License.
*	You may obtain a copy of the License at
*
*	http ://www.apache.org/licenses/LICENSE-2.0
*
*	Unless required by applicable law or agreed to in writing, software
*	distributed under the License is distributed on an "AS IS" BASIS,
*	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*	See the License for the specific language governing permissionsand
*	limitations under the License.
*
*	Common macros, typedef, and helper functions
*
**************************************************************************/

#ifndef COMMON_H
#define COMMON_H

#define SET_BIT(reg, bit)			((reg) |= (1 << (bit)))
#define CLR_BIT(reg, bit)			((reg) &= ~(1 << (bit)))
#define TGL_BIT(reg, bit)			((reg) ^= (1 << (bit)))
#define FORCE_BIT(reg, mask, val)	((reg) = ((reg) & (mask)) | (val)))

#define BIT0_MASK					(1 << 0)
#define BIT1_MASK					(1 << 1)
#define BIT2_MASK					(1 << 2)
#define BIT3_MASK					(1 << 3)
#define BIT4_MASK					(1 << 4)
#define BIT5_MASK					(1 << 5)
#define BIT6_MASK					(1 << 6)
#define BIT7_MASK					(1 << 7)
#define BIT8_MASK					(1 << 8)
#define BIT9_MASK					(1 << 9)
#define BIT10_MASK					(1 << 10)
#define BIT11_MASK					(1 << 11)
#define BIT12_MASK					(1 << 12)
#define BIT13_MASK					(1 << 13)
#define BIT14_MASK					(1 << 14)
#define BIT15_MASK					(1 << 15)

#endif COMMON_H