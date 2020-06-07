/**
  ******************************************************************************
  * @file    GPIOTypes.h
  * @brief   Types for GPIO library
  * @version 1.0.0
  *
  * @page driver_peripheral_gpio_types  Types for GPIO library
  *
  * @subsection Description
  *   Types for GPIO driver library.
  *
  * @subsection Changelog
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
  * @addtogroup GPIO
  * @brief      GPIO driver
  * @details    More information on page @ref driver_peripheral_gpio  
  * @{
  */


/** @ingroup    GPIO
  * @defgroup   GPIO_Types
  * @brief      Types for GPIO driver
  * @details    More information on page @ref driver_peripheral_gpio_types
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

/** @}
  * End of GPIO_Types defgroup.
  */


/** @}
  * End of GPIO defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */
 
#endif
