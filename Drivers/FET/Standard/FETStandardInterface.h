/**
  ******************************************************************************
  * @file    FETStandardInterface.h
  * @brief   Interface for standard FET module (header)
  * @version 1.0.0
  *
  * @page driver_fet_standard_interface  Normal  driver interface
  *
  * @subsection Description
  *   Current module implements platform-related hardware functions for 
  *   operations with magazine. This module must implement initialization and 
  *   FET GPIO set/reset functions for proper functioning.
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef FET_STANDARD_INTERFACE_H
#define FET_STANDARD_INTERFACE_H


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup FET
  * @brief      FET drivers 
  * @{
  */


/** @ingroup    FET
  * @addtogroup FET_Standard
  * @brief      Standard FET driver
  * @details    More information on page @ref driver_fet_standard
  * @{
  */


/** @ingroup    FET_Standard
  * @defgroup   FET_Standard_Interface
  * @brief      Interface for standard FET module
  * @details    More information on page @ref driver_fet_standard_interface
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

/* End of FET_Standard_Interface defgroup */
/** @}
  */


/* End of FET_Standard defgroup */
/** @}
  */


/* End of FET defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
