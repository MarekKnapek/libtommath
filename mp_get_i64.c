#include "tommath_private.h"
#ifdef MP_GET_I64_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis */
/* SPDX-License-Identifier: Unlicense */

#if defined _MSC_VER
#pragma warning(push)
#pragma warning(disable:4146) /* C4146: unary minus operator applied to unsigned type, result still unsigned */
#endif
MP_GET_SIGNED(mp_get_i64, mp_get_mag_u64, int64_t, uint64_t)
#if defined _MSC_VER
#pragma warning(pop)
#endif

#endif
