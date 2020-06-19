/**
  ******************************************************************************
  * @file    BatteryMeasureSettings.h
  * @brief   Settings for the Battery Measure module
  * @version 1.0.0
  *
  * @page battery_measure_settings  Battery measure settings
  *
  * @section battery_measure_settings_description  Description
  *   ADC settings for Battery Measure module are present here. This is
  *   platform-related file, so content and options may be changed from platform
  *   to platform. Only ADC and critical voltage settings are present here, all 
  *   other settings must be hardcoded inside BatteryMeasureInterface.c file.
  *   @note All the critical values
  *         (@ref driver_battery_measure_settings_voltage) must be calculated
  *         for used ADC resolution settings.
  *
  *
  * @section battery_measure_settings_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef BATTERY_MEASURE_SETTINGS_H
#define BATTERY_MEASURE_SETTINGS_H


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
  * @defgroup   driver_battery_measure_settings  Settings
  * @brief      Battery Measure module settings
  * @details    More information on page @ref battery_measure_settings
  * @{
  */

/** @ingroup    driver_battery_measure_settings
  * @defgroup   driver_battery_measure_settings_adc  ADC
  * @brief      Battery Measure ADC module settings
  * @details    More information on page @ref battery_measure_settings
  * @{
  */

#define BATTERY_MEASURE_ADC_REFERENCE                 ADC_REFERENCE_VCC               /*!< ADC reference voltage source [Vcc]. */
#define BATTERY_MEASURE_ADC_AUTO_TRIGGER              ADC_AUTO_TRIGGER_FREE_RUNNING   /*!< ADC auto trigger settings    [None]. */
#define BATTERY_MEASURE_ADC_BIPOLAR                   ADC_BIPOLAR_DISABLE             /*!< ADC bipolar mode             [Disabled]. */
#define BATTERY_MEASURE_ADC_INTERRUPT                 ADC_INTERRUPT_ENABLE            /*!< ADC interrupt settings       [Enabled]. */
#define BATTERY_MEASURE_ADC_PRESCALER                 ADC_PRESCALER_16                /*!< ADC clock prescaller         [16]. */
#define BATTERY_MEASURE_ADC_CHANNEL                   ADC_CHANNEL_PA7                 /*!< ADC channel                  [PA7].*/

/* End of driver_battery_measure_settings_adc defgroup */
/** @}
  */

/** @ingroup    driver_battery_measure_settings
  * @defgroup   driver_battery_measure_settings_voltage  Voltage
  * @brief      Battery Measure voltage settings
  * @details    More information on page @ref battery_measure_settings
  * @{
  */

/** Minimal standard FET power supply voltage, converted to ADC value. Input parameters are next: 
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>PARAMETER</th>
  *       <th>SYMBOL</th>
  *       <th>VALUE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>1 LSB</th>
  *       <th>A</th>
  *		    <td>69.14 mV (8-bit mode)</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Minimal Li-Po cell voltage</th>
  *       <th>B</th>
  *		    <td>3600 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal ADC value</th>
  *       <th>C</th>
  *		    <td>3300 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal measured value</th>
  *       <th>D</th>
  *		    <td>21000 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Number of cells</th>
  *       <th>E</th>
  *		    <td>3</td>
  *     </tr>
  *   </table> 
  * Calculation formula [((B * E / A) * D) / C)].<br>
  * 3600 * 3 / 69.14 * 21000 / 3300 = 99
  */
#define BATTERY_MEASURE_VOLTAGE_MIN_NORMAL_FET        99

/** Maximal standard FET power supply voltage, converted to ADC value. Input parameters are next:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>PARAMETER</th>
  *       <th>SYMBOL</th>
  *       <th>VALUE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>1 LSB</th>
  *       <th>A</th>
  *		    <td>69.14 mV (8-bit mode)</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal Li-Po cell voltage</th>
  *       <th>B</th>
  *		    <td>4200 (+100) mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal ADC value</th>
  *       <th>C</th>
  *		    <td>3300 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal measured value</th>
  *       <th>D</th>
  *		    <td>21000 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Number of cells</th>
  *       <th>E</th>
  *		    <td>3</td>
  *     </tr>
  *   </table> 
  * Calculation formula [((B * E / A) * D) / C)].<br>
  * 4300 * 3 / 69.14 * 21000 / 3300 = 118
  */
#define BATTERY_MEASURE_VOLTAGE_MAX_NORMAL_FET        118

/** Minimal intelligent FET power supply voltage, converted to ADC value. Input parameters are next:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>PARAMETER</th>
  *       <th>SYMBOL</th>
  *       <th>VALUE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>1 LSB</th>
  *       <th>A</th>
  *		    <td>69.14 mV (8-bit mode)</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal power supply voltage</th>
  *       <th>B</th>
  *		    <td>?</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal ADC value</th>
  *       <th>C</th>
  *		    <td>3300 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal measured value</th>
  *       <th>D</th>
  *		    <td>21000 mV</td>
  *     </tr>
  *   </table> 
  * Calculation formula [((B / A) * D) / C)].<br>
  * ? / 69.14 * 21000 / 3300 = 118
  */
#define BATTERY_MEASURE_VOLTAGE_MIN_INTELLI_FET       0

/** Maximal intelligent FET power supply voltage, converted to ADC value. Input parameters are next:
  *   <table bgcolor="B0E0E6" border="5">
  *     <tr>
  *       <th>PARAMETER</th>
  *       <th>SYMBOL</th>
  *       <th>VALUE</th>
  *     </tr>
  *
  *     <tr>
  *       <th>1 LSB</th>
  *       <th>A</th>
  *		    <td>69.14 mV (8-bit mode)</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal power supply voltage</th>
  *       <th>B</th>
  *		    <td>?</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal ADC value</th>
  *       <th>C</th>
  *		    <td>3300 mV</td>
  *     </tr>
  *
  *     <tr>
  *       <th>Maximal measured value</th>
  *       <th>D</th>
  *		    <td>21000 mV</td>
  *     </tr>
  *   </table> 
  * Calculation formula [((B / A) * D) / C)].<br>
  * ? / 69.14 * 21000 / 3300 = 118
  */
#define BATTERY_MEASURE_VOLTAGE_MAX_INTELLI_FET       0

/* End of driver_battery_measure_settings_voltage defgroup */
/** @}
  */

/* End of driver_battery_measure_settings defgroup */
/** @}
  */


/* End of driver_battery_measure defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
