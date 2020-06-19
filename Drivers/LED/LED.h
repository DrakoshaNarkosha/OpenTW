/**
  ******************************************************************************
  * @file    LED.h
  * @brief   LED driver (header)
  * @version 1.0.0
  *
  * @page led  LED driver
  *
  * @section led_description  Description
  *   Current module implements interrupt-based checking of LED presence.
  *
  *   Current driver consist of settings file, hardware-related interface and
  *   application driver (current file). More information about modules may be
  *   found in next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Settings</th>
  *		    <td>@ref led_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		    <td>@ref led_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		    <td>@ref led</td>
  *     </tr>
  *   </table>
  *
  *
  * @section led_usage  Usage
  *   1. Call ledInit().
  *   2. Use all other functions.
  *
  *
  * @section led_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef LED_H
#define LED_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_led  LED
  * @brief      LED handler 
  * @details    More information on page @ref led
  * @{
  */


/** @ingroup    driver_led
  * @defgroup   driver_led_driver  Driver
  * @brief      LED driver
  * @details    More information on page @ref led
  * @{
  */

/** Initialize related to the LED module peripheral modules.
  *
  * @return None.
  */
void ledInit(void);


/** Turn LED on.
  *
  * @return None.
  */
void ledOn(void);

/** Turn LED off.
  *
  * @return None.
  */
void ledOff(void);

/* End of driver_led_driver defgroup */
/** @}
  */


/* End of driver_led defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
