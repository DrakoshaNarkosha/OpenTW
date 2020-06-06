/**
  ******************************************************************************
  * @file    JumpersInterface.c
  * @brief   Interface for Jumpers module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"

#include "JumpersSettings.h"
#include "JumpersInterface.h"


/** @ingroup    Jumpers
  * @defgroup   Jumpers_Interface
  * @brief      Interface for the Jumpers module
  * @details    More information on page @ref driver_jumpers_interface  
  * @{
  */

/* Initialize jumpers hardware, based on settings inside the JumpresSettings.h file. */
void jumpersIfInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE_INPUT,
    .pullUp = GPIO_PULL_UP_ENABLE,
    .pin    = JP1_GPIO_PIN,
  };  
  gpioInit(&JP1_GPIO_PORT, &gpio);

  gpio.pin = JP2_GPIO_PIN;
  gpioInit(&JP2_GPIO_PORT, &gpio);
}


/* Read state of the jumper on selected GPIO line. */
bool jumpersIfRead(const void* port, uint8_t pin)
{
  return !gpioRead((const GPIO_t*)port, pin);
}

/** @}
  * End of Jumpers_Interface defgroup.
  */
