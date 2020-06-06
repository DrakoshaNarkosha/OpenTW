/**
  ******************************************************************************
  * @file    JumpersSettings.h
  * @brief   Settings for Jumpers module
  * @version 1.0.0
  *
  * @page driver_jumpers_settings  Jumpers driver settings
  *
  * @subsection Description
  *   GPIO settings for Jumpers module are present here. This is platform-
  *   related file, so content and options may be changed from platform to 
  *   platform. Only port and pin settings are present here, all other GPIO 
  *   settings must be hardcoded inside JumpersInterface.c file.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef JUMPERS_SETTINGS_H
#define JUMPERS_SETTINGS_H

#include "Pinout.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Jumpers
  * @brief      Jumpers handler 
  * @details    More information on page @ref driver_jumpers  
  * @{
  */


/** @ingroup    Jumpers
  * @defgroup   Jumpers_Settings
  * @brief      Settings for Jumpers module
  * @details    More information on page @ref driver_jumpers_settings
  * @{
  */

#define JP1_GPIO_PORT         PORT_JUMPER_1         /*!< GPIO port for jumper 1. */
#define JP1_GPIO_PIN          PIN_JUMPER_1          /*!< GPIO pin for jumper 1. */

#define JP2_GPIO_PORT         PORT_JUMPER_2         /*!< GPIO port for jumper 2. */
#define JP2_GPIO_PIN          PIN_JUMPER_2          /*!< GPIO pin for jumper 2. */

/** @}
  * End of Jumpers_Settings defgroup.
  */


/** @}
  * End of Jumpers defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
