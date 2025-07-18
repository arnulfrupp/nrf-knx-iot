/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include <oc_random.h>
//#include <syscalls/rand32.h>
#include <zephyr/random/random.h>

void
oc_random_init(void)
{
    // Intentionally empty
}

unsigned int
oc_random_value(void)
{
    return sys_rand32_get();
}

void
oc_random_destroy(void)
{
    // Intentionally empty
}
