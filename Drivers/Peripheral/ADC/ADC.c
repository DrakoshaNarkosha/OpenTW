#include "ADC.h"


void adcInit(const ADCInit_t* init)
{
  //       ADPS[0:2]           ADIE[3]           ADATE[5]
  ADCSRA = init->prescaller  | init->interrupt | ((init->autoTrigger == ADC_AUTO_TRIGGER_FREE_RUNNING) ? 0x00 : (1 << ADATE));
  //       ADTS[0:2]           BIN[7]
  ADCSRB = init->autoTrigger | init->bipolar;
  //       MUX[0:5]            REFS[0:1]
  ADMUX  = init->channel     | init->reference;  
}


void adcSetReference(ADCReference_t reference)
{
  ADMUX &= ~((1 << REFS0) | (1 << REFS1));
  ADMUX |= reference;
}  
      
void adcSetPrescallser(ADCPrescaller_t prescaller)
{
  ADCSRA &= ~((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2));
  ADCSRA |= prescaller;
} 
     
void adcSetAutoTrigger(ADCAutoTrigger_t autoTrigger)
{
  ADCSRB &= ~((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2));
  ADCSRB |= autoTrigger;
}  
      
void adcSetBipolar(ADCBipolrar_t bipolar)
{
  ADCSRB &= ~(1 << BIN);
  ADCSRB |= bipolar;
}
      
void adcSetChannel(ADCChannel_t channel)
{
  ADMUX &= ~((1 << MUX0) | (1 << MUX1) | (1 << MUX2) | (1 << MUX3) | (1 << MUX4) | (1 << MUX5));
  ADMUX |= channel;
}

void adcSetIt(ADCInterrupt_t interrupt)
{
  ADCSRB &= ~(1 << ADIE);
  ADCSRB |= interrupt;        
}


void adcEnable()
{
  ADCSRA |= (1 << ADEN);
}
      
void adcDisable()
{
  ADCSRA &= ~(1 << ADEN);
}


void adcStart()
{
  ADCSRA |= (1 << ADSC);
}


uint16_t adcRead()
{   
  return (uint16_t)ADCW;
}


bool adcReady()
{
  return ADCSRA & (1 << ADSC);
}
