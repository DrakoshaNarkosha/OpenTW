/**
  ******************************************************************************
  * @file    MagazineInterface.h
  * @brief   Interface for the Magazine module (header)
  * @version 1.0.0
  *
  * @page magazine_interface  Magazine interface
  *
  * @section magazine_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with magazine. This module must implement initialization and 
  *   magazine GPIO read function for proper functioning.
  *
  *   @note Low logic level on magazine GPIO line means, that magazine is
  *         present, so read function must return true. For this reason input
  *         signal from GPIO line must be inverted.
  *
  *
  * @section magazine_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef MAGAZINE_INTERFACE_H
#define MAGAZINE_INTERFACE_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_magazine  Magazine
  * @brief      Magazine handler 
  * @details    More information on page @ref magazine
  * @{
  */


/** @ingroup    driver_magazine
  * @defgroup   driver_magazine_interface  Interface
  * @brief      Magazine module interface
  * @details    More information on page @ref magazine_interface  
  * @{
  */

/** Initialize magazine hardware, based on settings inside the MagazineSettings.h file.
  *
  * @return None.
  */
void magazineIfInit(void);


/** Read state of the magazine.
  *
  * @retval false  Magazine is not present.
  * @retval true   Magazine is present.
  */
bool magazineIfRead(void);

/* End of driver_magazine_interface defgroup */
/** @}
  */


/* End of driver_magazine defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
