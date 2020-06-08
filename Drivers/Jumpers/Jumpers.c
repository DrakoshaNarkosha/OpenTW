/**
  ******************************************************************************
  * @file    Jumpers.c
  * @brief   Jumpers module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "JumpersSettings.h"
#include "JumpersInterface.h"
#include "Jumpers.h"


/** @ingroup    Jumpers
  * @defgroup   Jumpers_Driver
  * @brief      Jumpers driver.
  * @details    More information on page @ref driver_jumpers
  * @{
  */

/* Initialize related to Jumpres module peripheral modules. */
void jumpersInit(void)
{
  jumpersIfInit();
}


/* Get current state of the jumper 1. */
bool jumpers1Read(void)
{
  return jumpersIfRead(&JP1_GPIO_PORT, JP1_GPIO_PIN);
}

/* Get current state of the jumper 2. */
bool jumpers2Read(void)
{
  return jumpersIfRead(&JP2_GPIO_PORT, JP2_GPIO_PIN);  
}

/* End of Jumpers_Driver defgroup */
/** @}
  */
