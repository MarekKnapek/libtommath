#include "tommath_private.h"
#ifdef MP_SET_I32_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis */
/* SPDX-License-Identifier: Unlicense */

#if defined _MSC_VER
#pragma warning(push)
#pragma warning(disable:4146) /* C4146: unary minus operator applied to unsigned type, result still unsigned */
#endif
MP_SET_SIGNED(mp_set_i32, mp_set_u32, int32_t, uint32_t)
#if defined _MSC_VER
#pragma warning(pop)
#endif

#endif
