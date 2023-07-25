/**
 * (c) 2023, Micro:bit Educational Foundation and contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include "pxt.h"

#if MICROBIT_CODAL

#endif // MICROBIT_CODAL


//% block="cpptest"
//% icon="\uf012"
//% color=#AA278D
namespace cpptest {

#define MACROTOSTR(x) #x
#define MACROTOSTRING(x) MACROTOSTR(x)

#define MACROTOSTR20(x,y) #x
#define MACROTOSTR21(x,y) #y
#define MACROTOSTRING20(x) MACROTOSTR20(x)
#define MACROTOSTRING21(x) MACROTOSTR21(x)

/**
  * one
  */
//% help=cpptest/one
//% block="one"
//%
void one() {
#if MICROBIT_CODAL
    char macro1[] = "MICROBIT_BLE_UTILITY_SERVICE_PAIRING = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE_PAIRING) "\n";
    char macro2[] = "MICROBIT_BLE_UTILITY_SERVICE         = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE) "\n";

    uBit.serial.send( macro1);
    uBit.serial.send( macro2);
#endif // MICROBIT_CODAL
} 

}
