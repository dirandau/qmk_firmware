// Copyright 2024 zvecr <git@zvecr.com>
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/*#define SELECT_SOFT_SERIAL_SPEED 0*/

/*#define WS2812_PWM_DRIVER PWMD3*/
/*#define WS2812_PWM_CHANNEL 1*/
/*#define WS2812_PWM_DMA_STREAM STM32_DMA1_STREAM3*/
/*#define WS2812_PWM_DMA_CHANNEL 3*/

/* RGBLIGHT configuration */
#define WS2812_DI_PIN A9
#define RGBLIGHT_LED_COUNT 2
#define RGBLIGHT_LED_MAP { 1, 0 }
#define RGBLED_SPLIT { 1, 1 }
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 9
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_CHRISTMAS
