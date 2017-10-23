/* Copyright (c) 2013, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

/**
 * @file
 *
 * Standard C language types and definitions for ODP.
 */

#ifndef ODP_ABI_STD_TYPES_H_
#define ODP_ABI_STD_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/* uint64_t, uint32_t, etc */
#include <stdint.h>

/* size_t */
#include <stddef.h>

/* true and false for odp_bool_t */
#include <stdbool.h>

/** @addtogroup odp_system ODP SYSTEM
 *  @{
 */

typedef int odp_bool_t;

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif