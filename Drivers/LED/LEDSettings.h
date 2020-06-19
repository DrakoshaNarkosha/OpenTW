/**
  ******************************************************************************
  * @file    LEDSettings.h
  * @brief   Settings for the LED module
  * @version 1.0.0
  *
  * @page led_settings  LED settings
  *
  * @section led_settings_description  Description
  *   GPIO settings for LED module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside LEDInterface.c file.
  *
  *
  * @section led_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef LED_SETTINGS_H
#define LED_SETTINGS_H

#include "Pinout.h"


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


/** @ingroup    drivers_led
  * @defgroup   drivers_led_settings  Settings
  * @brief      LED module settings
  * @details    More information on page @ref led_settings
  * @{
  */

#define GPIO_PORT         PORT_LED      /*!< GPIO port. */
#define GPIO_PIN          PIN_LED       /*!< GPIO pin. */

/* End of drivers_led_settings defgroup */
/** @}
  */


/* End of drivers_led defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
