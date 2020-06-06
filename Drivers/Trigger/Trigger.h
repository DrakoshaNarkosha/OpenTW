/**
  ******************************************************************************
  * @file    Trigger.h
  * @brief   Implementation of Trigger module (header)
  * @version 1.0.0
  *
  * Current module implements checker of Trigger push (based on AVR PCI system).
  *
  * Usage:<br>
  * 1) Put triggerIrqHandler() to proper interrupt handler, based on GPIO
  *    settings for Trigger module.<br> 
  * 2) Call triggerInit().<br>
  * 3) Check if trigger is pushed, using triggerPushed() function.<br>
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
  ******************************************************************************
  */


#ifndef TRIGGER_H
#define TRIGGER_H


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
  * @addtogroup Trigger
  * @brief      Trigger handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Trigger_Driver
  * @brief      Trigger driver
  * @{
  */

/** Initialize related to Trigger module peripheral modules.
  *
  * @return None.
  */
void triggerInit(void);


/** Get current state of the trigger.
  *
  * @retval false  The trigger is not pushed.
  * @retval true   The trigger is pushed.
  */
bool triggerPushed(void);


/** Interrupt handler for the Trigger module.
  *
  * Call this function inside corresponding PCI interrupt handler, based on
  * GPIO settings.
  *
  * This function updates current trigger state by checking corresponding GPIO
  * state. False means, that trigger is not pushed. True means, that trigger
  * is pushed.
  *
  * @return None.
  */
void triggerIrqHandler(void);

/** @}
  * End of Trigger_Driver defgroup.
  */


/** @}
  * End of Trigger defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
