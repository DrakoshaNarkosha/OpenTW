/**
  ******************************************************************************
  * @file    Magazine.h
  * @brief   Implementation of Magazine module (header)
  * @version 1.0.0
  *
  * Current module implements checker of magazine presence (based on AVR PCI
  * system).
  *
  * Usage:<br>
  * 1) Put magazineIrqHandler() to proper interrupt handler, based on GPIO
  *    settings for Magazine module.<br> 
  * 2) Call magazineInit().<br>
  * 3) Check if magazine is present, using magazinePresent() function.<br>
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
  ******************************************************************************
  */


#ifndef MAGAZINE_H
#define MAGAZINE_H


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
  * @addtogroup Magazine
  * @brief      Magazine handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Magazine_Driver
  * @brief      Magazine driver
  * @{
  */

/** Initialize related to Magazine module peripheral modules.
  *
  * @return None.
  */
void magazineInit(void);


/** Get current state of the magazine.
  *
  * @retval false  The magazine is not present.
  * @retval true   The magazine is present.
  */
bool magazinePresent(void);


/** Interrupt handler for the Magazine module.
  *
  * Call this function inside corresponding PCI interrupt handler, based on
  * GPIO settings.
  *
  * This function updates current magazine state by checking corresponding GPIO
  * state. False means, that magazine is not present. True means, that magazine
  * is present.
  *
  * @return None.
  */
void magazineIrqHandler(void);

/** @}
  * End of Magazine_Driver defgroup.
  */


/** @}
  * End of Magazine defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
