/**
  ******************************************************************************
  * @file    LED.c
  * @brief   LED driver (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "LEDSettings.h"
#include "LEDInterface.h"
#include "LED.h"


/** @ingroup    driver_led
  * @defgroup   driver_led_driver  Driver
  * @brief      LED driver
  * @details    More information on page @ref led
  * @{
  */

/* Initialize related to the LED module peripheral modules. */
void ledInit(void)
{
  ledIfInit();
  ledIfOff();
}


/* Turn LED on. */
void ledOn(void)
{
  ledIfOn();  
}

/* Turn LED off. */
void ledOff(void)
{
  ledIfOff();
}

/* End of driver_led_driver defgroup */
/** @}
  */
