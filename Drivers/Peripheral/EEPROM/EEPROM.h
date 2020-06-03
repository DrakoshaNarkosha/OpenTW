/**
  ******************************************************************************
  * @file    EEPROM.h
  * @brief   EEPROM (Electrically Erasable Programmable Read-Only Memory) 
  *          driver for 8-bit AVR MCU (header)
  * @version 1.0.0
  *
  * Low-level EEPROM driver for 8-bit AVR MCU. This drivers is wrapper on MCU
  * registers to give more convenient access to EEPROM peripheral registers.
  * This driver implements writing data to EEPROM with byte and buffered
  * access.
  *
  * Call functions with eepromWrite prefix to write data to EEPROM and
  * functions with eepromRead prefix to read data from EEPROM.
  *
  * @warning There is no check of memory overflow inside these functions. Be
  *          careful with addressing.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>
  ******************************************************************************
  */


#ifndef EEPROM_H
#define EEPROM_H

#include <stdint.h>

#include "iotn84a.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   EEPROM
  * @brief      EEPROM driver
  * @{
  */

/** Write one byte to EEPROM.
  *
  * @warning There is no check of memory overflow inside this function. Be
  *          careful with addressing.
  *
  * @param[in]     addr  Address in EEPROM to store data in.
  * @param[in]     data  Value to store in EEPROM.
  *
  * @return None.
  */
void eepromWriteByte(uint16_t addr, uint8_t data);

/** Read one byte from EEPROM.
  *
  * @warning There is no check of memory overflow inside this function. Be
  *          careful with addressing.
  *
  * @param[in]     addr  Address in EEPROM to read data from.
  *
  * @return Read value from EEPROM.
  */
uint8_t eepromReadByte(uint16_t addr);


/** Write data from buffer to EEPROM.
  *
  * @warning There is no check of memory overflow inside this function. Be
  *          careful with addressing.
  *
  * @param[in]     addr  Address in EEPROM to store data starting from.
  * @param[in]     data  Data buffer to write to EEPROM.
  * @param[in]     size  Number of bytes to write to EEPROM.
  *
  * @return None.
  */
void eepromWrite(uint16_t addr, uint8_t* data, uint16_t size);

/** Read data from EEPROM to buffer.
  *
  * @warning There is no check of memory overflow inside this function. Be
  *          careful with addressing.
  *
  * @warning There is no check of buffer overflow inside this function.
  *
  * @param[in]     addr  Address in EEPROM to store data starting from.
  * @param[in]     data  Data buffer to read data in from EEPROM.
  * @param[in]     size  Number of bytes to write to EEPROM.
  *
  * @return None.
  */
void eepromRead(uint16_t addr, uint8_t* data, uint16_t size);

/** @}
  * End of EEPROM defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
