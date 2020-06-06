/**
  ******************************************************************************
  * @file    TriggerSettings.h
  * @brief   Settings for Trigger module
  * @version 1.0.0
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
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @addtogroup Trigger
  * @brief      Magazine handler 
  * @{
  */


/** @ingroup    Trigger
  * @defgroup   Trigger_Settings
  * @brief      Settings for Trigger module
  * @{
  */

#define GPIO_MODE         MODE_SIGNAL_TRIGGER    /*!< GPIO mode. */
#define GPIO_PULL         PULL_SIGNAL_TRIGGER    /*!< GPIO pull settings. */
#define GPIO_PORT         PORT_SIGNAL_TRIGGER    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_TRIGGER     /*!< GPIO pin. */

/** @}
  * End of Trigger_Settings defgroup.
  */


/** @}
  * End of Trigger defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
