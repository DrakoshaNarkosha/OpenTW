/**
  ******************************************************************************
  * @file    TimerCounter0.h
  * @brief   Timer/Counter 0 driver for 8-bit AVR MCU (header)
  * @version 1.0.0
  *
  * Low-level Timer/Counter 0 driver for 8-bit AVR MCU. This drivers is wrapper
  * on MCU registers to give more convenient access to Timer/Counter 0 
  * peripheral registers. 
  * @note Only overflow mode is supported for now.
  *
  * Usage:<br>
  * 1) Allocate corresponding interrupt vector.<br>
  * 2) Call tc0SetCounter() function.<br>
  * 3) Call tc0SetIt() to enable corresponding interrupt.<br>
  * 4) Call tc0SetClock() to enable timer with selected clock source.<br>
  * 5) Handle events inside interrupt vector, if global interrupt flag is set.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
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
  * @brief      Timer 0 drivers
  * @{
  */


/** @ingroup    Timer_0
  * @defgroup   Timer_0_Driver
  * @brief      Timer 0 driver
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

/** @}
  * End of Timer_0_Driver defgroup.
  */


/** @}
  * End of Timer_0 defgroup.
  */


/** @}
  * End of Timers defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
