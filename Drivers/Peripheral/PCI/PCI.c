/**
  ******************************************************************************
  * @file    PCI.c
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCUs (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "PCI.h"


/** @ingroup    drivers_peripheral_pci
  * @addtogroup drivers_peripheral_pci_driver  Driver
  * @brief      PCI driver
  * @details    More information on page @ref pci
  * @{
  */

/* Set pin change interrupt mode. */
void pciSetMode(PCI_t pcie)
{
  GIMSK &= ~((1 << PCIE0) | (1 << PCIE1));
  GIMSK |= pcie;   
}


/* Enable interrupt for selected pin change interrupt line. */
void pciLineDisable(uint16_t lines)
{
  PCMSK0 &= ~(lines & 0xFF);
  PCMSK1 &= ~(lines >> 8);  
}

/* Disable interrupt for selected pin change interrupt line. */
void pciLineEnable(uint16_t lines)
{
  PCMSK0 |= (lines & 0xFF);
  PCMSK1 |= (lines >> 8); 
}

/* End of drivers_peripheral_pci_driver defgroup */
/** @}
  */
