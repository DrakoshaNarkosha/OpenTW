/**
  ******************************************************************************
  * @file    GPIO.h
  * @brief   GPIO (General Purpose Input Output) driver for 8-bit AVR MCU 
  *          (header)
  * @version 1.0.0
  *
  * @page driver_peripheral_gpio  GPIO driver
  *
  * @subsection Description
  *   Low-level GPIO driver for 8-bit AVR MCU. This drivers is wrapper on MCU 
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
  *		  <td>@ref driver_peripheral_gpio_types</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Definitions</th>
  *		  <td>@ref driver_peripheral_gpio_def</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref driver_peripheral_gpio</td>
  *     </tr>
  *   </table>

  *
  * @subsection Usage
  *   1. Allocate structure instance, related to port in GPIODef.h file.
  *   2. Initialize GPIO pin using gpioInit() function or functions with 
  *      gpioSet prefix.
  *   3. Use all other functions with proper port and pin parameters. 
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
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
  * @details    More information on page @ref driver_peripheral_gpio
  * @{
  */


/** @ingroup    GPIO
  * @defgroup   GPIO_Driver
  * @brief      Global structures for GPIO driver
  * @details    More information on page @ref driver_peripheral_gpio
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

/* End of GPIO_Driver defgroup */
/** @}
  */


/* End of GPIO defgroup */
/** @}
  */


/* End of Peripheral defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
