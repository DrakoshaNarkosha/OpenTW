/**
  ******************************************************************************
  * @file    PCI.c
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCU (source)
  ******************************************************************************
  */


#include "PCI.h"


/* Set pin change interrupt mode. */
void pcieSetMode(PCI_t pcie)
{
  GIMSK &= ~((1 << PCIE0) | (1 << PCIE1));
  GIMSK |= pcie;   
}


/* Enable interrupt for selected pin change interrupt line. */
void pcieLineDisable(uint16_t lines)
{
  PCMSK0 &= ~(lines & 0xFF);
  PCMSK1 &= ~(lines >> 8);  
}

/* Disable interrupt for selected pin change interrupt line. */
void pcieLineEnable(uint16_t lines)
{
  PCMSK0 |= (lines & 0xFF);
  PCMSK1 |= (lines >> 8); 
}
