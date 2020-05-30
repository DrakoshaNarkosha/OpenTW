/**
  ******************************************************************************
  * @file    ADC.h
  * @brief   ADC (Analog to Digital Converter) driver for 8-bit AVR MCU 
  *          (header)
  *
  * Low-level ADC driver for 8-bit AVR MCU. This drivers is wrapper on MCU 
  * registers to give more convenient access to ADC peripheral registers.
  * There are two variants of usage: blocking and interrupt based. Blocking
  * mode anticipate polling of adcReady() function in cycle, to know when
  * measurement will be ready. With interrupt mode there is no need in polling
  * adcReady() function.
  * 
  * @note To use interrupt method, global interrupt flag in statues register 
  *       must be set. Also ADC interrupt must be allowed with adcSetIt()
  *       function.
  *
  * Usage [blocking mode]:<br>
  * 1) Call adcInit() with initialization structure or use functions with 
  *    adcSet prefix to setup ADC.<br>
  *    @note After initialization structure may be freed.<br>
  * 2) Enable ADC using adcEnable() function.<br>
  * 3) Start measure using adcStart() function.<br>
  * 4) Wait untill adcReady() will return true.<br>
  * 5) Read data using adcRead() function.<br>
  * 6) [Optional] Disable ADC using adcDisable() function.<br>
  *
  * Usage [interrupt mode]:<br>
  * 1) Call adcInit() with initialization structure or use functions with
  *    adcSet prefix to setup ADC.
  *    @warning [interrupt] field in initialization structure must be set to 
  *             ADC_INTERRUPT_ENABLE or adcSetIt() must be called with 
  *             ADC_INTERRUPT_ENABLE parameter.
  * 2) Enable ADC using adcEnable() function.<br>
  * 3) Allocate ADC_vect() vector to be notified about measurement finish.
  * 4) Start measure using adcStart() function.
  * 5) As soon as measurement will be ready and if interrupt flag would be set,
  *    program will go to ADC_vect interrupt vector.
  * 6) Read data using adcRead() inside ADC_vect interrupt vector or somewhere
  *    else.
  * 7) [Optional] Disable ADC using adcDisable() function).<br>
  ******************************************************************************
  */


#ifndef ADC_H
#define ADC_H

#include "ADCTypes.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @addtogroup ADC
  * @brief      ADC driver
  * @{
  */


/** @ingroup    ADC
  * @defgroup   ADC_Driver
  * @brief      ADC driver realization
  * @{
  */

/** Initialize ADC.
  *
  * Initialize ADC peripheral with values in [init] parameter.
  *
  * @param[in]     init         ADC initialization structure.
  *
  * @return None.
  */
void adcInit(const ADCInit_t* init);


/** Set reference voltage source for ADC.
  *
  * @param[in]     reference    ADC reference voltage source.
  *
  * @return None.
  */
void adcSetReference(ADCReference_t reference);

/** Set prescaller value for ADC.
  *
  * @param[in]     prescaler    ADC prescaler value.
  *
  * @return None.
  */      
void adcSetPrescalser(ADCPrescaller_t prescaler);

/** Set auto trigger for ADC.
  *
  * @param[in]     autoTrigger  ADC auto trigger value.
  *
  * @return None.
  */            
void adcSetAutoTrigger(ADCAutoTrigger_t autoTrigger);

/** Set bipolar mode for ADC.
  *
  * @param[in]     bipolar      ADC bipolar mode value.
  *
  * @return None.
  */                  
void adcSetBipolar(ADCBipolrar_t bipolar);
      
/** Set channel for ADC.
  *
  * @param[in]     channel      ADC channel.
  *
  * @return None.
  */                  
void adcSetChannel(ADCChannel_t channel);

/** Set ADC interrupts permission.
  *
  * @param[in]     interrupt    ADC interrupt permission.
  *
  * @return None.
  */                        
void adcSetIt(ADCInterrupt_t interrupt);
      

/** Enable ADC peripheral.
  *
  * @return None.
  */                                    
void adcEnable();

/** Disable ADC peripheral.
  *
  * @return None.
  */                                          
void adcDisable();


/** Start ADC measurement.
  *
  * @note ADC must be enabled with adcEnable() before calling this function.
  *
  * @return None.
  */                                                      
void adcStart();


/** Read measured ADC value.
  *
  * @note This function must be called only if adcReady() return true or ADC 
  *       interrupt occurred.
  *
  * @return Measured ADC value.
  */                                                      
uint16_t adcRead();


/** Check if ADC measurement is ready.
  *
  * @note This function must be called periodically after adcStart() one if
  *       blocking (non-interrupt) way of working is used.
  *
  * @retval false  ADC measurement is not ready.
  * @retval true   ADC measurement is ready.
  */                                                      
bool adcReady();      

/** @}
  * End of ADC_Driver defgroup.
  */


/** @}
  * End of ADC defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
