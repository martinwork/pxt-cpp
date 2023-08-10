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
  * config
  */
//% help=cpptest/config
//% block="config"
//%
void config() {
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

    uBit.serial.printf( "\n\nconfig\n");

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
}

/**
  * map
  */
//% help=cpptest/map
//% block="map"
//%
void map() {
#if MICROBIT_CODAL
    uBit.serial.printf( "\n\nmap\n");

    uBit.serial.printf( "MICROBIT_CODEPAGESIZE          0x%x\n", (unsigned int) MICROBIT_CODEPAGESIZE);
    uBit.serial.printf( "MICROBIT_CODESIZE              0x%x\n", (unsigned int) MICROBIT_CODESIZE);

    uBit.serial.printf( "\nMICROBIT_SOFTDEVICE_EXISTS     0x%x\n", (unsigned int) MICROBIT_SOFTDEVICE_EXISTS);
    uBit.serial.printf( "MICROBIT_APP_REGION_START      0x%x\n", (unsigned int) MICROBIT_APP_REGION_START);
    uBit.serial.printf( "MICROBIT_APP_REGION_END        0x%x\n", (unsigned int) MICROBIT_APP_REGION_END);

    uBit.serial.printf( "MICROBIT_BOOTLOADER_SETTINGS   0x%x\n", (unsigned int) MICROBIT_BOOTLOADER_SETTINGS);
    uBit.serial.printf( "MICROBIT_MBR_PARAMS            0x%x\n", (unsigned int) MICROBIT_MBR_PARAMS);
    uBit.serial.printf( "MICROBIT_BOOTLOADER_SIZE       0x%x\n", (unsigned int) MICROBIT_BOOTLOADER_SIZE);
    uBit.serial.printf( "MICROBIT_BOOTLOADER_ADDRESS    0x%x\n", (unsigned int) MICROBIT_BOOTLOADER_ADDRESS);
    uBit.serial.printf( "MICROBIT_FDS_PAGE              0x%x\n", (unsigned int) MICROBIT_FDS_PAGE);
    uBit.serial.printf( "MICROBIT_STORAGE_PAGE          0x%x\n", (unsigned int) MICROBIT_STORAGE_PAGE);
    uBit.serial.printf( "MICROBIT_DEFAULT_SCRATCH_PAGE  0x%x\n", (unsigned int) MICROBIT_DEFAULT_SCRATCH_PAGE);
    uBit.serial.printf( "MICROBIT_STORAGE_SCRATCH_PAGE  0x%x\n", (unsigned int) MICROBIT_STORAGE_SCRATCH_PAGE);

    uBit.serial.printf( "\n\naliases\n");

    uBit.serial.printf( "PAGE_SIZE                      0x%x\n", (unsigned int) PAGE_SIZE);
    uBit.serial.printf( "KEY_VALUE_STORE_PAGE           0x%x\n", (unsigned int) KEY_VALUE_STORE_PAGE);
    uBit.serial.printf( "BLE_BOND_DATA_PAGE             0x%x\n", (unsigned int) BLE_BOND_DATA_PAGE);
    uBit.serial.printf( "DEFAULT_SCRATCH_PAGE           0x%x\n", (unsigned int) DEFAULT_SCRATCH_PAGE);
#endif // MICROBIT_CODAL
}

/**
  * fdsStat
  */
//% help=cpptest/fdsStat
//% block="fdsStat"
//%
void fdsStat() {
#if MICROBIT_CODAL
    fds_stat_t stat;

    fds_stat( &stat);

    uBit.serial.printf( "\n\nfds_stat\n");

    uBit.serial.printf( "pages_available  %d\n", (int) stat.pages_available);   //!< The number of pages available.
    uBit.serial.printf( "open_records     %d\n", (int) stat.open_records);      //!< The number of open records.
    uBit.serial.printf( "valid_records    %d\n", (int) stat.valid_records);     //!< The number of valid records.
    uBit.serial.printf( "dirty_records    %d\n", (int) stat.dirty_records);     //!< The number of deleted ("dirty") records.
    uBit.serial.printf( "words_reserved   %d\n", (int) stat.words_reserved);    //!< The number of words reserved by @ref fds_reserve().

    /**@brief The number of words written to flash, including those reserved for future writes. */
    uBit.serial.printf( "words_used       %d\n", (int) stat.words_used);

    /**@brief The largest number of free contiguous words in the file system.
     *
     * This number indicates the largest record that can be stored by FDS.
     * It takes into account all reservations for future writes.
     */
    uBit.serial.printf( "largest_contig   %d\n", (int) stat.largest_contig);

    /**@brief The largest number of words that can be reclaimed by garbage collection.
     *
     * The actual amount of space freed by garbage collection might be less than this value if
     * records are open while garbage collection is run.
     */
    uBit.serial.printf( "freeable_words   %d\n", (int) stat.freeable_words);

    /**@brief Filesystem corruption has been detected.
     *
     * One or more corrupted records were detected. FDS will heal the filesystem automatically
     * next time garbage collection is run, but some data may be lost.
     *
     * @note: This flag is unrelated to CRC failures.
     */
    uBit.serial.printf( "corruption       %d\n", (int) stat.corruption);
#endif // MICROBIT_CODAL
}

/**
  * fdsRecords
  */
//% help=cpptest/fdsRecords
//% block="fdsRecords"
//%
void fdsRecords() {
#if MICROBIT_CODAL
    uBit.serial.printf( "\n\nrecords: id, address, gc_run_count, isopen\n\n");        
    //!< The unique record ID.
    //!< The last known location of the record in flash.
    //!< Number of times garbage collection has been run.
    //!< Whether the record is currently open.

    fds_record_desc_t desc;
    fds_find_token_t  token;
    memset( &desc,  0, sizeof(desc));
    memset( &token, 0, sizeof(token));
    while ( fds_record_iterate( &desc, &token) == NRF_SUCCESS)
    {
      uBit.serial.printf( "%d, 0x%x, %d, %d\n", (int) desc.record_id, (unsigned int) desc.p_record, (int) desc.gc_run_count, (int) desc.record_is_open);         
    }
#endif // MICROBIT_CODAL
}

/**
  * one
  */
//% help=cpptest/one
//% block="one"
//%
void one() {
  cpptest::config();
  cpptest::map();
  cpptest::fdsStat();
  cpptest::fdsRecords();
} 

}
