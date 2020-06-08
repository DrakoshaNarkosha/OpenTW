/**
  ******************************************************************************
  * @file    TimerCounter0Types.h
  * @brief   Types for Timer/Counter 0 library
  * @version 1.0.0
  *
  * @page driver_peripheral_timer_counter_0_types  Types for Timer/Counter 0 library
  *
  * @subsection Description
  *   Types for Timer/Counter 0 driver library.
  *
  *
  * @subsection Changelog
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
  * @defgroup   Timer_0_Types
  * @brief      Types for Timer 0 driver
  * @details    More information on page @ref driver_peripheral_timer_counter_0
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

/* End of Timer_0_Types defgroup */
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
