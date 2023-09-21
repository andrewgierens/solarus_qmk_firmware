// Copyright 2023 Andrew Gierens (@agierens)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define ENCODERS_PAD_A { GP27, GP21 }
#define ENCODERS_PAD_B { GP26, GP22 }
#define ENCODER_SW F0
#define ENCODER_RESOLUTION 4