/**
  ******************************************************************************
  * @file    Magazine.c
  * @brief   Magazine driver (source)
  * @version 1.1.0
  ******************************************************************************
  */


#include "MagazineSettings.h"
#include "MagazineInterface.h"
#include "Magazine.h"


/** @ingroup    driver_magazine
  * @addtogroup driver_magazine_driver  Driver
  * @brief      Magazine driver
  * @details    More information on page @ref magazine
  * @{
  */

volatile static bool g_magazine = false;  /*!< Variable to store current magazine presence status in. */


/* Initialize related to Magazine module peripheral modules. */
void magazineInit(void)
{
  magazineIfInit();
  g_magazine = magazineIfRead();
}


/* Get current state of the magazine.*/
bool magazinePresent(void)
{
  return g_magazine;
}


/* Interrupt handler for the Magazine module. */
void magazineIrqHandler(void)
{
  g_magazine = magazineIfRead();
}

/* End of driver_magazine_driver defgroup */
/** @}
  */
