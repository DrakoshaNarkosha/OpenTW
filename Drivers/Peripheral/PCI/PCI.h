/**
  ******************************************************************************
  * @file    PCI.h
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCU (header)
  * @version 1.0.0  
  *
  * @page driver_peripheral_pci  PCI driver
  *
  * @subsection Description
  *   Low-level PCI driver for 8-bit AVR MCU. This drivers is wrapper on MCU 
  *   registers to give more convenient access to PCI peripheral registers.
  *
  *   @note GPIO pin may be reconfigured in any time of program executing.
  * 
  *   Information about types for this module may be found on
  *   @ref driver_peripheral_pci_types page.
  *
  *
  * @subsection Usage
  *   1. Initialize GPIO pin, using GPIO driver library.
  *   2. Allocate interrupt vector for selected input (PCINT0_vect or 
  *      PCINT1_vect).
  *   3. Call pcieSetMode() function to enable necessary interrupts.
  *   4. Call pcieLineEnable() to enable selected pin change interrupt.
  *   5. Handle event inside interrupt vector.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef PCI_H
#define PCI_H

#include "PCITypes.h"


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
  * @defgroup   PCI
  * @brief      Pin change interrupt driver
  * @details    More information on page @ref driver_peripheral_pci
  * @{
  */

/** Set pin change interrupt mode.
  *
  * @param[in]     pcie  GPIO pin change interrupt mode.
  *
  * @return None.
  */
void pcieSetMode(PCI_t pcie);
      

/** Enable interrupt for selected pin change interrupt line.
  *
  * @param[in]     line  GPIO pin change line.
  *
  * @return None.
  */ 
void pcieLineDisable(uint16_t lines);

/** Disable interrupt for selected pin change interrupt line.
  *
  * @param[in]     line  GPIO pin change line.
  *
  * @return None.
  */ 
void pcieLineEnable(uint16_t lines);
   
/** @}
  * End of PCI defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */
   
#endif
