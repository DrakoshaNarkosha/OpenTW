/**
  ******************************************************************************
  * @file    MagazineSettings.h
  * @brief   Settings for the Magazine module
  * @version 1.0.0
  *
  * @page magazine_settings  Magazine settings
  *
  * @section magazine_settings_description  Description
  *   GPIO settings for Magazine module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside MagazineInterface.c file.
  *
  *
  * @section magazine_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added PCI_LINE setting.  
  ******************************************************************************
  */


#ifndef MAGAZINE_SETTINGS_H
#define MAGAZINE_SETTINGS_H

#include "Pinout.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_magazine  Magazine
  * @brief      Magazine handler 
  * @details    More information on page @ref magazine
  * @{
  */


/** @ingroup    driver_magazine
  * @defgroup   driver_magazine_settings  Settings
  * @brief      Magazine module settings
  * @details    More information on page @ref magazine_settings
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_MAGAZINE      /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MAGAZINE       /*!< GPIO pin. */
#define PCI_LINE          PCI_LINE_SIGNAL_MAGAZINE  /*!< PCI line. */

/* End of driver_magazine_settings defgroup */
/** @}
  */


/* End of driver_magazine defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
