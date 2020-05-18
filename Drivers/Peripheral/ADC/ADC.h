#ifndef ADC_H
#define ADC_H

#include "ADCTypes.h"


namespace drv
{
  namespace periph
  {
    class ADC
    {
    public:      
      void init(const adc::Init_t& init);
      
      
      void setReference(adc::Reference_t reference);
      
      void setPrescallser(adc::Prescaller_t prescaller);
      
      void setAutoTrigger(adc::AutoTrigger_t autoTrigger);
      
      void setBipolar(adc::Bipolrar_t bipolar);
      
      void setChannel(adc::Channel_t channel);
      
      void setIt(adc::Interrupt_t interrupt);
      
            
      void enable();
      
      void disable();

            
      void start();


      uint16_t read();


      bool isReady();      
    };
  } 
}

#endif
