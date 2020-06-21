/**
  ******************************************************************************
  * @file    FETStandard.h
  * @brief   Standard FET module (header)
  * @version 1.1.0
  *
  * @page fet_standard  Standard FET driver
  *
  * @section fet_standard_description  Description
  *   Current module implements access to standard FET GPIO lines for turning
  *   corresponding FET on or off.
  *
  *   @warning Current driver doesn`t have any check logic, so user MUST control
  *            FET states manually to avoid turning on both FETs. Turning on 
  *            both FETs will destroy the device.
  *
  *   Current driver consist of settings file, hardware-related interface and
  *   application driver (current file). More information about modules may be
  *   found in next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Settings</th>
  *		  <td>@ref fet_standard_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref fet_standard_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref fet_standard</td>
  *     </tr>
  *   </table>  
  *
  *
  * @section fet_standard_usage  Usage
  *   1. Call fetStandardInit().
  *   2. Carefully use all other functions.
  *
  *
  * @section fet_standard_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added FET turning off in initialization function.
  ******************************************************************************
  */


#ifndef FET_STANDARD_H
#define FET_STANDARD_H


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
  * @defgroup   drivers_fet_standard_driver  Driver
  * @brief      Standard FET driver
  * @details    More information on page @ref fet_standard
  * @{
  */

/** Initialize corresponding FET lines.
  *
  * @return None.
  */
void fetStandardInit(void);


/** Turn negative FET line off.
  *
  * @return None.
  */
void fetStandardNegativeOff(void);

/** Turn negative FET line on.
  *
  * @return None.
  */
void fetStandardNegativeOn(void);


/** Turn positive FET line off.
  *
  * @return None.
  */
void fetStandardPositiveOff(void);

/** Turn positive FET line on.
  *
  * @return None.
  */
void fetStandardPositiveOn(void);

/* End of drivers_fet_standard_driver defgroup */
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
