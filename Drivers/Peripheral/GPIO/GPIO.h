#ifndef GPIO_H
#define GPIO_H

#include "GPIODef.h"


void gpioInit(const volatile GPIO_t* port, const GPIOInit_t* init);


void gpioSetMode(const volatile GPIO_t* port, GPIOPin_t pin, GPIOMode_t mode);

void gpioSetPullUp(const volatile GPIO_t* port, GPIOPin_t pin, GPIOPullUp_t pullUp);


void gpioPinReset(const volatile GPIO_t* port, GPIOPin_t pin);

void gpioPinSet(const volatile GPIO_t* port, GPIOPin_t pin);


bool gpioRead(const volatile GPIO_t* port, GPIOPin_t pin);

#endif
