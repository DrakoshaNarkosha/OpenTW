/**
  ******************************************************************************
  * @file    BatteryMeasure.h
  * @brief   Battery Measure module (header)
  * @version 1.0.0
  *
  * @page battery_measure  Battery Measure driver
  *
  * @section battery_measure_description  Description
  *   Current module performs battery measure and check current state according
  *   to settings values (@ref driver_battery_measure_settings_voltage). There
  *   are three possible battery states:
  *     1. @ref BATTERY_STATE_STANDARD_FET - Standard FET module is connected, 
  *        voltage for 3 Li-Po cell is OK.
  *     2. BATTERY_STATE_INTELLI_FET - Intelligent FET module is connected,
  *        voltage for intelligent FET source is OK.
  *     3. BATTERY_STATE_BAD_VOLTAGE - Bad voltage value for standard or
  *        intelligent FET.
  *   @note All the critical values 
  *         (@ref driver_battery_measure_settings_voltage) must be calculated 
  *         for used ADC resolution settings.
  *   
  *   Current driver consist of settings file, hardware-related interface, types
  *   file and application driver (current file). More information about modules
  *   may be found in next pages:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>MODULE</th>
  *       <th>PAGE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>Types</th>
  *		    <td>@ref battery_measure_types</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Settings</th>
  *		    <td>@ref battery_measure_settings</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Interface</th>
  *		    <td>@ref battery_measure_interface</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Driver</th>
  *		    <td>@ref battery_measure</td>
  *     </tr>
  *   </table>
  *
  *
  * @section battery_measure_usage  Usage
  *   1. Call batteryMeasureInit().
  *   2. Call batteryMeasureStart() to start measurement.
  *   3. Check if measurement is ready with @ref batteryMeasureIsReady() 
  *      function.
  *   4. Read current battery state with @ref batteryMeasureState() function.
  *   5. Repeat actions, starting from point 3 or stop measurement wtith 
  *      @ref batteryMeasureStop() function.
  *
  *   @note For reprogram, call shootingModeChange() to switch between full
  *         auto and 3-burst modes. This function also reprogram memory.  
  *
  * @section battery_measure_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef BATTERY_MEASURE_H
#define BATTERY_MEASURE_H

#include "BatteryMeasureTypes.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_battery_measure  Battery measure
  * @brief      Battery Measure handler 
  * @details    More information on page @ref battery_measure 
  * @{
  */


/** @ingroup    driver_battery_measure
  * @defgroup   driver_battery_measure_driver  Driver
  * @brief      Battery Measure driver
  * @details    More information on page @ref battery_measure
  * @{
  */

/** Initialize battery measurement hardware.
  *
  * @return None.
  */
void batteryMeasureInit(void);


/** Start measurement process.
  *
  * @return None.
  */
void batteryMeasureStart(void);

/** Stop measurement process.
  *
  * @return None.
  */
void batteryMeasureStop(void);


/** Check, if last measurement is ready.
  *
  * @retval false  Measurement is not ready.
  * @retval true   Measurement is ready.
  */
bool batteryMeasureIsReady(void);


/** Get current battery state, based on last ADC measurement.
  *
  * Call this function only after @ref batteryMeasureIsReady() function would
  * return true.
  *
  * @retval  BATTERY_STATE_STANDARD_FET  Standard FET is connected, voltage level for 3-cells Li-Po battery is OK.
  * @retval  BATTERY_STATE_INTELLI_FET   Intelligent FET is connected, voltage level is OK.
  * @retval  BATTERY_STATE_BAD_VOLTAGE   Bad voltage level for standard or intelligent FET module.
  */
BatteryMeasureState_t batteryMeasureState(void);

/* End of driver_battery_measure_driver defgroup */
/** @}
  */


/* End of driver_battery_measure defgroup */
/** @}
  */
  

/* End of drivers defgroup */  
/** @}
  */

#endif
