/**
  ******************************************************************************
  * @file    ShooterStandardSettings.h
  * @brief   Settings for the Standard Shooter module
  * @version 1.0.0  
  *
  * @page shooter_standard_settings  Standard Shooter settings
  *
  * @section shooter_standard_settings_description  Description
  *   Settings for the Shooter driver. Different settings for Standard Shooter
  *   module are present here. 
  *   @warning Configurations in this file are very important,
  *            because any errors with timings may cause damage of the device.
  *
  *
  * @section shooter_standard_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTER_STANDARD_CONFIG_H
#define SHOOTER_STANDARD_CONFIG_H

/** @addtogroup shooter  Shooter
  * @brief      Shoot interface 
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter
  * @addtogroup shooter_standard  Standard
  * @brief      Standard shooter handle
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter_standard
  * @defgroup   shooter_standard_settings  Settings
  * @brief      Standard shooter settings
  * @details    More information on page @ref shooter_standard_settings
  * @{
  */

#define MAX_CYCLE_MS                150             /*!< Maximal possible time for one shoot. */
  
#define LIGHT_BARRIER_ON_US         500             /*!< Light barrier LED turn on delay. */

#define MOSFET_OFF_US               100             /*!< FET close time. */

#define BRAKE_MS                    100             /*!< Braking time. */

#define DELAY_US(us)                _delay_us(us)   /*!< Function for microseconds delay. */
#define DELAY_MS(ms)                _delay_ms(ms)   /*!< Function for milliseconds delay. */

/* End of shooter_standard_settings defgroup */
/** @}
  */


/* End of shooter_standard defgroup */
/** @}
  */


/* End of shooter defgroup */
/** @}
  */

#endif
