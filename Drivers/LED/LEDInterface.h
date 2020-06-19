/**
  ******************************************************************************
  * @file    LEDInterface.h
  * @brief   Interface for the LED module (header)
  * @version 1.0.0
  *
  * @page led_interface  LED interface
  *
  * @section led_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with the LED. This module must implement initialization and 
  *   LED state functions for proper functioning.
  *
  *
  * @section led_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_led  LED
  * @brief      LED handler 
  * @details    More information on page @ref led
  * @{
  */


/** @ingroup    driver_led
  * @defgroup   driver_led_interface  Interface
  * @brief      LED module interface
  * @details    More information on page @ref led_interface  
  * @{
  */

/** Initialize LED hardware, based on settings inside the LEDSettings.h file.
  *
  * @return None.
  */
void ledIfInit(void);


/** Turn LED on.
  *
  * @return None.
  */
void ledIfOn(void);

/** Turn LED off.
  *
  * @return None.
  */
void ledIfOff(void);

/* End of driver_led_interface defgroup */
/** @}
  */


/* End of driver_led defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
