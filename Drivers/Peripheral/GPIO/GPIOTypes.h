#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

#include "iotn84a.h"


namespace drv
{
  namespace periph
  {
    namespace gpio
    {
      enum Mode_t
      {
        MODE_INPUT              = 0x00,
        MODE_OUTPUT             = 0x01,
      };

      enum PullUp_t
      {
        PULL_UP_DISABLE         = 0x00,
        PULL_UP_ENABLE          = 0x01,
      };
      
      enum Pin_t
      {
        GPIO_PIN_0              = 0x01,
        GPIO_PIN_1              = 0x02,
        GPIO_PIN_2              = 0x04,
        GPIO_PIN_3              = 0x08,
        GPIO_PIN_4              = 0x10,
        GPIO_PIN_5              = 0x20,
        GPIO_PIN_6              = 0x40,
        GPIO_PIN_7              = 0x80,
      };
      
      struct GPIO_t
      {
        volatile uint8_t*       DDR; 
        volatile uint8_t*       PORT;
        volatile uint8_t*       PIN;
      };
      
      struct Init_t
      {
        Mode_t                  mode;
        PullUp_t                pullUp;
        volatile const GPIO_t&  port;
        Pin_t                   pin;
      };
    }
  }
}

#endif
