#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "iotn84a.h"


typedef enum
{
  GPIO_MODE_INPUT         = 0x00,
  GPIO_MODE_OUTPUT        = 0x01,
}GPIOMode_t;

typedef enum
{
  GPIO_PULL_UP_DISABLE    = 0x00,
  GPIO_PULL_UP_ENABLE     = 0x01,
}GPIOPullUp_t;

typedef enum
{
  GPIO_PIN_0              = 0x01,
  GPIO_PIN_1              = 0x02,
  GPIO_PIN_2              = 0x04,
  GPIO_PIN_3              = 0x08,
  GPIO_PIN_4              = 0x10,
  GPIO_PIN_5              = 0x20,
  GPIO_PIN_6              = 0x40,
  GPIO_PIN_7              = 0x80,
}GPIOPin_t;


typedef struct 
{
  GPIOMode_t              mode;
  GPIOPullUp_t            pullUp;
  GPIOPin_t               pin;
}GPIOInit_t;


typedef struct
{
  volatile uint8_t*       DDR; 
  volatile uint8_t*       PORT;
  volatile uint8_t*       PIN;
}GPIO_t;

 
#endif
