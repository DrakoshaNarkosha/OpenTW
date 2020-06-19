/**
  ******************************************************************************
  * @file    TriggerSettings.h
  * @brief   Settings for Trigger driver
  * @version 1.1.0
  *
  * @page trigger_settings  Trigger settings
  *
  * @section trigger_settings_description  Description
  *   GPIO settings for Trigger module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside TriggerInterface.c file.
  *
  *
  * @section trigger_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added PCI_LINE setting.
  ******************************************************************************
  */


#ifndef TRIGGER_SETTINGS_H
#define TRIGGER_SETTINGS_H

#include "Pinout.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_trigger  Trigger
  * @brief      Fire trigger handler
  * @details    More information on page @ref trigger  
  * @{
  */


/** @ingroup    drivers_trigger
  * @defgroup   drivers_trigger_settings  Settings
  * @brief      Fire trigger module settings
  * @details    More information on page @ref trigger_settings
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_TRIGGER         /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_TRIGGER          /*!< GPIO pin. */
#define PCI_LINE          PCI_LINE_SIGNAL_TRIGGER     /*!< PCI line. */

/* End of drivers_trigger_settings defgroup */
/** @}
  */


/* End of drivers_trigger defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
