/**
  ******************************************************************************
  * @file    ADCTypes.h
  * @brief   Types for the ADC driver for 8-bit AVR MCUs
  * @version 1.0.0
  *
  * @page adc_types  ADC types
  *
  *
  * @section adc_types_description  Description
  *   Types for ADC driver library.
  *
  *
  * @section adc_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef ADC_TYPES_H
#define ADC_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "iotn84a.h"
#include "interrupt.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_peripheral  Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    drivers_peripheral
  * @addtogroup drivers_peripheral_adc  ADC
  * @brief      ADC (Analog to Digital Converter) handler
  * @details    More information on page @ref adc
  * @{
  */


/** @ingroup    drivers_peripheral_adc
  * @defgroup   drivers_peripheral_adc_types  Types
  * @brief      ADC (Analog to Digital Converter) driver types
  * @details    More information on page @ref adc_types  
  * @{
  */

/**
  * Reference voltage source.
  */
typedef enum
{
  ADC_REFERENCE_VCC                   = 0x00,                                         /*!< VCC used as analog reference, disconnected from PA0 (AREF). */
  ADC_REFERENCE_AREF                  = ((1 << REFS0)),                               /*!< External voltage reference at PA0 (AREF) pin, internal voltage reference turned off. */
  ADC_REFERENCE_1_1V                  = ((1 << REFS1)),                               /*!< Internal 1.1V voltage reference. */
}ADCReference_t;

/**
  * Prescaler value.
  */
typedef enum
{
  ADC_PRESCALER_2                     = 0x00,                                         /*!< Division factor is equal to 2. */
  ADC_PRESCALER_4                     = ((1 << ADPS1)),                               /*!< Division factor is equal to 4. */
  ADC_PRESCALER_8                     = ((1 << ADPS0) | (1 << ADPS1)),                /*!< Division factor is equal to 8. */
  ADC_PRESCALER_16                    = ((1 << ADPS2)),                               /*!< Division factor is equal to 16. */
  ADC_PRESCALER_32                    = ((1 << ADPS0) | (1 << ADPS2)),                /*!< Division factor is equal to 32. */
  ADC_PRESCALER_64                    = ((1 << ADPS1) | (1 << ADPS2)),                /*!< Division factor is equal to 64. */
  ADC_PRESCALER_128                   = ((1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2)), /*!< Division factor is equal to 128. */
}ADCPrescaller_t;

/** 
  * Auto trigger source.
  */      
typedef enum
{
  ADC_AUTO_TRIGGER_FREE_RUNNING       = 0x00,                                         /*!< Free running mode. */
  ADC_AUTO_TRIGGER_ANALOG_COMPARATOR  = ((1 << ADTS0)),                               /*!< Auto trigger on Analog comparator. */
  ADC_AUTO_TRIGGER_EXTI_INT0          = ((1 << ADTS1)),                               /*!< Auto trigger on External interrupt request 0. */
  ADC_AUTO_TRIGGER_TC0_COMP_MATCH_A   = ((1 << ADTS0) | (1 << ADTS1)),                /*!< Auto trigger on Timer/Counter0 compare match A. */
  ADC_AUTO_TRIGGER_TC0_OVERFLOW       = ((1 << ADTS2)),                               /*!< Auto trigger on Timer/Counter0 overflow. */
  ADC_AUTO_TRIGGER_TC1_COMP_MATCH_B   = ((1 << ADTS0) | (1 << ADTS2)),                /*!< Auto trigger on Timer/Counter1 compare match B. */
  ADC_AUTO_TRIGGER_TC1_OVERFLOW       = ((1 << ADTS1) | (1 << ADTS2)),                /*!< Auto trigger on Timer/Counter1 overflow. */
  ADC_AUTO_TRIGGER_TC1_CAPTURE        = ((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2)), /*!< Auto trigger on Timer/Counter1 capture event. */
}ADCAutoTrigger_t;

/**
  * Bipolar input mode.
  */            
typedef enum
{
  ADC_BIPOLAR_DISABLE                 = 0x00,                                         /*!< Bipolar mode disabled. */
  ADC_BIPOLAR_ENABLE                  = ((1 << BIN)),                                 /*!< Bipolar mode enabled. */  
}ADCBipolrar_t;

/**
  * Interrupt permission for ADC.
  */            
typedef enum
{
  ADC_INTERRUPT_DISABLE               = 0x00,                                       /*!< ADC interrupt disabled. */
  ADC_INTERRUPT_ENABLE                = ((1 << ADIE)),                              /*!< ADC interrupt enabled. */
}ADCInterrupt_t;

/**
  * ADC measurement channel.
  */            
typedef enum
{
  ADC_CHANNEL_PA0                     = 0x00,                                       /*!< Single-ended input channel PA0. */
  ADC_CHANNEL_PA1                     = ((1 << MUX0)),                              /*!< Single-ended input channel PA1. */
  ADC_CHANNEL_PA2                     = ((1 << MUX1)),                              /*!< Single-ended input channel PA2. */
  ADC_CHANNEL_PA3                     = ((1 << MUX0) | (1 << MUX1)),                /*!< Single-ended input channel PA3. */
  ADC_CHANNEL_PA4                     = ((1 << MUX2)),                              /*!< Single-ended input channel PA4. */
  ADC_CHANNEL_PA5                     = ((1 << MUX0) | (1 << MUX2)),                /*!< Single-ended input channel PA5. */
  ADC_CHANNEL_PA6                     = ((1 << MUX1) | (1 << MUX2)),                /*!< Single-ended input channel PA6. */
  ADC_CHANNEL_PA7                     = ((1 << MUX0) | (1 << MUX1) | (1 << MUX2)),  /*!< Single-ended input channel PA7. */
  ADC_CHANNEL_AGND                    = ((1 << MUX5)),                              /*!< Analog ground. */
  ADC_CHANNEL_IREF                    = ((1 << MUX0) | (1 << MUX5)),                /*!< Internal reference voltage (1.1V). */
  ADC_CHANNEL_TEMPERATURE             = ((1 << MUX1) | (1 << MUX5)),                /*!< Temperature measurement. */
}ADCChannel_t;
            

/**
  * ADC initialization structure.
  */   
typedef struct
{
  ADCReference_t                      reference;                                    /*!< Reference voltage source. */
  ADCPrescaller_t                     prescaller;                                   /*!< Prescaler value. */
  ADCAutoTrigger_t                    autoTrigger;                                  /*!< Auto trigger source. */
  ADCBipolrar_t                       bipolar;                                      /*!< Bipolar input mode. */
  ADCInterrupt_t                      interrupt;                                    /*!< Interrupt permission for ADC. */
  ADCChannel_t                        channel;                                      /*!< Measurement channel. */
}ADCInit_t;

/* End of drivers_peripheral_adc_types defgroup */
/** @}
  */


/* End of drivers_peripheral_adc defgroup */
/** @}
  */


/* End of drivers_peripheral defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
