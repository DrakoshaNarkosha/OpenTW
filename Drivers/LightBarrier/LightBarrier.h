/**
  ******************************************************************************
  * @file    LightBarrier.h
  * @brief   Light Barrier driver (header)
  * @version 1.0.0
  *
  * @page light_barrier  Light Barrier driver
  *
  * @section light_barrier_description  Description
  *   Current module implements operations with Light Barrier`s LED and 
  *   photodiode modules. For proper functioning photodiode GPIO line must have 
  *   external interrupt feature. Otherwise, use direct GPIO read inside cycle 
  *   instead of this module. 
  *
  *   @note Interrupt must react on both logic level changes: from low to high
  *         and from high to low. Otherwise, unexpected behavior will occur.
  *
  *   @note lightBarrierRead() function (for checking, is the sector gear turn
  *         is over) doesn`t perform any read operations. It only returns global
  *         state variable value.
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
  *		    <td>@ref light_barrier_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		    <td>@ref light_barrier_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		    <td>@ref light_barrier</td>
  *     </tr>
  *   </table>
  *
  *
  * @section light_barrier_usage  Usage
  *   1. Put @ref lightBarrierIrqHandler() to proper interrupt handler, based on
  *      GPIO settings for the Light Barrier module.
  *   2. Call @ref lightBarrierInit().
  *   3. Turn on LED with @ref lightBarrierOn() function.
  *   4. Read state using lightBarrierRead() function.
  *   5. Perform point 4 operation as much as need.
  *   6. Turn of LED using @ref lightBarrierOff() function.
  *
  *
  * @section light_barrier_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added Interface files to separate platform-related logic from module
  *       implementation.
  ******************************************************************************
  */


#ifndef LIGHT_BARRIER_H
#define LIGHT_BARRIER_H

#include <stdbool.h>


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_light_barrier  Light Barrier
  * @brief      Light Barrier handler 
  * @details    More information on page @ref light_barrier
  * @{
  */


/** @ingroup    driver_light_barrier
  * @defgroup   driver_light_barrier_driver  Driver
  * @brief      Light Barrier driver
  * @details    More information on page @ref light_barrier
  * @{
  */

/** Initialize related to the Light Barrier module peripheral modules.
  *
  * @return None.
  */
void lightBarrierInit(void);


/** Turn on the LED for the Light Barrier.
  *
  * @return None.
  */
void lightBarrierOn(void);

/** Turn off the LED for the Light Barrier.
  *
  * @return None.
  */
void lightBarrierOff(void);


/** Read state of the light barrier photodiode.
  *
  * @note This function doesn`t perform any read operations. It only returns
  *       global state variable value.
  *
  * @retval false  Turn of sector gear is not over.
  * @retval true   Turn of sector gear is over.
  */
bool ligthBarrierRead(void);


/** Interrupt handler for the Light Barrier module.
  *
  * Call this function inside corresponding interrupt handler, based on GPIO
  * settings.
  *
  * This function updates current LED state by checking corresponding GPIO
  * state.
  *
  * @return None.
  */
void lightBarrierIrqHandler(void);

/* End of driver_light_barrier_driver defgroup */
/** @}
  */


/* End of driver_light_barrier defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
