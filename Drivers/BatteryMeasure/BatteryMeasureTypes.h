/**
  ******************************************************************************
  * @file    BatteryMeasureTypes.h
  * @brief   Types for the Battery Measure module
  * @version 1.0.0
  *
  * @page battery_measure_types  Battery Measure types
  *
  *
  * @section battery_measure_types_description  Description
  *   Types for the Battery Measure module.
  *
  *
  * @section battery_measure_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef BATTERY_MEASURE_TYPES_H
#define BATTERY_MEASURE_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


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
  * @addtogroup driver_battery_measure_types  Types
  * @brief      Battery Measure module types
  * @details    More information on page @ref battery_measure_types
  * @{
  */

/**
  * Power supply states.
  */
typedef enum
{
  BATTERY_STATE_STANDARD_FET  = 0x00,  /*!< Standard FET is connected, voltage level for 3-cells Li-Po battery is OK. */
  BATTERY_STATE_INTELLI_FET   = 0x01,  /*!< Intelligent FET is connected, voltage level is OK. */
  BATTERY_STATE_BAD_VOLTAGE   = 0x02,  /*!< Bad voltage level for standard or intelligent FET module. */
}BatteryMeasureState_t;

/* End of driver_battery_measure_types defgroup */
/** @}
  */


/* End of driver_battery_measure defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
