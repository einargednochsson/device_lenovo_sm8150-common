/*
 * Copyright (C) 2020-2024 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>
#include <drm/sde_drm.h>
#include <compositionengine/UdfpsExtension.h>

uint32_t getUdfpsDimZOrder(uint32_t z) {
    return z;
}

uint32_t getUdfpsZOrder(uint32_t z, bool touched) {
    if (touched) {
        z |= FOD_PRESSED_LAYER_ZORDER;
    }

    return z;
}

uint64_t getUdfpsUsageBits(uint64_t usageBits, bool) {
    return usageBits;
}
