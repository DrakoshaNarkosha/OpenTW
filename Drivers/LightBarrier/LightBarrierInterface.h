/**
  ******************************************************************************
  * @file    LightBarrierInterface.h
  * @brief   Interface for the Light Barrier module (header)
  * @version 1.1.0
  *
  * @page light_barrier_interface  Light Barrier interface
  *
  * @section light_barrier_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with ligth barrier. This module must implement initialization, 
  *   ligth barrier LED on and ligth barrier photodiode read functions.
  *
  *   @note High logic level on photodiode GPIO line means, that the turn of the
  *         sector gear is over, so read function must return true.
  *
  *
  * @section light_barrier_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Changed @ref ligthBarrierIfOn() implementation. Now it reset line to 
  *       turn on the LED.
  *     - Changed @ref ligthBarrierIfOff() implementation. Now it set line to
  *       turn off the LED.
  ******************************************************************************
  */


#ifndef LIGHT_BARRIER_INTERFACE_H
#define LIGHT_BARRIER_INTERFACE_H

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
  * @defgroup   driver_light_barrier_interface  Interface
  * @brief      Light Barrier module interface
  * @details    More information on page @ref light_barrier_interface  
  * @{
  */

/** Initialize light barrier hardware, based on settings inside the LightBarrierSettings.h file.
  *
  * @return None.
  */
void ligthBarrierIfInit(void);


/** Turn on the LED for the Light Barrier.
  *
  * @return None.
  */
void ligthBarrierIfOn(void);

/** Turn off the LED for the Light Barrier.
  *
  * @return None.
  */
void ligthBarrierIfOff(void);


/** Read state of the light barrier photodiode.
  *
  * @retval false  Turn of sector gear is not over.
  * @retval true   Turn of sector gear is over.
  */
bool ligthBarrierIfRead(void);

/* End of driver_light_barrier_interface defgroup */
/** @}
  */


/* End of driver_light_barrier defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
