/**
  ******************************************************************************
  * @file    MagazineSettings.h
  * @brief   Settings for Magazine module
  * @version 1.0.0
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
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @addtogroup Magazine
  * @brief      Magazine handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Magazine_Settings
  * @brief      Settings for Magazine module
  * @{
  */

#define GPIO_MODE         MODE_SIGNAL_MAGAZINE    /*!< GPIO mode. */
#define GPIO_PULL         PULL_SIGNAL_MAGAZINE    /*!< GPIO pull settings. */
#define GPIO_PORT         PORT_SIGNAL_MAGAZINE    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MAGAZINE     /*!< GPIO pin. */

/** @}
  * End of Magazine_Settings defgroup.
  */


/** @}
  * End of Magazine defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
