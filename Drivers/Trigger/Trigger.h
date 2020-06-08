/**
  ******************************************************************************
  * @file    Trigger.h
  * @brief   Implementation of Trigger module (header)
  * @version 1.1.0
  *
  * @page driver_trigger  Trigger driver
  *
  * @subsection Description
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
  *		  <td>@ref driver_trigger_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref driver_trigger_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref driver_trigger</td>
  *     </tr>
  *   </table>
  *
  *
  * @subsection Usage
  *   1. Put triggerIrqHandler() to proper interrupt handler, based on GPIO
  *      settings for Trigger module.
  *   2. Call triggerInit().
  *   3. Check if trigger is pushed, using triggerPushed() function.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  * - <b><em>Version 1.1.0</em></b>
  *     - Added Interface files to separate platform-related logic from module
  *       implementation.
  ******************************************************************************
  */


#ifndef TRIGGER_H
#define TRIGGER_H


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Trigger
  * @brief      Trigger handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Trigger_Driver
  * @brief      Trigger driver
  * @details    More information on page @ref driver_trigger  
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

/* End of Trigger_Driver defgroup */
/** @}
  */


/* End of Trigger defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
