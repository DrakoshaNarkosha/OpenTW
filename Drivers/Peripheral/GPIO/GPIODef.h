/**
  ******************************************************************************
  * @file    GPIODef.h
  * @brief   Control register structures for the GPIO ports for 8-bit AVR MCUs 
  * @version 1.0.0
  *
  * @page gpio_def  GPIO definitions
  *
  * @section gpio_def_description  Description
  *   GPIO ports access structure instances definition.
  *
  *
  * @section gpio_def_usage  Usage
  *   Add instances of structures for each GPIO port to use it with GPIO 
  *   library. GPIO control register addresses must be taken with "&" operation 
  *   to defines in device-related file. For example, for port A structure will
  *   be next:<br>
  *   @code{.c}
  *   static const GPIO_t GPIOA =
  *   {
  *     &DDRA,
  *     &PORTA,
  *     &PINA
  *   };
  *   @endcode
  *
  *   @note Structure instances MUST be static const.
  *
  *
  * @section gpio_def_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */

#ifndef GPIO_DEF_H
#define GPIO_DEF_H

#include "GPIOTypes.h"


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
  * @addtogroup drivers_peripheral_gpio  GPIO
  * @brief      GPIO (General-Purpose Input/Output) handler
  * @details    More information on page @ref gpio
  * @{
  */


/** @ingroup    drivers_peripheral_gpio
  * @defgroup   drivers_peripheral_gpio_def  Definitions
  * @brief      GPIO driver ports definition
  * @details    More information on page @ref gpio_def
  * @{
  */

/**
  * Port A GPIO structure instance.
  */   
static const GPIO_t GPIOA =
{
  &DDRA,
  &PORTA,
  &PINA
};

/**
  * Port B GPIO structure instance.
  */   
static const GPIO_t GPIOB =
{
  &DDRB,
  &PORTB,
  &PINB
};

/* End of drivers_peripheral_gpio_def defgroup */
/** @}
  */


/* End of drivers_peripheral_gpio defgroup */
/** @}
  */


/* End of drivers_peripheral defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
