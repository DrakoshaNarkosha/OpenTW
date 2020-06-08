/**
  ******************************************************************************
  * @file    MagazineInterface.c
  * @brief   Interface for Magazine module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"

#include "MagazineSettings.h"
#include "MagazineInterface.h"


/** @ingroup    Magazine
  * @defgroup   Magazine_Interface
  * @brief      Interface for the Magazine module
  * @details    More information on page @ref driver_magazine_interface  
  * @{
  */

/* Initialize magazine hardware, based on settings inside the MagazineSettings.h file. */
void magazineIfInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE_INPUT,
    .pullUp = GPIO_PULL_UP_ENABLE,
    .pin    = GPIO_PIN,
  };  
  gpioInit(&GPIO_PORT, &gpio);
}


/* Read state of the magazine. */
bool magazineIfRead(void)
{
  return !gpioRead(&GPIO_PORT, GPIO_PIN);
}

/** @}
  * End of Magazine_Interface defgroup.
  */
