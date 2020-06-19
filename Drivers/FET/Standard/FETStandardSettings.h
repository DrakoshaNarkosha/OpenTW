/**
  ******************************************************************************
  * @file    FETStandardSettings.h
  * @brief   Settings for the standard FET module
  * @version 1.0.0
  *
  * @page fet_standard_settings  Standard FET driver settings
  *
  * @section fet_standard_settings_description  Description
  *   GPIO settings for standard FET module are present here. This is platform-
  *   related file, so content and options may be changed from platform to 
  *   platform. Only port and pin settings are present here, all other GPIO 
  *   settings must be hardcoded inside FETStandardInterface.c file.
  *
  *
  * @section fet_standard_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef FET_STANDARD_SETTINGS_H
#define FET_STANDARD_SETTINGS_H

#include "Pinout.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_fet  FET
  * @brief      FET drivers 
  * @{
  */


/** @ingroup    drivers_fet
  * @addtogroup drivers_fet_standard  Standard
  * @brief      Standard FET handler 
  * @details    More information on page @ref fet_standard
  * @{
  */


/** @ingroup    drivers_fet_standard
  * @defgroup   drivers_fet_standard_settings  Settings
  * @brief      Standard FET module settings
  * @details    More information on page @ref fet_standard_settings
  * @{
  */

#define FET_NEGATIVE_GPIO_PORT         PORT_FET_NEGATIVE_SDA    /*!< GPIO port for negative FET. */
#define FET_NEGATIVE_GPIO_PIN          PIN_FET_NEGATIVE_SDA     /*!< GPIO pin for negative FET. */

#define FET_POSITIVE_GPIO_PORT         PORT_FET_POSITIVE_SCL    /*!< GPIO port for positive FET. */
#define FET_POSITIVE_GPIO_PIN          PIN_FET_POSITIVE_SCL     /*!< GPIO pin for positive FET. */

/* End of drivers_fet_standard_settings defgroup */
/** @}
  */


/* End of drivers_fet_standard defgroup */
/** @}
  */


/* End of drivers_fet defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
