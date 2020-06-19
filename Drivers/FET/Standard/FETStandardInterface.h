/**
  ******************************************************************************
  * @file    FETStandardInterface.h
  * @brief   Interface for FET Standard module (header)
  * @version 1.0.0
  *
  * @page fet_standard_interface  Standard FET driver interface
  *
  * @section fet_standard_interface_desccription  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with magazine. This module must implement initialization and 
  *   FET GPIO set/reset functions for proper functioning.
  *
  *
  * @section fet_standard_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef FET_STANDARD_INTERFACE_H
#define FET_STANDARD_INTERFACE_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_fet  FET
  * @brief      FET drivers 
  * @{
  */


/** @ingroup    drivers_fet
  * @addtogroup drivers_fet_standard  Standard
  * @brief      Standard FET handler 
  * @details    More information on page @ref fet_standard
  * @{
  */


/** @ingroup    drivers_fet_standard
  * @defgroup   drivers_fet_standard_interface  Interface
  * @brief      FET standard interface
  * @details    More information on page @ref fet_standard_interface
  * @{
  */

/** Initialize standard FET hardware, based on settings inside the FETStandardSettings.h file.
  *
  * @return None.
  */
void fetStandardIfInit(void);


/** Set low logic level on the corresponding FET line.
  *
  * @param[in]     port  GPIO port.
  * @param[in]     pin   GPIO pin.
  *
  * @return None.
  */
void fetStandardIfReset(const void* port, uint8_t pin);

/** Set high logic level on the corresponding FET line.
  *
  * @param[in]     port  GPIO port.
  * @param[in]     pin   GPIO pin.
  *
  * @return None.
  */
void fetStandardIfSet(const void* port, uint8_t pin);

/* End of drivers_fet_standard_interface defgroup */
/** @}
  */


/* End of drivers_fet_standard defgroup */
/** @}
  */


/* End of drivers_fet defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
