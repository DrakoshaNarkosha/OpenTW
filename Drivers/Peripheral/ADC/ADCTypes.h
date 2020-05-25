#ifndef ADC_TYPES_H
#define ADC_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "iotn84a.h"


typedef enum
{
  ADC_REFERENCE_VCC                   = 0x00,
  ADC_REFERENCE_AREF                  = ((1 << REFS0)),
  ADC_REFERENCE_1_1V                  = ((1 << REFS1)),
}ADCReference_t;

typedef enum
{
  ADC_PRESCALLER_2                    = 0x00,
  ADC_PRESCALLER_4                    = ((1 << ADPS1)),
  ADC_PRESCALLER_8                    = ((1 << ADPS0) | (1 << ADPS1)),
  ADC_PRESCALLER_16                   = ((1 << ADPS2)),
  ADC_PRESCALLER_32                   = ((1 << ADPS0) | (1 << ADPS2)),
  ADC_PRESCALLER_64                   = ((1 << ADPS1) | (1 << ADPS2)),
  ADC_PRESCALLER_128                  = ((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2)),
}ADCPrescaller_t;
      
typedef enum
{
  ADC_AUTO_TRIGGER_FREE_RUNNING       = 0x00,
  ADC_AUTO_TRIGGER_ANALOG_COMPARATOR  = ((1 << ADTS0)),  
  ADC_AUTO_TRIGGER_EXTI_INT0          = ((1 << ADTS1)),
  ADC_AUTO_TRIGGER_TC0_COMP_MATCH_A   = ((1 << ADTS0) | (1 << ADTS1)),
  ADC_AUTO_TRIGGER_TC0_OVERFLOW       = ((1 << ADTS2)),
  ADC_AUTO_TRIGGER_TC1_COMP_MATCH_B   = ((1 << ADTS0) | (1 << ADTS2)),
  ADC_AUTO_TRIGGER_TC1_OVERFLOW       = ((1 << ADTS1) | (1 << ADTS2)),
  ADC_AUTO_TRIGGER_TC1_CAPTURE        = ((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2)),
}ADCAutoTrigger_t;
      
typedef enum
{
  ADC_BIPOLAR_DISABLE                 = 0x00,
  ADC_BIPOLAR_ENABLE                  = ((1 << BIN)),  
}ADCBipolrar_t;

typedef enum
{
  ADC_INTERRUPT_DISABLE               = 0x00,
  ADC_INTERRUPT_ENABLE                = ((1 << ADIE)),
}ADCInterrupt_t;

typedef enum
{
  ADC_CHANNEL_PA0                     = 0x00,
  ADC_CHANNEL_PA1                     = ((1 << MUX0)),
  ADC_CHANNEL_PA2                     = ((1 << MUX1)),
  ADC_CHANNEL_PA3                     = ((1 << MUX0) | (1 << MUX1)),
  ADC_CHANNEL_PA4                     = ((1 << MUX2)),
  ADC_CHANNEL_PA5                     = ((1 << MUX0) | (1 << MUX2)),
  ADC_CHANNEL_PA6                     = ((1 << MUX1) | (1 << MUX2)),
  ADC_CHANNEL_PA7                     = ((1 << MUX0) | (1 << MUX1) | (1 << MUX2)),
  ADC_CHANNEL_AGND                    = ((1 << MUX5)),
  ADC_CHANNEL_IREF                    = ((1 << MUX0) | (1 << MUX5)),
  ADC_CHANNEL_TEMPERATURE             = ((1 << MUX1) | (1 << MUX5)),
}ADCChannel_t;
            
     
typedef struct
{
  ADCReference_t                      reference;
  ADCPrescaller_t                     prescaller;
  ADCAutoTrigger_t                    autoTrigger;
  ADCBipolrar_t                       bipolar;
  ADCInterrupt_t                      interrupt;
  ADCChannel_t                        channel;
}ADCInit_t;

#endif
