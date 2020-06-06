/**
  ******************************************************************************
  * @file    Magazine.c
  * @brief   Magazine module (source)
  * @version 1.1.0
  ******************************************************************************
  */


#include "MagazineSettings.h"
#include "MagazineInterface.h"
#include "Magazine.h"


/** @ingroup    Magazine
  * @defgroup   Magazine_Driver
  * @brief      Magazine driver
  * @details    More information on page @ref driver_magazine  
  * @{
  */

/*!< Variable to store current magazine presence status in. */
static bool g_magazine = false;


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

/** @}
  * End of Magazine_Driver defgroup.
  */
