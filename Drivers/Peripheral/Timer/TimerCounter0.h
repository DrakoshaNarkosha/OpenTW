/**
  ******************************************************************************
  * @file    TimerCounter0.h
  * @brief   Timer/Counter 0 driver for 8-bit AVR MCUs (header)
  * @version 1.0.0
  *
  * @page timer_counter_0  Timer/Counter 0 driver
  *
  * @section timer_counter_0_description  Description
  *   Low-level Timer/Counter 0 driver for 8-bit AVR MCUs. This drivers is 
  *   wrapper on MCU registers to give more convenient access to Timer/Counter 
  *   0 peripheral registers. 
  *   
  *   Information about types for this module may be found on
  *   @ref timer_counter_0_types page. 
  *  
  *   @note Only overflow mode is supported for now.
  *
  *
  * @section timer_counter_0_usage  Usage
  *   1. Allocate corresponding interrupt vector.
  *   2. Call tc0SetCounter() function.
  *   3. Call tc0SetIt() to enable corresponding interrupt.
  *   4. Call tc0SetClock() to enable timer with selected clock source.
  *   5. Handle events inside interrupt vector, if global interrupt flag is set.
  *
  *
  * @section timer_counter_0_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef TIMER_COUNTER_0_H
#define TIMER_COUNTER_0_H

#include "TimerCounter0Types.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_peripheral  Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    drivers_peripheral
  * @addtogroup drivers_peripheral_timers  Timers
  * @brief      Timers drivers
  * @{
  */


/** @ingroup    drivers_peripheral_timers
  * @addtogroup drivers_peripheral_timers_timer_0  Timer\Counter 0
  * @brief      Timer/Counter 0 handler
  * @details    More information on page @ref timer_counter_0
  * @{
  */


/** @ingroup    drivers_peripheral_timers_timer_0
  * @defgroup   drivers_peripheral_timers_timer_0_driver  Driver
  * @brief      Timer/Counter 0 driver
  * @details    More information on page @ref timer_counter_0
  * @{
  */

/** Set clock source for the timer.
  *
  * @param[in]     source         Clock source.
  *
  * @return None.
  */
void tc0SetClock(TC0Clk_t source);

/** Set counter for the timer.
  *
  * @param[in]     counter        Counter value.
  *
  * @return None.
  */
void tc0SetCounter(uint8_t counter);

/** Set interrupt mode for the timer.
  *
  * @param[in]     interrupt      Interrupt mask value.
  *
  * @note Several interrupt sources may be enabled at the same time, passed 
  *       into pin field using "|" operator.
  *
  * @return None.
  */
void tc0SetIt(TC0It_t interrupt);

/* End of drivers_peripheral_timers_timer_0_driver defgroup */
/** @}
  */


/* End of drivers_peripheral_timers_timer_0 defgroup */
/** @}
  */


/* End of drivers_peripheral_timers defgroup */
/** @}
  */


/* End of drivers_peripheral defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
