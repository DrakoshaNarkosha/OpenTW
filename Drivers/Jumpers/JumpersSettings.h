/**
  ******************************************************************************
  * @file    JumpersSettings.h
  * @brief   Settings for the Jumpers module
  * @version 1.0.0
  *
  * @page jumpers_settings  Jumpers settings
  *
  * @section jumpers_settings_description  Description
  *   GPIO settings for Jumpers module are present here. This is platform-
  *   related file, so content and options may be changed from platform to 
  *   platform. Only port and pin settings are present here, all other GPIO 
  *   settings must be hardcoded inside JumpersInterface.c file.
  *
  *
  * @section jumpers_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef JUMPERS_SETTINGS_H
#define JUMPERS_SETTINGS_H

#include "Pinout.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_jumpers  Jumpers
  * @brief      Jumpers handler 
  * @details    More information on page @ref jumpers
  * @{
  */


/** @ingroup    drivers_jumpers
  * @defgroup   drivers_jumpers_settings  Settings
  * @brief      Jumpers module settings
  * @details    More information on page @ref jumpers_settings
  * @{
  */

#define JP1_GPIO_PORT         PORT_JUMPER_1   /*!< GPIO port for jumper 1. */
#define JP1_GPIO_PIN          PIN_JUMPER_1    /*!< GPIO pin for jumper 1. */

#define JP2_GPIO_PORT         PORT_JUMPER_2   /*!< GPIO port for jumper 2. */
#define JP2_GPIO_PIN          PIN_JUMPER_2    /*!< GPIO pin for jumper 2. */

/* End of drivers_jumpers_settings defgroup */
/** @}
  */


/* End of drivers_jumpers defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
