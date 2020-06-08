/**
  ******************************************************************************
  * @file    ShootingModeSettings.h
  * @brief   Settings for Shooting Mode module
  * @version 1.0.0
  *
  * @page driver_shooting_mode_settings  Shooting mode driver settings
  *
  * @subsection Description
  *   GPIO and EEPROM settings for the Shooting Mode module are present here. 
  *   This is platform-related file, so content and options may be changed from
  *   platform to platform. Only port and pin settings are present here, all 
  *   other GPIO settings must be hardcoded inside ShootingModeInterface.c file.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.  
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_SETTINGS_H
#define SHOOTING_MODE_SETTINGS_H

#include "Pinout.h"
#include "Addresses.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref driver_shooting_mode  
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Shooting_Mode_Settings
  * @brief      Settings for Shooting Mode module
  * @details    More information on page @ref driver_shooting_mode_settings
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_MODE    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MODE     /*!< GPIO pin. */

#define EEPROM_ADDR       ADDR_SHOOTING_MODE  /*!< EEPROM address to store aito shooting mode. */

/* End of Shooting_Mode_Settings defgroup */
/** @}
  */


/* End of Shooting_Mode defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
