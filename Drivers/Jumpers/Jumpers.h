/**
  ******************************************************************************
  * @file    Jumpers.h
  * @brief   Jumpers module (header)
  * @version 1.0.0
  *
  * @page jumpers  Jumpers driver
  *
  * @section jumpers_description  Description
  *   Current module implements checker of jumpers state. Currently, implements
  *   two jumpers: jumper 1 and jumper 2.
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
  *		  <td>@ref jumpers_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref jumpers_interface</td>
  *     </tr>
  *      
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref jumpers</td>
  *     </tr>
  *   </table>
  *
  *   @note Read funtion returns true, if jumper is soldered (related line is
  *         connected to the ground) and false if jumper is not soldered 
  *         (related line is left floating).
  *
  *
  * @section jumpers_usage  Usage
  *   1. Call jumpersInit().
  *   2. Call jumper1Read() and jumper2Read() to read current jumpers state.
  *
  *
  * @section jumpers_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef JUMPERS_H
#define JUMPRES_H

#include <stdbool.h>


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_jumpers  Jumpers
  * @brief      Jumpers handler 
  * @details    More information on page @ref jumpers
  * @{
  */


/** @ingroup    driver_jumpers
  * @defgroup   driver_jumpers_driver  Driver
  * @brief      Jumpers driver
  * @details    More information on page @ref jumpers
  * @{
  */

/** Initialize related to Jumpres module peripheral modules.
  *
  * @return None.
  */
void jumpersInit(void);


/** Get current state of the jumper 1.
  *
  * @retval false  Jumper is not soldered (not connected to the ground).
  * @retval true   Jumper is soldered (connected to the ground).
  */
bool jumpers1Read(void);

/** Get current state of the jumper 2.
  *
  * @retval false  Jumper is not soldered (not connected to the ground).
  * @retval true   Jumper is soldered (connected to the ground).
  */
bool jumpers2Read(void);

/* End of driver_jumpers_driver defgroup */
/** @}
  */


/* End of driver_jumpers defgroup */
/** @}
  */
  

/* End of drivers defgroup */  
/** @}
  */

#endif
