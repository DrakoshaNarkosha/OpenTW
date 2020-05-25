#ifndef GPIO_DEF_H
#define GPIO_DEF_H

#include "GPIOTypes.h"


volatile static const GPIO_t GPIOA =
{
  &DDRA,
  &PORTA,
  &PINA
};

volatile static const GPIO_t GPIOB =
{
  &DDRB,
  &PORTB,
  &PINB
};

#endif
