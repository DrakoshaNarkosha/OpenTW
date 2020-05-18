#ifndef ADC_TYPES_H
#define ADC_TYPES_H

#include "iotn84a.h"


namespace drv
{
  namespace periph
  {
    namespace adc
    {
      enum Reference_t
      {
        REFERENCE_VCC                   = 0x00,
        REFERENCE_AREF                  = ((1 << REFS0)),
        REFERENCE_1_1V                  = ((1 << REFS1)),
      };

      enum Prescaller_t
      {
        PRESCALLER_2                    = 0x00,
        PRESCALLER_4                    = ((1 << ADPS1)),
        PRESCALLER_8                    = ((1 << ADPS0) | (1 << ADPS1)),
        PRESCALLER_16                   = ((1 << ADPS2)),
        PRESCALLER_32                   = ((1 << ADPS0) | (1 << ADPS2)),
        PRESCALLER_64                   = ((1 << ADPS1) | (1 << ADPS2)),
        PRESCALLER_128                  = ((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2)),
      };
      
      enum AutoTrigger_t
      {
        AUTO_TRIGGER_FREE_RUNNING       = 0x00,
        AUTO_TRIGGER_ANALOG_COMPARATOR  = ((1 << ADTS0)),  
        AUTO_TRIGGER_EXTI_INT0          = ((1 << ADTS1)),
        AUTO_TRIGGER_TC0_COMP_MATCH_A   = ((1 << ADTS0) | (1 << ADTS1)),
        AUTO_TRIGGER_TC0_OVERFLOW       = ((1 << ADTS2)),
        AUTO_TRIGGER_TC1_COMP_MATCH_B   = ((1 << ADTS0) | (1 << ADTS2)),
        AUTO_TRIGGER_TC1_OVERFLOW       = ((1 << ADTS1) | (1 << ADTS2)),
        AUTO_TRIGGER_TC1_CAPTURE        = ((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2)),
      };
      
      enum Bipolrar_t
      {
        BIPOLAR_DISABLE                 = 0x00,
        BIPOLAR_ENABLE                  = ((1 << BIN)),  
      };

      enum Interrupt_t
      {
        INTERRUPT_DISABLE               = 0x00,
        INTERRUPT_ENABLE                = ((1 << ADIE)),
      };

      enum Channel_t
      {
        CHANNEL_PA0                     = 0x00,
        CHANNEL_PA1                     = ((1 << MUX0)),
        CHANNEL_PA2                     = ((1 << MUX1)),
        CHANNEL_PA3                     = ((1 << MUX0) | (1 << MUX1)),
        CHANNEL_PA4                     = ((1 << MUX2)),
        CHANNEL_PA5                     = ((1 << MUX0) | (1 << MUX2)),
        CHANNEL_PA6                     = ((1 << MUX1) | (1 << MUX2)),
        CHANNEL_PA7                     = ((1 << MUX0) | (1 << MUX1) | (1 << MUX2)),
        CHANNEL_AGND                    = ((1 << MUX5)),
        CHANNEL_IREF                    = ((1 << MUX0) | (1 << MUX5)),
        CHANNEL_TEMPERATURE             = ((1 << MUX1) | (1 << MUX5)),
      };
            
     
      struct Init_t
      {
        Reference_t   reference;
        Prescaller_t  prescaller;
        AutoTrigger_t autoTrigger;
        Bipolrar_t    bipolar;
        Interrupt_t   interrupt;
        Channel_t     channel;
      };
    }
  }
}

#endif
