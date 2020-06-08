/**
  ******************************************************************************
  * @file    PCI.c
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCU (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "PCI.h"


/** @ingroup    Peripheral
  * @addtogroup PCI
  * @brief      Pin change interrupt driver
  * @details    More information on page @ref driver_peripheral_pci  
  * @{
  */

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

/* End of PCI defgroup */
/** @}
  */
