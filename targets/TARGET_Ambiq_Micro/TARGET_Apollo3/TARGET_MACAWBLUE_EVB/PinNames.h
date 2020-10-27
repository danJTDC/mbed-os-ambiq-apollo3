/* 
 * Copyright (c) 2019-2020 SparkFun Electronics
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "am_bsp.h"
#include "objects_gpio.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define NC_VAL (int)0xFFFFFFFF

typedef enum
{
    // Digital naming
    D0 = 0,
    D1 = 1,
    D2 = 2,
    D3 = 3,
    D4 = 4,
    D5 = 5,
    D6 = 6,
    D7 = 7,
    D8 = 8,
    D9 = 9,
    D10 = 10,
    D11 = 11,
    D12 = 12,
    D13 = 13,
    D14 = 14,
    D15 = 15,
    D16 = 16,
    D17 = 17,
    D18 = 18,
    D19 = 19,
    D20 = 20, //SWDCK
    D21 = 21, //SWDIO
	D22 = 22,
	D23 = 23,
	D24 = 24,
	D25 = 25,
	D26 = 26,
	D27 = 27,
	D28 = 28,
	D29 = 29,
	D30 = 30,
	D31 = 31,
	D32 = 32,
	D33 = 33,
	D34 = 34,
	D35 = 35,
	D36 = 36, //RADIO NSS
	D37 = 37, 
	D38 = 38, //RADIO_MOSI
	D39 = 39, //RADIO_BUSY
	D40 = 40, //RADIO_DIO1
	D41 = 41,
	D42 = 42, //RADIO_CLK
	D43 = 43, //RADIO_MISO
	D44 = 44, //RADIO_nRESET
	D45 = 45,
	D46 = 46,
	D47 = 47, //RADIO_DIO3
	D48 = 48,
	D49 = 49,

    // Analog naming
    A0 = D33,
    A1 = D13,
    A2 = D11,
    A3 = D29,
    A4 = D12,
    A5 = D31,
    A6 = D35,

    //BUTTONs
    SW0 = AM_BSP_GPIO_BUTTON0,
    SW1 = AM_BSP_GPIO_BUTTON1,
    SW2 = AM_BSP_GPIO_BUTTON2,
    
    // LEDs
    //LED_BLUE = AM_BSP_GPIO_LED0,

    // mbed original LED naming
    LED0 = AM_BSP_GPIO_LED0,
    LED1 = AM_BSP_GPIO_LED1,
    LED2 = AM_BSP_GPIO_LED2,
    LED3 = AM_BSP_GPIO_LED3,
    LED4 = AM_BSP_GPIO_LED4,

    // I2C
    I2C_SCL = AM_BSP_QWIIC_I2C_SCL_PIN,
    I2C_SDA = AM_BSP_QWIIC_I2C_SDA_PIN,

    // Qwiic
    QWIIC_SCL = I2C_SCL,
    QWIIC_SDA = I2C_SDA,

    // SPI
    SPI_CLK = AM_BSP_PRIM_SPI_CLK_PIN,
    SPI_SDO = AM_BSP_PRIM_SPI_SDO_PIN,
    SPI_SDI = AM_BSP_PRIM_SPI_SDI_PIN,

    // UART
    SERIAL_TX = AM_BSP_PRIM_UART_TX_PIN,
    SERIAL_RX = AM_BSP_PRIM_UART_RX_PIN,
    USBTX = SERIAL_TX,
    USBRX = SERIAL_RX,

    SERIAL1_TX = D24,
    SERIAL1_RX = D25,

    // Not connected
    NC = NC_VAL
} PinName;

#define STDIO_UART_TX USBTX
#define STDIO_UART_RX USBRX

#ifdef __cplusplus
}
#endif

#endif
