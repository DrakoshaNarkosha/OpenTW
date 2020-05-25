#include "EEPROM.h"


void eepromWriteByte(uint16_t addr, uint8_t data)
{
  while(EECR & (1 << EEPE)) {}
  EECR  = (0 << EEPM1) | (0 << EEPM0);
  EEAR  = addr;
  EEDR  = data;
  EECR  |= (1 << EEMPE);
  EECR  |= (1 << EEPE);  
}

uint8_t eepromReadByte(uint16_t addr)
{
  while(EECR & (1 << EEPE)) {}
  EEAR  = addr++;
  EECR  |= (1 << EERE);
  return EEDR;  
}


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
