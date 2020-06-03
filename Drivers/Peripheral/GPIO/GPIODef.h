/**
  ******************************************************************************
  * @file    GPIODef.h
  * @brief   Structures with control registers for GPIO ports
  * @version 1.0.0
  *
  * Add instances of structures for each GPIO port to use it with GPIO library.
  * GPIO control register addresses must be taken with "&" operation to defines
  * in device-related file. For example, for port A structure will be next:<br>
  * @code{.c}
  * volatile static const GPIO_t GPIOA =
  * {
  *   &DDRA,
  *   &PORTA,
  *   &PINA
  * };
  * @endcode
  *
  * @note Structure instances MUST be volatile static const.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
  ******************************************************************************
  */

#ifndef GPIO_DEF_H
#define GPIO_DEF_H

#include "GPIOTypes.h"


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
  * @{
  */


/** @ingroup    GPIO
  * @defgroup   GPIO_Def
  * @brief      Global structures for GPIO driver
  * @{
  */

/**
  * Port A GPIO structure instance.
  */   
volatile static const GPIO_t GPIOA =
{
  &DDRA,
  &PORTA,
  &PINA
};

/**
  * Port B GPIO structure instance.
  */   
volatile static const GPIO_t GPIOB =
{
  &DDRB,
  &PORTB,
  &PINB
};

/** @}
  * End of GPIO_Def defgroup.
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
