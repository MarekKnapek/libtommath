#include "tommath_private.h"
#ifdef MP_GET_L_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis */
/* SPDX-License-Identifier: Unlicense */

#if defined _MSC_VER
#pragma warning(push)
#pragma warning(disable:4146) /* C4146: unary minus operator applied to unsigned type, result still unsigned */
#endif
MP_GET_SIGNED(mp_get_l, mp_get_mag_ul, long, unsigned long)
#if defined _MSC_VER
#pragma warning(pop)
#endif

#endif
