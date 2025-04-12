/************************************************************************************************
Copyright (c) 2024 José Roberto Castro

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef LEDS_H
#define LEDS_H

#include <stdint.h>
#include <stdbool.h>
/** @file leds.h
 ** @brief led control function definitions
 **/

/* === Headers files inclusions ================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public function declarations ============================================================ */

/**
 * @brief Initiates led
 *
 * @param leds Pointer to GPIO port designated to leds.
 */
void LedsInit(uint16_t * leds);

/**
 * @brief funcion para encender un led
 *
 * @param led led elegido para encender
 *
 */
void SingleLedOn(uint8_t led);

/**
 * @brief funcion para apagar un led
 *
 * @param led led elegido para apagar
 */
void SingleLedOff(uint8_t led);

/**
 * @brief funcion para apagar todos los leds
 *
 */
void LedsOffAll();

/**
 * @brief funcion para encender todos los leds
 *
 */
void LedsOnAll();

/**
 * @brief funcion para revisar si encendido o apagado
 *
 * @param led led elegido para revisarlo
 *
 * @return true si esta encendido, false si esta apagado
 */
bool isLedOn(uint8_t led);
/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* LEDS_H */
