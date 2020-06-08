/**
  ******************************************************************************
  * @file    FETStandardInterface.c
  * @brief   Interface for standard FET module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"

#include "MagazineSettings.h"
#include "MagazineInterface.h"


/** @ingroup    FET_Standard
  * @defgroup   FET_Standard_Interface
  * @brief      Interface for standard FET module
  * @details    More information on page @ref driver_fet_standard_interface
  * @{
  */

/* Initialize magazine hardware, based on settings inside the MagazineSettings.h file. */
void fetStandardIfInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE_OUTPUT,
    .pullUp = GPIO_PULL_UP_DISABLE,
    .pin    = PIN_FET_NEGATIVE_SDA,
  };  
  gpioInit(&PORT_FET_NEGATIVE_SDA, &gpio);
  gpioPinReset(&PORT_FET_NEGATIVE_SDA, PIN_FET_NEGATIVE_SDA);
  
  gpio.pin    = PIN_FET_POSITIVE_SCL;
  gpioInit(&PORT_FET_POSITIVE_SCL, &gpio);
  gpioPinReset(&PORT_FET_POSITIVE_SCL, PIN_FET_POSITIVE_SCL);
}


/* Set low logic level on the corresponding FET line. */
void fetStandardIfReset(const void* port, uint8_t pin)
{
  gpioPinReset((const GPIO_t*)port, pin);
}

/* Set high logic level on the corresponding FET line. */
void fetStandardIfSet(const void* port, uint8_t pin)
{
  gpioPinSet((const GPIO_t*)port, pin);  
}

/* End of FET_Standard_Interface defgroup */
/** @}
  */
