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
*	Sharp LR35902 microprocessor header
*
**************************************************************************/
#ifndef LR35902_H
#define LR35902_H

#include <windows.h>
#include <stdint.h>
#include <stdbool.h>
#include "common.h"

#define ZERO_FLAG			BIT7_MASK		/* status register bit[7] zero flag */
#define SUB_FLAG			BIT6_MASK		/* status register bit[6] subtract flag */
#define HALF_FLAG			BIT5_MASK		/* status register bit[5] half carry flag */
#define CARRY_FLAG			BIT4_MASK		/* status register bit[4] carry flag */

typedef struct {
	uint8_t a;				/* 8-bit accumulator register */

	union {
		struct {
			uint8_t b;		/* 8-bit general purpose register */
			uint8_t c;		/* 8-bit general purpose register */
		};
		uint16_t bc;		/* 16-bit general purpose register */
	};

	union {
		struct {
			uint8_t d;		/* 8-bit general purpose register */
			uint8_t e;		/* 8-bit general purpose register */
		};
		uint16_t de;		/* 16-bit general purpose register */
	};

	uint8_t f;				/* 8-bit status register */

	union {
		struct {
			uint8_t h;		/* 8-bit general purpose register */
			uint8_t l;		/* 8-bit general purpose register */
		};
		uint16_t hl;		/* 16-bit general purpose register */
	};

	uint16_t sp;			/* 16-bit stack pointer */
	uint16_t pc;			/* 16-bit program counter */
}register_t;



#endif /* LR35902_H */