/**
  ******************************************************************************
  * @file    ADC.c
  * @brief   ADC (Analog to Digital Converter) driver for 8-bit AVR MCU
  *          (source)
  ******************************************************************************
  */


#include "ADC.h"


/* Initialize ADC. */
void adcInit(const ADCInit_t* init)
{
  /*       ADPS[0:2]           ADIE[3]           ADATE[5] */
  ADCSRA = init->prescaller  | init->interrupt | ((init->autoTrigger == ADC_AUTO_TRIGGER_FREE_RUNNING) ? 0x00 : (1 << ADATE));
  /*       ADTS[0:2]           BIN[7] */
  ADCSRB = init->autoTrigger | init->bipolar;
  /*       MUX[0:5]            REFS[0:1] */
  ADMUX  = init->channel     | init->reference;  
}


/* Set reference voltage source for ADC. */
void adcSetReference(ADCReference_t reference)
{
  ADMUX &= ~((1 << REFS0) | (1 << REFS1));
  ADMUX |= reference;
}  

/* Set prescaller value for ADC. */
void adcSetPrescalser(ADCPrescaller_t prescaler)
{
  ADCSRA &= ~((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2));
  ADCSRA |= prescaler;
} 

/* Set auto trigger for ADC. */     
void adcSetAutoTrigger(ADCAutoTrigger_t autoTrigger)
{
  ADCSRB &= ~((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2));
  ADCSRB |= autoTrigger;
}  
      
/* Set bipolar mode for ADC. */      
void adcSetBipolar(ADCBipolrar_t bipolar)
{
  ADCSRB &= ~(1 << BIN);
  ADCSRB |= bipolar;
}
      
/* Set channel for ADC. */
void adcSetChannel(ADCChannel_t channel)
{
  ADMUX &= ~((1 << MUX0) | (1 << MUX1) | (1 << MUX2) | (1 << MUX3) | (1 << MUX4) | (1 << MUX5));
  ADMUX |= channel;
}

/* Set ADC interrupts permission. */
void adcSetIt(ADCInterrupt_t interrupt)
{
  ADCSRB &= ~(1 << ADIE);
  ADCSRB |= interrupt;        
}


/* Enable ADC peripheral. */
void adcEnable()
{
  ADCSRA |= (1 << ADEN);
}
      
/* Disable ADC peripheral. */      
void adcDisable()
{
  ADCSRA &= ~(1 << ADEN);
}


/* Start ADC measurement. */
void adcStart()
{
  ADCSRA |= (1 << ADSC);
}


/* Read measured ADC value. */
uint16_t adcRead()
{   
  return (uint16_t)ADCW;
}


/* Check if ADC measurement is ready. */
bool adcReady()
{
  return ADCSRA & (1 << ADSC);
}
