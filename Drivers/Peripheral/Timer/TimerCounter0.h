/**
  ******************************************************************************
  * @file    TimerCounter0.h
  * @brief   Timer/Counter 0 driver for 8-bit AVR MCU (header)
  * @version 1.0.0
  *
  * @page driver_peripheral_timer_counter_0  Timer/Counter 0 driver
  *
  * @subsection Description
  *   Low-level Timer/Counter 0 driver for 8-bit AVR MCU. This drivers is 
  *   wrapper on MCU registers to give more convenient access to Timer/Counter 
  *   0 peripheral registers. 
  *   
  *   Information about types for this module may be found on
  *   @ref driver_peripheral_timer_counter_0_types page. 
  *  
  *   @note Only overflow mode is supported for now.
  *
  *
  * @subsection Usage
  *   1. Allocate corresponding interrupt vector.
  *   2. Call tc0SetCounter() function.
  *   3. Call tc0SetIt() to enable corresponding interrupt.
  *   4. Call tc0SetClock() to enable timer with selected clock source.
  *   5. Handle events inside interrupt vector, if global interrupt flag is set.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef TIMER_COUNTER_0_H
#define TIMER_COUNTER_0_H

#include "TimerCounter0Types.h"


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
  * @addtogroup Timers
  * @brief      Timers drivers
  * @{
  */


/** @ingroup    Timers
  * @addtogroup Timer_0
  * @brief      Timer 0 driver
  * @details    More information on page @ref driver_peripheral_timer_counter_0
  * @{
  */


/** @ingroup    Timer_0
  * @defgroup   Timer_0_Driver
  * @brief      Timer 0 driver
  * @details    More information on page @ref driver_peripheral_timer_counter_0
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

/* End of Timer_0_Driver defgroup */
/** @}
  */


/* End of Timer_0 defgroup */
/** @}
  */


/* End of Timers defgroup */
/** @}
  */


/* End of Peripheral defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
