/*

	This file is part of libnmath.

	interpolation.h
	Interpolation methods

	Copyright (C) 2008, 2010 - 2013
	Papadopoulos Nikolaos

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 3 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General
	Public License along with this program; if not, write to the
	Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
	Boston, MA 02110-1301 USA

*/

#ifndef NMATH_INTERPOLATION_H_INCLUDED
#define NMATH_INTERPOLATION_H_INCLUDED

#include "defs.h"
#include "types.h"

namespace NMath {
	namespace Interpolation {

#ifdef __cplusplus
extern "C" {
#endif	/* __cplusplus */

/*
	Smoothstep

	Notes:
	The inputs are values edge0, edge1, x with edge0 < x < edge1.
	Unlike the rest interpolation methods, the returned value 
	for smoothstep is in the 0 - 1 range.
*/
static inline scalar_t smoothstep(scalar_t edge0, scalar_t edge1, scalar_t x);
static inline scalar_t smoothstep_perlin(scalar_t edge0, scalar_t edge1, scalar_t x);

/* Simple */
static inline scalar_t step(scalar_t a, scalar_t b, scalar_t t);
static inline scalar_t linear(scalar_t a, scalar_t b, scalar_t t);
static inline scalar_t cosine(scalar_t a, scalar_t b, scalar_t t);
static inline scalar_t acceleration(scalar_t a, scalar_t b, scalar_t t);
static inline scalar_t deceleration(scalar_t a, scalar_t b, scalar_t t);

/*
	Splines

	Notes:
	Interpolation between the 2 middle values.
*/
static inline scalar_t cubic(scalar_t a, scalar_t b, scalar_t c, scalar_t d, scalar_t t);
static inline scalar_t hermite(scalar_t tang1, scalar_t a, scalar_t b, scalar_t tang2, scalar_t t);
static inline scalar_t cardinal(scalar_t a, scalar_t b, scalar_t c, scalar_t d, scalar_t p, scalar_t t);
static inline scalar_t catmullrom(scalar_t a, scalar_t b, scalar_t c, scalar_t d, scalar_t t);

/*
	Bezier

	Notes:
	Interpolation between the first and last values.
*/
static inline scalar_t bezier_quadratic(scalar_t a, scalar_t b, scalar_t c, scalar_t t);
static inline scalar_t bezier_cubic(scalar_t a, scalar_t b, scalar_t c, scalar_t d, scalar_t t);

#ifdef __cplusplus
}   /* extern "C" */
#endif

	} /* namespace Interpolation */
} /* namespace NMath */

#include "interpolation.inl"

#endif /* NMATH_INTERPOLATION_H_INCLUDED */
