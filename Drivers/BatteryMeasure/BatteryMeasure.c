/**
  ******************************************************************************
  * @file    BatteryMeasure.c
  * @brief   Battery Measure module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "BatteryMeasureSettings.h" 
#include "BatteryMeasureInterface.h"
#include "BatteryMeasure.h"


/** @ingroup    driver_battery_measure
  * @addtogroup driver_battery_measure_driver  Driver
  * @brief      Battery Measure driver
  * @details    More information on page @ref battery_measure
  * @{
  */

volatile static bool                   g_ready = false;                      /*!< Flag, which indicates is measurement is ready (since last @ref batteryMeasureState() call). */
volatile static BatteryMeasureState_t  g_state = BATTERY_STATE_BAD_VOLTAGE;  /*!< Current battery state. */


/* Initialize battery measurement hardware. */
void batteryMeasureInit(void)
{
  batteryMeasureIfInit();
}


/* Start measurement process. */
void batteryMeasureStart(void)
{
  batteryMeasureIfStart();
}

/* Stop measurement process. */
void batteryMeasureStop(void)
{
  batteryMeasureIfStop();  
}


/* Check, if last measurement is ready. */
bool batteryMeasureIsReady(void)
{
  return g_ready;
}


/* Get current battery state, based on last ADC measurement. */
BatteryMeasureState_t batteryMeasureState(void)
{
  g_ready = false;

  return g_state;
}


/** ADC interrupt vector.
  *
  * @return None.
  */
ISR(ADC_vect)
{
  uint8_t adc = batteryMeasureIfRead();
  /* Check voltage level for intelligent FET */
  if (adc >= BATTERY_MEASURE_VOLTAGE_MIN_INTELLI_FET && adc <= BATTERY_MEASURE_VOLTAGE_MAX_INTELLI_FET)
  {
    g_state = BATTERY_STATE_INTELLI_FET;  
  }
  /* Check voltage level for standard FET */
  else if (adc >= BATTERY_MEASURE_VOLTAGE_MIN_NORMAL_FET && adc <= BATTERY_MEASURE_VOLTAGE_MAX_NORMAL_FET)
  {
    g_state = BATTERY_STATE_STANDARD_FET;    
  }
  /* Bad voltage level */
  else
  {
    g_state = BATTERY_STATE_BAD_VOLTAGE;
  }
  
  g_ready = true;
}

/* End of driver_battery_measure_driver defgroup */
/** @}
  */
