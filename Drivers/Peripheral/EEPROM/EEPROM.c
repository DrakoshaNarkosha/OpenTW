/**
  ******************************************************************************
  * @file    EEPROM.h
  * @brief   EEPROM (Electrically Erasable Programmable Read-Only Memory)
  *          driver for 8-bit AVR MCUs (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "iotn84a.h"

#include "EEPROM.h"


/** @ingroup    drivers_peripheral
  * @addtogroup drivers_peripheral_eeprom  EEPROM
  * @brief      EEPROM (Electrically Erasable Programmable Read-Only Memory) driver
  * @details    More information on page @ref eeprom
  * @{
  */

/* Write one byte to EEPROM. */
void eepromWriteByte(uint16_t addr, uint8_t data)
{
  while(EECR & (1 << EEPE)) {}
  EECR  = (0 << EEPM1) | (0 << EEPM0);
  EEAR  = addr;
  EEDR  = data;
  EECR  |= (1 << EEMPE);
  EECR  |= (1 << EEPE);  
}

/* Read one byte from EEPROM. */
uint8_t eepromReadByte(uint16_t addr)
{
  while(EECR & (1 << EEPE)) {}
  EEAR  = addr++;
  EECR  |= (1 << EERE);
  return EEDR;  
}


/* Write data from buffer to EEPROM. */
void eepromWrite(uint16_t addr, uint8_t* data, uint16_t size)
{
  while (size-- != 0)
  {
    while(EECR & (1 << EEPE)) {}
    EECR  = (0 << EEPM0) | (0 << EEPM1);
    EEAR  = addr++; 
    EEDR  = *data++;
    EECR  |= (1 << EEMPE);
    EECR  |= (1 << EEPE);
  }
}

/* Read data from EEPROM to buffer. */
void eepromRead(uint16_t addr, uint8_t* data, uint16_t size)
{
  while (size-- != 0)
  {
    while(EECR & (1 << EEPE)) {}
    EEAR  = addr++;
    EECR  |= (1 << EERE);
    *data++ = EEDR;
  }
}

/* End of drivers_peripheral_eeprom defgroup */
/** @}
  */
