/**
  ******************************************************************************
  * @file    FETStandard.h
  * @brief   Standard FET module (header)
  * @version 1.0.0
  *
  * @page driver_fet_standard  Magazine driver
  *
  * @subsection Description
  *   Current module implements access to standard FET GPIO lines for turning
  *   corresponding FET on or off.
  *
  *   @warning Current driver doesn`t have any check logic, so user MUST
  *            control FET states manually to avoid turning on both FETs.
  *            Turning on both FETs will destroy the device.
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
  *		  <td>@ref driver_fet_standard_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		  <td>@ref driver_fet_standard_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		  <td>@ref driver_fet_standard</td>
  *     </tr>
  *   </table>  
  *
  *
  * @subsection Usage
  *   1. Call fetStandardInit().
  *   2. Carefully use all other functions function.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef FET_STANDARD_H
#define FET_STANDARD_H


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
  * @defgroup   FET_Standard_Driver
  * @brief      Standard FET driver
  * @details    More information on page @ref driver_fet_standard
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

/* End of FET_Standard_Driver defgroup */
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
