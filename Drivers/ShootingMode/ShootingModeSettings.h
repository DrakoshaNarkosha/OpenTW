/**
  ******************************************************************************
  * @file    ShootingModeSettings.h
  * @brief   Settings for Shooting Mode module
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
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Shooting_Mode_Settings
  * @brief      Settings for Shooting Mode module
  * @{
  */

#define GPIO_MODE         MODE_SIGNAL_MODE    /*!< GPIO mode. */
#define GPIO_PULL         PULL_SIGNAL_MODE    /*!< GPIO pull settings. */
#define GPIO_PORT         PORT_SIGNAL_MODE    /*!< GPIO port. */
#define GPIO_PIN          PIN_SIGNAL_MODE     /*!< GPIO pin. */

#define EEPROM_ADDR       ADDR_SHOOTING_MODE  /*!< EEPROM address to store aito shooting mode. */

/** @}
  * End of Shooting_Mode_Settings defgroup.
  */


/** @}
  * End of Shooting_Mode defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
