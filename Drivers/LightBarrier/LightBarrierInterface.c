/**
  ******************************************************************************
  * @file    LightBarrierInterface.c
  * @brief   Interface for the Light Barrier module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"
#include "PCI.h"

#include "LightBarrierSettings.h"
#include "LightBarrierInterface.h"


/** @ingroup    driver_light_barrier
  * @addtogroup driver_light_barrier_interface  Interface
  * @brief      Light Barrier module interface
  * @details    More information on page @ref light_barrier_interface  
  * @{
  */

/* Initialize light barrier hardware, based on settings inside the LightBarrierSettings.h file. */
void ligthBarrierIfInit(void)
{
  /* Initialize photodiode GPIO */
  GPIOInit_t gpio =
  {
    .mode     = GPIO_MODE_INPUT,
    .pullUp   = GPIO_PULL_UP_ENABLE,
    .pin      = OPT_GPIO_PIN,
  };
  gpioInit(&OPT_GPIO_PORT, &gpio);
  pciLineEnable(OPT_PCI_LINE);

  /* Initialize LED GPIO */
  gpio.mode   = GPIO_MODE_OUTPUT;
  gpio.pullUp = GPIO_PULL_UP_DISABLE;
  gpio.pin    = LED_GPIO_PIN;
  gpioInit(&LED_GPIO_PORT, &gpio);
}


/* Turn on the LED for the Light Barrier. */
void ligthBarrierIfOn(void)
{
  gpioPinSet(&LED_GPIO_PORT, LED_GPIO_PIN);
}

/* Turn off the LED for the Light Barrier. */
void ligthBarrierIfOff(void)
{
  gpioPinReset(&LED_GPIO_PORT, LED_GPIO_PIN);
}


/* Read state of the light barrier photodiode. */
bool ligthBarrierIfRead(void)
{
  return gpioRead(&OPT_GPIO_PORT, OPT_GPIO_PIN);
}

/* End of driver_light_barrier_interface defgroup */
/** @}
  */
