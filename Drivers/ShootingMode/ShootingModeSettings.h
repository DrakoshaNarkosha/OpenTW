/**
  ******************************************************************************
  * @file    ShootingModeSettings.h
  * @brief   Settings for the Shooting Mode module
  * @version 1.1.0
  *
  * @page shooting_mode_settings  Shooting Mode settings
  *
  * @section shooting_mode_settings_description  Description
  *   GPIO and EEPROM settings for the Shooting Mode module are present here.
  *   This is platform-related file, so content and options may be changed from
  *   platform to platform. Only port and pin settings are present here, all
  *   other GPIO settings must be hardcoded inside ShootingModeInterface.c file.
  *
  *
  * @section shooting_mode_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added PCI_LINE setting.  
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_SETTINGS_H
#define SHOOTING_MODE_SETTINGS_H

#include "Pinout.h"
#include "Addresses.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_shooting_mode  Shooting mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref shooting_mode  
  * @{
  */


/** @ingroup    drivers_shooting_mode
  * @defgroup   drivers_shooting_mode_settings  Settings
  * @brief      Shooting Mode module settings
  * @details    More information on page @ref shooting_mode_settings
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_MODE      /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MODE       /*!< GPIO pin. */
#define PCI_LINE          PCI_LINE_SIGNAL_MODE  /*!< PCI line. */

#define EEPROM_ADDR       ADDR_SHOOTING_MODE    /*!< EEPROM address to store aito shooting mode. */

/* End of drivers_shooting_mode_settings defgroup */
/** @}
  */


/* End of driver_shooting_mode defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
