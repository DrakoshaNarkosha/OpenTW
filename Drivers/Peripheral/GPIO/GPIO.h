/**
  ******************************************************************************
  * @file    GPIO.h
  * @brief   GPIO (General-Purpose Input/Output) driver for 8-bit AVR MCUs 
  *          (header)
  * @version 1.0.0
  *
  * @page gpio  GPIO driver
  *
  * @section gpio_description  Description
  *   Low-level GPIO driver for 8-bit AVR MCUs. This drivers is wrapper on MCU 
  *   registers to give more convenient access to GPIO peripheral registers.
  *   Requires predefined global GPIO structures in GPIODef.h file for each
  *   port.
  *
  *   @note GPIO pin may be reconfigured in any time of program executing.
  * 
  *   Current driver consist of types file, definition file and application 
  *   driver (current file). More information about modules may be found in 
  *   next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Types</th>
  *		  <td>@ref gpio_types</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Definitions</th>
  *		  <td>@ref gpio_def</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref gpio</td>
  *     </tr>
  *   </table>

  *
  * @section gpio_usage  Usage
  *   1. Allocate structure instance, related to port in GPIODef.h file.
  *   2. Initialize GPIO pin using gpioInit() function or functions with 
  *      gpioSet prefix.
  *   3. Use all other functions with proper port and pin parameters. 
  *
  *
  * @section gpio_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef GPIO_H
#define GPIO_H

#include "GPIODef.h"


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
  * @addtogroup drivers_peripheral_gpio_driver  Driver
  * @brief      GPIO (General-Purpose Input/Output) driver
  * @details    More information on page @ref gpio
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
void gpioInit(const GPIO_t* port, const GPIOInit_t* init);


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
void gpioSetMode(const GPIO_t* port, GPIOPin_t pin, GPIOMode_t mode);

/** Set GPIO pull up (enable or disable).
  *
  * @param[in]     port    GPIO destination port (from GPIODef.h).
  * @param[in]     pin     GPIO destination pin.
  * @param[in]     pullUp  GPIO pull up mode.
  *
  * @note Several GPIO pins may be initialized at the same time, passed into
  *       pin field using "|" operator.
  *
  * @warning Use this functions only for GPIO pins configured as input
  *          (GPIO_MODE_INPUT).
  *
  * @return None.
  */
void gpioSetPullUp(const GPIO_t* port, GPIOPin_t pin, GPIOPullUp_t pullUp);


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
void gpioPinReset(const GPIO_t* port, GPIOPin_t pin);

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
void gpioPinSet(const GPIO_t* port, GPIOPin_t pin);


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
bool gpioRead(const GPIO_t* port, GPIOPin_t pin);

/* End of drivers_peripheral_gpio_driver defgroup */
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
