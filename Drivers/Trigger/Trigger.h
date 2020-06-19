/**
  ******************************************************************************
  * @file    Trigger.h
  * @brief   Trigger driver (header)
  * @version 1.1.0
  *
  * @page trigger  Trigger driver
  *
  * @section trigger_description  Description
  *   Current module implements interrupt-based checking is trigger pressed.
  *   For proper functioning GPIO line must have external interrupt feature.
  *   Otherwise, use direct GPIO read inside cycle instead of this module.
  *
  *   @note triggerPushed() function (for checking, is trigger pushed) doesn`t
  *         perform any read operations. It only returns global state variable 
  *         value.
  *
  *   @note Interrupt must react on both logic level changes: from low to high
  *         and from high to low. Otherwise, unexpected behavior will occur.  
  *
  *   Current driver consist of settings file, hardware-related interface and
  *   application driver (current file). More information about modules may be
  *   found in next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Settings</th>
  *		  <td>@ref trigger_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref trigger_interface</td>
  *     </tr>
  *  
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref trigger</td>
  *     </tr>
  *   </table>
  *
  *
  * @section trigger_usage  Usage
  *   1. Put triggerIrqHandler() to proper interrupt handler, based on GPIO
  *      settings for Trigger module.
  *   2. Call triggerInit().
  *   3. Check if trigger is pushed, using triggerPushed() function.
  *
  *
  * @section trigger_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added Interface files to separate platform-related logic from module
  *       implementation.
  ******************************************************************************
  */


#ifndef TRIGGER_H
#define TRIGGER_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_trigger  Trigger
  * @brief      Fire trigger handler
  * @details    More information on page @ref trigger  
  * @{
  */


/** @ingroup    drivers_trigger
  * @defgroup   drivers_trigger_driver  Driver
  * @brief      Fire trigger driver
  * @details    More information on page @ref trigger  
  * @{
  */

/** Initialize related to the Trigger module peripheral modules.
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

/* End of drivers_trigger_driver defgroup */
/** @}
  */


/* End of drivers_trigger defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
