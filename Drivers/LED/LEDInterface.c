/**
  ******************************************************************************
  * @file    LEDInterface.c
  * @brief   Interface for the LED module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"

#include "LEDSettings.h"
#include "LEDInterface.h"


/** @ingroup    driver_led
  * @defgroup   driver_led_interface  Interface
  * @brief      LED module interface
  * @details    More information on page @ref led_interface  
  * @{
  */

/* Initialize LED hardware, based on settings inside the LEDSettings.h file. */
void ledIfInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE_OUTPUT,
    .pullUp = GPIO_PULL_UP_DISABLE,
    .pin    = GPIO_PIN,
  };  
  gpioInit(&GPIO_PORT, &gpio);

}


/* Turn LED on. */
void ledIfOn(void)
{
  gpioPinSet(&GPIO_PORT, GPIO_PIN);
}

/* Turn LED off. */
void ledIfOff(void)
{
  gpioPinReset(&GPIO_PORT, GPIO_PIN);  
}

/* End of driver_led_interface defgroup */
/** @}
  */
