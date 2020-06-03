/**
  ******************************************************************************
  * @file    PCI.h
  * @brief   PCI (pin change interrupt) driver for 8-bit AVR MCU (header)
  * @version 1.0.0  
  *
  * Low-level PCI driver for 8-bit AVR MCU. This drivers is wrapper on MCU 
  * registers to give more convenient access to PCI peripheral registers.
  * 
  * Usage [blocking mode]:<br>
  * 1) Initialize GPIO pin, using GPIO driver library.<br>
  * 2) Allocate interrupt vector for selected input (PCINT0_vect or 
  *    PCINT1_vect).<br>
  * 3) Call pcieSetMode() function to enable necessary interrupts.<br>
  * 4) Call pcieLineEnable() to enable selected pin change interrupt.<br>
  * 5) Handle event inside interrupt vector.
  *
  * @note GPIO pin may be reconfigured in any time of program executing.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
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
