/**
  ******************************************************************************
  * @file    GPIOTypes.h
  * @brief   Types for the GPIO driver for 8-bit AVR MCUs
  * @version 1.0.0
  *
  * @page gpio_types  GPIO types
  *
  * @section gpio_types_description  Description
  *   Types for the GPIO driver library.
  *
  *
  * @section gpio_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "iotn84a.h"


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
  * @defgroup   drivers_peripheral_gpio_types  Types
  * @brief      GPIO (General-Purpose Input/Output) driver types
  * @details    More information on page @ref gpio_types  
  * @{
  */

/**
  * GPIO mode.
  */
typedef enum
{
  GPIO_MODE_INPUT         = 0x00,   /*!< GPIO mode input. */
  GPIO_MODE_OUTPUT        = 0x01,   /*!< GPIO mode output. */
}GPIOMode_t;

/**
  * GPIO pull up settings.
  */
typedef enum
{
  GPIO_PULL_UP_DISABLE    = 0x00,   /*!< GPIO pull up disable. */
  GPIO_PULL_UP_ENABLE     = 0x01,   /*!< GPIO pull up enable. */
}GPIOPullUp_t;

/**
  * GPIO pin.
  */
typedef enum
{
  GPIO_PIN_0              = 0x01,   /*!< GPIO pin 0. */
  GPIO_PIN_1              = 0x02,   /*!< GPIO pin 1. */
  GPIO_PIN_2              = 0x04,   /*!< GPIO pin 2. */
  GPIO_PIN_3              = 0x08,   /*!< GPIO pin 3. */
  GPIO_PIN_4              = 0x10,   /*!< GPIO pin 4. */
  GPIO_PIN_5              = 0x20,   /*!< GPIO pin 5. */
  GPIO_PIN_6              = 0x40,   /*!< GPIO pin 6. */
  GPIO_PIN_7              = 0x80,   /*!< GPIO pin 7. */
}GPIOPin_t;


/**
  * GPIO initialization structure.
  */   
typedef struct 
{
  GPIOMode_t              mode;     /*!< GPIO mode. */
  GPIOPullUp_t            pullUp;   /*!< GPIO pull up settings. */
  GPIOPin_t               pin;      /*!< GPIO pin. */
}GPIOInit_t;


/**
  * GPIO structure with control registers addresses.
  */   
typedef struct
{
  volatile uint8_t*       DDR;    /*!< DDR (mode) register (DDRA, DDRB, DDRC, etc). */
  volatile uint8_t*       PORT;   /*!< PORT (pull up settings for input mode and logic level for output mode) register (PORTA, PORTB, PORTC, etc). */
  volatile uint8_t*       PIN;    /*!< PIN (pin state) register (PINA, PINB, PINC, etc). */
}GPIO_t;

/* End of drivers_peripheral_gpio_types defgroup */
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
