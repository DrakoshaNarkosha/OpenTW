/**
  ******************************************************************************
  * @file    GPIO.h
  * @brief   GPIO (General Purpose Input Output) driver for 8-bit AVR MCU 
  *          (header)
  * @version 1.0.0
  *
  * Low-level GPIO driver for 8-bit AVR MCU. This drivers is wrapper on MCU 
  * registers to give more convenient access to GPIO peripheral registers.
  * Requires predefined global GPIO structures in GPIODef.h file for each
  * port.
  * 
  * Usage:<br>
  * 1) Allocate structure instance, related to port in GPIODef.h file.<br>
  * 2) Initialize GPIO pin using gpioInit() function or functions with 
  *    gpioSet prefix.<br>
  * 3) Use all other functions with proper port and pin parameters. 
  *
  * @note GPIO pin may be reconfigured in any time of program executing.
  *
  * Changelog:<br>
  * # Version 1.0.0<br>
  *   - Initial version.<br>  
  ******************************************************************************
  */


#ifndef GPIO_H
#define GPIO_H

#include "GPIODef.h"


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
  * @defgroup   GPIO_Driver
  * @brief      Global structures for GPIO driver
  * @{
  */

/** Initialize GPIO.
  *
  * Initialize GPIO peripheral with values in [init] parameter.
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     init  GPIO initialization structure.
  *
  * @note Several GPIO pins may be initialized at the same time, passed into
  *       pin field using "|" operator.
  *
  * @return None.
  */
void gpioInit(const volatile GPIO_t* port, const GPIOInit_t* init);


/** Set GPIO mode.
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     pin   GPIO destination pin.
  * @param[in]     mode  GPIO mode.
  *
  * @note Several GPIO pins may be initialized at the same time, passed into
  *       pin field using "|" operator.
  *
  * @return None.
  */
void gpioSetMode(const volatile GPIO_t* port, GPIOPin_t pin, GPIOMode_t mode);

/** Set GPIO pull up (enable or disable).
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     pin   GPIO destination pin.
  * @param[in]     mode  GPIO mode.
  *
  * @note Several GPIO pins may be initialized at the same time, passed into
  *       pin field using "|" operator.
  *
  * @warning Use this functions only for GPIO pins configured as input
  *          (GPIO_MODE_INPUT).
  *
  * @return None.
  */
void gpioSetPullUp(const volatile GPIO_t* port, GPIOPin_t pin, GPIOPullUp_t pullUp);


/** Set low logic level on selected GPIO pin.
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     pin   GPIO destination pin.
  *
  * @note Several GPIO pins may be reset at the same time, passed into pin 
  *       field using "|" operator.
  *
  * @warning Use this functions only for GPIO pins configured as output
  *          (GPIO_MODE_OUTPUT).
  *
  * @return None.
  */
void gpioPinReset(const volatile GPIO_t* port, GPIOPin_t pin);

/** Set high logic level on selected GPIO pin.
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     pin   GPIO destination pin.
  *
  * @note Several GPIO pins may be set at the same time, passed into pin 
  *       field using "|" operator.
  *
  * @warning Use this functions only for GPIO pins configured as output
  *          (GPIO_MODE_OUTPUT).
  *
  * @return None.
  */
void gpioPinSet(const volatile GPIO_t* port, GPIOPin_t pin);


/** Read logic level on selected GPIO pin.
  *
  * @param[in]     port  GPIO destination port (from GPIODef.h).
  * @param[in]     pin   GPIO destination pin.
  *
  * @note Several GPIO pins may be read at the same time, passed into pin
  *       field using "|" operator.
  *
  * @return None.
  */
bool gpioRead(const volatile GPIO_t* port, GPIOPin_t pin);

/** @}
  * End of GPIO_Driver defgroup.
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
