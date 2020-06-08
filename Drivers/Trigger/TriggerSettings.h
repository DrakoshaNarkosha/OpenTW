/**
  ******************************************************************************
  * @file    TriggerSettings.h
  * @brief   Settings for Trigger module
  * @version 1.0.0
  *
  * @page driver_trigger_settings  Trigger driver settings
  *
  * @subsection Description
  *   GPIO settings for Trigger module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside TriggerInterface.c file.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.  
  ******************************************************************************
  */


#ifndef TRIGGER_SETTINGS_H
#define TRIGGER_SETTINGS_H

#include "Pinout.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Trigger
  * @brief      Trigger handler 
  * @{
  */


/** @ingroup    Trigger
  * @defgroup   Trigger_Settings
  * @brief      Settings for Trigger module
  * @{
  */

#define GPIO_PORT         PORT_SIGNAL_TRIGGER    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_TRIGGER     /*!< GPIO pin. */

/** @}
  * End of Trigger_Settings defgroup.
  */


/** @}
  * End of Trigger defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
