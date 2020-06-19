/**
  ******************************************************************************
  * @file    BatteryMeasureInterface.h
  * @brief   Interface for Battery Measure module (header)
  * @version 1.0.0
  *
  * @page battery_measure_interface  Battery Measure interface
  *
  * @section battery_measure_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   battery measurement operations. This module must implement initialization,
  *   measurement start/stop and measurement read functions for proper 
  *   functioning. Current interface is designed for interrupt-based method.
  *
  *
  * @section battery_measure_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef BATTERY_MEASURE_INTERFACE_H
#define BATTERY_MEASURE_INTERFACE_H

#include <stdint.h>

#include "ADC.h"


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
  * @defgroup   driver_battery_measure_interface  Interface
  * @brief      Battery Measure interface
  * @details    More information on page @ref battery_measure_interface
  * @{
  */


/** Initialize battery measurement hardware, based on settings inside the BatteryMeasureSettings.h file.
  *
  * @return None.
  */
void batteryMeasureIfInit(void);


/** Start measurement process.
  *
  * @return None.
  */
void batteryMeasureIfStart(void);

/** Stop measurement process.
  *
  * @return None.
  */
void batteryMeasureIfStop(void);


/** Read measured ADC data.
  *
  * @return Measured ADC 8-bit value.
  */
uint8_t batteryMeasureIfRead(void);

/* End of driver_battery_measure_interface defgroup */
/** @}
  */


/* End of driver_battery_measure defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
