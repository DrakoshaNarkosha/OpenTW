/**
  ******************************************************************************
  * @file    FETStandardSettings.h
  * @brief   Settings for standard FET module
  * @version 1.0.0
  *
  * @page driver_fet_standard_settings  Standard FET settings
  *
  * @subsection Description
  *   GPIO settings for standard FET module are present here. This is platform-
  *   related file, so content and options may be changed from platform to 
  *   platform. Only port and pin settings are present here, all other GPIO 
  *   settings must be hardcoded inside FETStandardInterface.c file.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef FET_STANDARD_SETTINGS_H
#define FET_STANDARD_SETTINGS_H

#include "Pinout.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup FET
  * @brief      FET drivers 
  * @{
  */


/** @ingroup    FET
  * @addtogroup FET_Standard
  * @brief      Standard FET driver
  * @details    More information on page @ref driver_fet_standard
  * @{
  */


/** @ingroup    FET_Standard
  * @defgroup   FET_Standard_Settings
  * @brief      Settings for standard FET module
  * @details    More information on page @ref driver_fet_standard_settings
  * @{
  */

#define FET_NEGATIVE_GPIO_PORT         PORT_FET_NEGATIVE_SDA         /*!< GPIO port for negative FET. */
#define FET_NEGATIVE_GPIO_PIN          PIN_FET_NEGATIVE_SDA          /*!< GPIO pin for negative FET. */

#define FET_POSITIVE_GPIO_PORT         PORT_FET_POSITIVE_SCL         /*!< GPIO port for positive FET. */
#define FET_POSITIVE_GPIO_PIN          PIN_FET_POSITIVE_SCL          /*!< GPIO pin for positive FET. */

/* End of FET_Standard_Settings defgroup */
/** @}
  */


/* End of FET_Standard defgroup */
/** @}
  */


/* End of FET defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
