/**
  ******************************************************************************
  * @file    ShootingMode.h
  * @brief   Shooting Mode module (header)
  * @version 1.1.0
  *
  * @page driver_shooting_mode  Shooting mode driver
  *
  * @subsection Description
  *   Current module implements checker of current Shooting Mode. Depending on 
  *   automatic mode, saved in memory, may switch between [semi - full auto] and
  *   [semi - 3 burst] modes. 
  * 
  *   @warning If value, stored in memory wouldn`t be valid, module will write
  *            3-burst mode as automatic mode to memory.
  *
  *   Current driver consist of settings file, hardware-related interface, types
  *   file and application driver (current file). More information about modules
  *   may be found in next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Settings</th>
  *		  <td>@ref driver_shooting_mode_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref driver_shooting_mode_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Types</th>
  *		  <td>@ref driver_shooting_mode_types</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref driver_trigger</td>
  *     </tr>
  *   </table>
  *
  * @subsection Usage
  *   1. Put shootingModeIrqHandler() to proper interrupt handler, based on 
  *      GPIO settings for Shooting Mode module.
  *   2. Call shootingModeInit().
  *   3. Check current shooting mode, using shootingModeRead.
  *
  *   @note For reprogram, call shootingModeChange() to switch between full 
  *         auto and 3-burst modes. This function also reprogram memory.
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


#ifndef SHOOTING_MODE_H
#define SHOOTING_MODE_H

#include "ShootingModeTypes.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref driver_shooting_mode  
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

/* End of Shooting_Mode_Driver defgroup */
/** @}
  */


/* End of Shooting_Mode defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
