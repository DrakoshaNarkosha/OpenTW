/**
  ******************************************************************************
  * @file    GPIO.h
  * @brief   GPIO (General Purpose Input Output) driver for 8-bit AVR MCU
  *          (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "GPIO.h"


/** @ingroup    GPIO
  * @addtogroup GPIO_Driver
  * @brief      Global structures for GPIO driver
  * @details    More information on page @ref driver_peripheral_gpio  
  * @{
  */

/* Initialize GPIO. */
void gpioInit(const GPIO_t* port, const GPIOInit_t* init)
{
  init->mode   == GPIO_MODE_INPUT      ? (*port->DDR &= ~init->pin)  : (*port->DDR |= init->pin);
  init->pullUp == GPIO_PULL_UP_DISABLE ? (*port->PORT &= ~init->pin) : (*port->PORT |= init->pin);
}


/* Set GPIO mode. */
void gpioSetMode(const GPIO_t* port, GPIOPin_t pin, GPIOMode_t mode)
{
  mode == GPIO_MODE_INPUT ? (*port->DDR &= ~pin)  : (*port->DDR |= pin);  
}

/* Set GPIO pull up (enable or disable). */
void gpioSetPullUp(const GPIO_t* port, GPIOPin_t pin, GPIOPullUp_t pullUp)
{
  pullUp == GPIO_PULL_UP_DISABLE ? (*port->PORT &= ~pin) : (*port->PORT |= pin);  
}


/* Set low logic level on selected GPIO pin. */
void gpioPinReset(const GPIO_t* port, GPIOPin_t pin)
{
  *port->PORT &= ~pin;
}

/* Set high logic level on selected GPIO pin. */
void gpioPinSet(const GPIO_t* port, GPIOPin_t pin)
{
  *port->PORT |= pin;
}


/* Read logic level on selected GPIO pin. */
bool gpioRead(const GPIO_t* port, GPIOPin_t pin)
{
  return *port->PIN & pin;  
}

/** @}
  * End of GPIO_Driver defgroup.
  */
