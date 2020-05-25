#ifndef EEPROM_H
#define EEPROM_H

#include <stdint.h>

#include "iotn84a.h"


void eepromWriteByte(uint16_t addr, uint8_t data);

uint8_t eepromReadByte(uint16_t addr);


void eepromWrite(uint16_t addr, uint8_t* data, uint16_t size);

void eepromRead(uint16_t addr, uint8_t* data, uint16_t size);

#endif
