/*
 * (c) 2023, Micro:bit Educational Foundation and contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include "pxt.h"

#if MICROBIT_CODAL

#endif // MICROBIT_CODAL

namespace cpptest {

#define MACROTOSTR(x) #x
#define MACROTOSTRING(x) MACROTOSTR(x)

#define MACROTOSTR20(x,y) #x
#define MACROTOSTR21(x,y) #y
#define MACROTOSTRING20(x) MACROTOSTR20(x)
#define MACROTOSTRING21(x) MACROTOSTR21(x)

//%
void one() {
    char macro1[] = "DEVICE_BLE                               = " MACROTOSTRING(DEVICE_BLE) "\n";
    char macro2[] = "MICROBIT_BLE_ENABLED                     = " MACROTOSTRING(MICROBIT_BLE_ENABLED) "\n";
    char macro3[] = "MICROBIT_BLE_PAIRING_MODE                = " MACROTOSTRING(MICROBIT_BLE_PAIRING_MODE) "\n";
    char macro4[] = "MICROBIT_BLE_DFU_SERVICE                 = " MACROTOSTRING(MICROBIT_BLE_DFU_SERVICE) "\n";
    char macro5[] = "MICROBIT_BLE_DEVICE_INFORMATION_SERVICE  = " MACROTOSTRING(MICROBIT_BLE_DEVICE_INFORMATION_SERVICE) "\n";
    char macro6[] = "MICROBIT_BLE_EVENT_SERVICE               = " MACROTOSTRING(MICROBIT_BLE_EVENT_SERVICE) "\n";
    char macro7[] = "MICROBIT_BLE_PARTIAL_FLASHING            = " MACROTOSTRING(MICROBIT_BLE_PARTIAL_FLASHING) "\n";
    char macro8[] = "MICROBIT_BLE_SECURITY_LEVEL              = " MACROTOSTRING(MICROBIT_BLE_SECURITY_LEVEL) "\n";
    char macro9[] = "MICROBIT_BLE_SECURITY_MODE               = " MACROTOSTRING(MICROBIT_BLE_SECURITY_MODE) "\n";
    char macroA[] = "MICROBIT_BLE_UTILITY_SERVICE_PAIRING     = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE_PAIRING) "\n";
    char macroB[] = "MICROBIT_BLE_UTILITY_SERVICE             = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE) "\n";
    char macroC[] = "MICROBIT_BLE_MAXIMUM_BONDS               = " MACROTOSTRING(MICROBIT_BLE_MAXIMUM_BONDS) "\n";
    char macroD[] = "CODAL_EXAMPLE                            = " MACROTOSTRING(CODAL_EXAMPLE) "\n";
    char macroE[] = "CODAL_VERSION_MAJOR                      = " MACROTOSTRING(CODAL_VERSION_MAJOR) "\n";
    char macroF[] = "CODAL_VERSION_MINOR                      = " MACROTOSTRING(CODAL_VERSION_MINOR) "\n";
    char macroG[] = "CODAL_VERSION_PATCH                      = " MACROTOSTRING(CODAL_VERSION_PATCH) "\n";
    char macroH[] = "CODAL_VERSION_HASH                       = " MACROTOSTRING(CODAL_VERSION_HASH) "\n";
    char macroI[] = "CODAL_TARGET_NAME                        = " MACROTOSTRING(CODAL_TARGET_NAME) "\n";
    char macroJ[] = "CODAL_VERSION                            = " MACROTOSTRING(CODAL_VERSION) "\n";
    char macroK[] = "CODAL_VERSION_LONG                       = " MACROTOSTRING(CODAL_VERSION_LONG) "\n";
    char macroL[] = "DEVICE_DAL_VERSION                       = " MACROTOSTRING(DEVICE_DAL_VERSION) "\n";
    char macroM[] = "MICROBIT_DAL_VERSION                     = " MACROTOSTRING(MICROBIT_DAL_VERSION) "\n";

    uBit.serial.send( macro1);
    uBit.serial.send( macro2);
    uBit.serial.send( macro3);
    uBit.serial.send( macro4);
    uBit.serial.send( macro5);
    uBit.serial.send( macro6);
    uBit.serial.send( macro7);
    uBit.serial.send( macro8);
    uBit.serial.send( macro9);
    uBit.serial.send( macroA);
    uBit.serial.send( macroB);
    uBit.serial.send( macroC);
    uBit.serial.send( macroD);
    uBit.serial.send( macroE);
    uBit.serial.send( macroF);
    uBit.serial.send( macroG);
    uBit.serial.send( macroH);
    uBit.serial.send( macroI);
    uBit.serial.send( macroJ);
    uBit.serial.send( macroK);
    uBit.serial.send( macroL);
    uBit.serial.send( macroM);
}

//%
void settings() {
    char settingsA[] = "CODAL_EXAMPLE                            = " MACROTOSTRING(CODAL_EXAMPLE) "\n";

    uBit.serial.send( settingsA);
} 

}
