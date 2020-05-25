#include "GPIO.h"


void gpioInit(const volatile GPIO_t* port, const GPIOInit_t* init)
{
  init->mode   == GPIO_MODE_INPUT      ? (*port->DDR &= ~init->pin)  : (*port->DDR |= init->pin);
  init->pullUp == GPIO_PULL_UP_DISABLE ? (*port->PORT &= ~init->pin) : (*port->PORT |= init->pin);
}


void gpioSetMode(const volatile GPIO_t* port, GPIOPin_t pin, GPIOMode_t mode)
{
  mode == GPIO_MODE_INPUT ? (*port->DDR &= ~pin)  : (*port->DDR |= pin);  
}

void gpioSetPullUp(const volatile GPIO_t* port, GPIOPin_t pin, GPIOPullUp_t pullUp)
{
  pullUp == GPIO_PULL_UP_DISABLE ? (*port->PORT &= ~pin) : (*port->PORT |= pin);  
}


void gpioPinReset(const volatile GPIO_t* port, GPIOPin_t pin)
{
  *port->PORT &= ~pin;
}

void gpioPinSet(const volatile GPIO_t* port, GPIOPin_t pin)
{
  *port->PORT |= pin;
}


bool gpioRead(const volatile GPIO_t* port, GPIOPin_t pin)
{
  return *port->PIN & pin;  
}
