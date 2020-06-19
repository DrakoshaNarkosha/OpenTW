/**
  ******************************************************************************
  * @file    MagazineInterface.c
  * @brief   Interface for the Magazine module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "PCI.h"
#include "GPIO.h"

#include "MagazineSettings.h"
#include "MagazineInterface.h"


/** @ingroup    driver_magazine
  * @addtogroup driver_magazine_interface
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
  pciLineEnable(PCI_LINE);
}


/* Read state of the magazine. */
bool magazineIfRead(void)
{
  return !gpioRead(&GPIO_PORT, GPIO_PIN);
}

/* End of driver_magazine_interface defgroup */
/** @}
  */
