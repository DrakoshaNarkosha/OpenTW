/**
  ******************************************************************************
  * @file    BatteryMeasureInterface.c
  * @brief   Interface for Battery Measure module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "BatteryMeasureSettings.h"
#include "BatteryMeasureInterface.h"


/** @ingroup    driver_battery_measure
  * @addtogroup driver_battery_measure_interface  Interface
  * @brief      Battery Measure interface
  * @details    More information on page @ref battery_measure_interface
  * @{
  */

/* Initialize battery measurement hardware, based on settings inside the BatteryMeasureSettings.h file. */
void batteryMeasureIfInit(void)
{
  ADCInit_t adc =
  {
    .reference    = BATTERY_MEASURE_ADC_REFERENCE,
    .autoTrigger  = BATTERY_MEASURE_ADC_AUTO_TRIGGER,
    .bipolar      = BATTERY_MEASURE_ADC_BIPOLAR,
    .interrupt    = BATTERY_MEASURE_ADC_INTERRUPT,
    .prescaller   = BATTERY_MEASURE_ADC_PRESCALER,
    .channel      = BATTERY_MEASURE_ADC_CHANNEL,
  };
  
  adcInit(&adc);  
}


/* Start measurement process. */
void batteryMeasureIfStart(void)
{
  adcEnable();
  adcStart();
}

/* Stop measurement process. */
void batteryMeasureIfStop(void)
{
  adcDisable();
}


/* Read measured ADC data. */
uint8_t batteryMeasureIfRead(void)
{
  return adcRead();
}

/* End of driver_battery_measure_interface defgroup */
/** @}
  */
