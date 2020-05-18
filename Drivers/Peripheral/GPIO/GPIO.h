#ifndef GPIO_H
#define GPIO_H

#include "GPIODef.h"


namespace drv
{
  namespace periph
  {
    class GPIO
    {
      public:
        GPIO(const gpio::Init_t& init);
        
        ~GPIO();
        

        void low();

        void high();

        
        bool read();
    
      private:
        volatile const gpio::GPIO_t&  m_port;
        gpio::Pin_t                   m_pin;
    };    
  } 
}

#endif
