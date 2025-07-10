/***************************************************************************
 *   Copyright (C) 2025 by Niccolò Izzo IU2KIN                             *
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

	.global _start
_start:
	fclr	I
	fclr	U

	ldc	#__stack,sp

	mov.b	#%hi8(__romdatastart),r1h
	mov.w	#%lo16(__romdatastart),a0
	mov.w	#__datastart,a1
	mov.w	#__romdatacopysize,r3
	shl.w	#-1,r3
	smovf.w

	mov.w	#__bssstart,a1
	mov.w	#__bsssize,r3
	shl.w	#-1,r3
	mov.w	#0,r0
	sstr.w

	ldc	#%lo16(__var_vects),intbl
	ldc	#%hi16(__var_vects),intbh

	fset	I

	jmp.w	_main
