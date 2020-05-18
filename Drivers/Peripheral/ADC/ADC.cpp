#include "ADC.h"


using namespace drv;
using namespace periph;
using namespace adc;


void ADC::init(const adc::Init_t& init)
{
  //       ADPS[0:2]         ADIE[3]          ADATE[5]
  ADCSRA = init.prescaller | init.interrupt | ((init.autoTrigger == AUTO_TRIGGER_FREE_RUNNING) ? 0x00 : (1 << ADATE));
  //       ADTS[0:2]          BIN[7]
  ADCSRB = init.autoTrigger | init.bipolar;
  //       MUX[0:5]       REFS[0:1]
  ADMUX  = init.channel | init.reference;  
}


void ADC::setReference(adc::Reference_t reference)
{
  ADMUX &= ~((1 << REFS0) | (1 << REFS1));
  ADMUX |= reference;
}  
      
void ADC::setPrescallser(adc::Prescaller_t prescaller)
{
  ADCSRA &= ~((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2));
  ADCSRA |= prescaller;
} 
     
void ADC::setAutoTrigger(adc::AutoTrigger_t autoTrigger)
{
  ADCSRB &= ~((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2));
  ADCSRB |= autoTrigger;
}  
      
void ADC::setBipolar(adc::Bipolrar_t bipolar)
{
  ADCSRB &= ~(1 << BIN);
  ADCSRB |= bipolar;
}
      
void ADC::setChannel(adc::Channel_t channel)
{
  ADMUX &= ~((1 << MUX0) | (1 << MUX1) | (1 << MUX2) | (1 << MUX3) | (1 << MUX4) | (1 << MUX5));
  ADMUX |= channel;
}

void setIt(adc::Interrupt_t interrupt)
{
  ADCSRB &= ~(1 << ADIE);
  ADCSRB |= interrupt;        
}


void ADC::enable()
{
  ADCSRA |= (1 << ADEN);
}
      
void ADC::disable()
{
  ADCSRA &= ~(1 << ADEN);
}


void ADC::start()
{
  ADCSRA |= (1 << ADSC);
}


uint16_t ADC::read()
{   
  return (uint16_t)ADCW;
}


bool ADC::isReady()
{
  return ADCSRA & (1 << ADSC);
}
