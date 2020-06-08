/**
  ******************************************************************************
  * @file    MagazineSettings.h
  * @brief   Settings for Magazine module
  * @version 1.0.0
  *
  * @page driver_magazine_settings  Magazine driver settings
  *
  * @subsection Description
  *   GPIO settings for Magazine module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside MagazineInterface.c file.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef MAGAZINE_SETTINGS_H
#define MAGAZINE_SETTINGS_H

#include "Pinout.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Magazine
  * @brief      Magazine handler 
  * @details    More information on page @ref driver_magazine
  * @{
  */


/** @ingroup    Magazine
  * @defgroup   Magazine_Settings
  * @brief      Settings for Magazine module
  * @details    More information on page @ref driver_magazine_settings  
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_MAGAZINE    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MAGAZINE     /*!< GPIO pin. */

/* End of Magazine_Settings defgroup */
/** @}
  */


/* End of Magazine defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
