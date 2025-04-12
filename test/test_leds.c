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

/** @file test_leds.c
 ** @brief unit tests for led control
 **/

/* === Headers files inclusions =============================================================== */
#include "unity.h"
#include "leds.h"

/* === Private data type declarations ========================================================== */
static uint16_t vleds = 0xFFFF;

/* === Private function declarations =========================================================== */

void setUp(void) {

    LEDS_Init(&vleds);
}

/** @test un solo led encendido */
void test_OnSingleLed(void) {

    SingleLedOn(4);
    TEST_ASSERT_EQUAL_HEX16(0x0008, vleds);
}

/** @test todos los leds encendidos */
void test_OnAllLeds(void) {

    LedsOnAll();
    TEST_ASSERT_EQUAL_HEX16(0xFFFF, vleds);
}

/** @test enciende y apaga les designados */
void test_OnOffMultipleLeds(void) {

    SingleLedOn(2);
    SingleLedOn(6);

    SingleLedOff(2);
    SingleLedOff(8);

    TEST_ASSERT_EQUAL_HEX16(0x0020, vleds);
}

/** @test todos los leds apagados */
void test_OffAllLeds(void) {

    uint16_t vleds = 0xFFFF;

    LEDS_Init(&vleds);
    TEST_ASSERT_EQUAL_HEX16(0x0000, vleds);
}

/** @test apaga un unico led */
void test_OffSingleLed(void) {

    SingleLedOn(6);
    SingleLedOff(6);
    TEST_ASSERT_EQUAL_HEX16(0x0000, vleds);
}

/** @test estado de encendidos */
void test_GetOnStatus(void) {

    SingleLedOn(6);
    TEST_ASSERT_TRUE(isLedOn(6));
}

/** @test estado de apagados */
void test_GetOnOffStatus(void) {

    SingleLedOn(6);
    SingleLedOff(6);
    TEST_ASSERT_FALSE(isLedOn(6));
}

/* === End of documentation ==================================================================== */
