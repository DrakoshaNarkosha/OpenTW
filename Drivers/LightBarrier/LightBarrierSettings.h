/**
  ******************************************************************************
  * @file    LightBarrierSettings.h
  * @brief   Settings for the Light Barrier module
  * @version 1.0.0
  *
  * @page light_barrier_settings  Ligth barrier settings
  *
  * @section light_barrier_settings_description  Description
  *   GPIO settings for Ligth Barrier module are present here. This is platform-
  *   related file, so content and options may be changed from platform to
  *   platform. Only port and pin settings are present here, all other GPIO
  *   settings must be hardcoded inside LigthBarrierInterface.c file.
  *
  *
  * @section light_barrier_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef LIGHT_BARRIER_SETTINGS_H
#define LIGHT_BARRIER_SETTINGS_H

#include "Pinout.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_light_barrier  Light Barrier
  * @brief      Light Barrier handler 
  * @details    More information on page @ref light_barrier
  * @{
  */


/** @ingroup    driver_light_barrier
  * @defgroup   driver_light_barrier_settings  Settings
  * @brief      Ligth Barrier module settings
  * @details    More information on page @ref magazine_settings
  * @{
  */

#define LED_GPIO_PORT         PORT_LIGTH_BARIER_LED             /*!< GPIO ligth barrier LED port. */
#define LED_GPIO_PIN          PIN_LIGTH_BARIER_LED              /*!< GPIO ligth barrier LED pin. */

#define OPT_GPIO_PORT         PORT_SIGNAL_LIGTH_BARIER_OPT      /*!< GPIO ligth barrier photodiode port. */
#define OPT_GPIO_PIN          PIN_SIGNAL_LIGTH_BARIER_OPT       /*!< GPIO ligth barrier photodiode pin. */
#define OPT_PCI_LINE          PCI_LINE_SIGNAL_LIGTH_BARIER_OPT  /*!< GPIO ligth barrier PCI line. */

/* End of driver_light_barrier_settings defgroup */
/** @}
  */


/* End of driver_light_barrier defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
