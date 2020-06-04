/**
  ******************************************************************************
  * @file    ShootingMode.h
  * @brief   Implementation of Shooting Mode module (header)
  * @version 1.0.0
  *
  * Current module implements checker of current Shooting Mode (based on AVR 
  * PCI system). Depending on automatic mode, saved to EEPROM may switch 
  * between [semi - full auto] and [semi - 3 burst] modes. 
  * 
  * @warning If value, stored in EEPROM wouldn`t be valid, module will write
  *          3-burst mode as automatic mode to EEPROM.
  *
  * Usage:<br>
  * 1) Put shootingModeIrqHandler() to proper interrupt handler, based on GPIO 
  *    settings for Shooting Mode module.<br> 
  * 2) Call shootingModeInit().<br>
  * 3) Check current shooting mode, using shootingModeRead.<br>
  *
  * For reprogram, call shootingModeChange() to switch between full auto and
  * 3-burst modes. This function also reprogram EEPROM.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_H
#define SHOOTING_MODE_H

#include "ShootingModeTypes.h"


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
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Shooting_Mode_Driver
  * @brief      Shooting mode driver
  * @{
  */

/** Initialize related to Shooting Mode module peripheral modules.
  *
  * Perform EEPROM read operation of current mode for third switch position
  * (full auto or 3-burst).
  * 
  * @note If value read from EEPROM will be invalid, this function will
  *       perform EEPROM program operation and set 3-burst mode.
  *
  * @return None.
  */
void shootingModeInit(void);


/** Change automatic shooting mode between full auto and 3-burst.
  *
  * Change current automatic mode and perform EEPROM write operation.
  *
  * @return None.
  */
void shootingModeChange(void);


/** Read current shooting mode from RAM variable.
  *
  * @note This function does not perform any GPIO read operations. It only
  *       returns value of global variable, which updates inside 
  *       shootingModeIrqHandler().
  *
  * @return None.
  */
ShootingMode_t shootingModeRead(void);


/** Interrupt handler for the Shooting Mode module.
  *
  * Call this function inside corresponding PCI interrupt handler, based on
  * GPIO settings.
  *
  * This function updates current shooting mode by checking corresponding GPIO
  * state. May switch between [semi - full auto] and [semi - 3 burst], 
  * depending on settings saved inside EEPROM.
  *
  * @return None.
  */
void shootingModeIrqHandler(void);

/** @}
  * End of Shooting_Mode_Driver defgroup.
  */


/** @}
  * End of Shooting_Mode defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
