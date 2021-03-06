/**
  ******************************************************************************
  * @file    Magazine.h
  * @brief   Magazine driver (header)
  * @version 1.1.0
  *
  * @page magazine  Magazine driver
  *
  * @section magazine_description  Description
  *   Current module implements interrupt-based checking of magazine presence.
  *   For proper functioning GPIO line must have external interrupt feature.
  *   Otherwise, use direct GPIO read inside cycle instead of this module. 
  *
  *   @note Interrupt must react on both logic level changes: from low to high
  *         and from high to low. Otherwise, unexpected behavior will occur.
  *
  *   @note magazinePresent() function (for checking, is magazine is present)
  *         doesn`t perform any read operations. It only returns global state
  *         variable value.
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
  *		    <td>@ref magazine_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		    <td>@ref magazine_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		    <td>@ref magazine</td>
  *     </tr>
  *   </table>
  *
  *
  * @section magazine_usage  Usage
  *   1. Put magazineIrqHandler() to proper interrupt handler, based on GPIO
  *      settings for Magazine module.
  *   2. Call magazineInit().
  *   3. Check if magazine is present, using magazinePresent() function.
  *
  *
  * @section magazine_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added Interface files to separate platform-related logic from module
  *       implementation.
  ******************************************************************************
  */


#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <stdbool.h>


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_magazine  Magazine
  * @brief      Magazine handler 
  * @details    More information on page @ref magazine  
  * @{
  */


/** @ingroup    driver_magazine
  * @defgroup   driver_magazine_driver  Driver
  * @brief      Magazine driver
  * @details    More information on page @ref magazine
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
  * Call this function inside corresponding interrupt handler, based on GPIO 
  * settings.
  *
  * This function updates current magazine state by checking corresponding GPIO
  * state. False means, that magazine is not present. True means, that magazine
  * is present.
  *
  * @return None.
  */
void magazineIrqHandler(void);

/* End of driver_magazine_driver defgroup */
/** @}
  */


/* End of driver_magazine defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
