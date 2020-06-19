/**
  ******************************************************************************
  * @file    TimerCounter0Types.h
  * @brief   Types for the Timer/Counter 0 driver for 8-bit AVR MCUs
  * @version 1.0.0
  *
  * @page timer_counter_0_types  Timer/Counter 0 types
  *
  * @section timer_counter_0_types_description  Description
  *   Types for the Timer/Counter 0 driver library.
  *
  *
  * @section timer_counter_0_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef TIMER_TYPES_H
#define TIMER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "iotn84a.h"
#include "interrupt.h"


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
  * @defgroup   drivers_peripheral_timers_timer_0_types  Types
  * @brief      Timer/Counter 0 driver types
  * @details    More information on page @ref timer_counter_0_types
  * @{
  */

/**
  * Clock source for Timer/Counter.
  */
typedef enum
{
  TC0_CLK_SOURCE_OFF                = 0x00,   /*!< No clock source (Timer/Counter stopped). */
  TC0_CLK_SOURCE_PRESCALLER_1       = 0x01,   /*!< Clk/0 (No prescaling). */
  TC0_CLK_SOURCE_PRESCALLER_8       = 0x02,   /*!< Clk/8 (From prescaller). */
  TC0_CLK_SOURCE_PRESCALLER_64      = 0x03,   /*!< Clk/64 (From prescaller). */
  TC0_CLK_SOURCE_PRESCALLER_256     = 0x04,   /*!< Clk/256 (From prescaller). */
  TC0_CLK_SOURCE_PRESCALLER_1024    = 0x05,   /*!< Clk/1024 (From prescaller). */
  TC0_CLK_SOURCE_EXTERNAL_FALLING   = 0x06,   /*!< External clock source on T0 pin. Clock on falling edge. */
  TC0_CLK_SOURCE_EXTERNAL_RISING    = 0x07,   /*!< External clock source on T0 pin. Clock on rising edge. */
}TC0Clk_t;

/**
  * Interrupt permissions.
  */
typedef enum
{
  TC0_IT_NONE                       = 0x00,   /*!< Interrupts are disabled. */
  TC0_IT_OVERFLOW                   = 0x01,   /*!< Overflow interrupt. */
  TC0_IT_COMPARE_MATCH_A            = 0x02,   /*!< Output compare match A. */
  TC0_IT_COMPARE_MATCH_B            = 0x04,   /*!< Output compare match B. */
}TC0It_t;

/* End of drivers_peripheral_timers_timer_0_types defgroup */
/** @}
  */


/* End of drivers_peripheral_timers_timer_0 defgroup */
/** @}
  */


/* End of drivers_peripheral_timer defgroup */
/** @}
  */


/* End of drivers_peripheral defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
