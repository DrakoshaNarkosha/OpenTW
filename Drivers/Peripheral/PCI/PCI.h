/**
  ******************************************************************************
  * @file    PCI.h
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCUs (header)
  * @version 1.0.0  
  *
  * @page pci  PCI driver
  *
  * @section pci_description  Description
  *   Low-level PCI driver for 8-bit AVR MCUs. This drivers is wrapper on MCU 
  *   registers to give more convenient access to PCI peripheral registers.
  *
  *   @note GPIO pin may be reconfigured in any time of program executing.
  * 
  *   Information about types for this module may be found on
  *   @ref pci_types page.
  *
  *
  * @section pci_usage  Usage
  *   1. Initialize GPIO pin, using GPIO driver library.
  *   2. Allocate interrupt vector for selected input (PCINT0_vect or 
  *      PCINT1_vect).
  *   3. Call pcieSetMode() function to enable necessary interrupts.
  *   4. Call pcieLineEnable() to enable selected pin change interrupt.
  *   5. Handle event inside interrupt vector.
  *
  *
  * @section pci_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef PCI_H
#define PCI_H

#include "PCITypes.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_peripheral  Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    drivers_peripheral
  * @addtogroup drivers_peripheral_pci  PCI
  * @brief      PCI (pin change interrupt) handler
  * @details    More information on page @ref pci  
  * @{
  */


/** @ingroup    drivers_peripheral_pci
  * @defgroup   drivers_peripheral_pci_driver  Driver
  * @brief      PCI driver
  * @details    More information on page @ref pci
  * @{
  */

/** Set pin change interrupt mode.
  *
  * @param[in]     pcie  GPIO pin change interrupt mode.
  *
  * @return None.
  */
void pciSetMode(PCI_t pcie);
      

/** Enable interrupt for selected pin change interrupt line.
  *
  * @param[in]     lines  GPIO pin change line.
  *
  * @return None.
  */ 
void pciLineDisable(uint16_t lines);

/** Disable interrupt for selected pin change interrupt line.
  *
  * @param[in]     lines  GPIO pin change line.
  *
  * @return None.
  */ 
void pciLineEnable(uint16_t lines);

/* End of drivers_peripheral_pci_driver defgroup */
/** @}
  */


/* End of drivers_peripheral_pci defgroup */
/** @}
  */


/* End of drivers_peripheral defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */
   
#endif
