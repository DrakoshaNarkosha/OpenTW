#ifndef ADC_H
#define ADC_H

#include "ADCTypes.h"


void adcInit(const ADCInit_t* init);


void adcSetReference(ADCReference_t reference);
      
void adcSetPrescallser(ADCPrescaller_t prescaller);
      
void adcSetAutoTrigger(ADCAutoTrigger_t autoTrigger);
      
void adcSetBipolar(ADCBipolrar_t bipolar);
      
void adcSetChannel(ADCChannel_t channel);
      
void adcSetIt(ADCInterrupt_t interrupt);
      
            
void adcEnable();
      
void adcDisable();

            
void adcStart();


uint16_t adcRead();


bool adcReady();      

#endif
