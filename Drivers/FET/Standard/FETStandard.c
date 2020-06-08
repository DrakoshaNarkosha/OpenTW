/**
  ******************************************************************************
  * @file    FETStandard.c
  * @brief   Standard FET module (source)
  * @version 1.0.0
  ******************************************************************************
  */

#include "FETStandardSettings.h"
#include "FETStandardInterface.h"
#include "FETStandard.h"


/** @ingroup    FET_Standard
  * @defgroup   FET_Standard_Driver
  * @brief      Standard FET driver
  * @details    More information on page @ref driver_fet_standard
  * @{
  */

/* Initialize corresponding FET lines. */
void fetStandardInit(void)
{
  fetStandardIfInit();  
}


/* Turn negative FET line off. */
void fetStandardNegativeOff(void)
{
  fetStandardIfReset(&FET_NEGATIVE_GPIO_PORT, FET_NEGATIVE_GPIO_PIN);
}

/* Turn negative FET line on. */
void fetStandardNegativeOn(void)
{
  fetStandardIfSet(&FET_NEGATIVE_GPIO_PORT, FET_NEGATIVE_GPIO_PIN);
}


/* Turn positive FET line off. */
void fetStandardPositiveOff(void)
{
  fetStandardIfReset(&FET_POSITIVE_GPIO_PORT, FET_POSITIVE_GPIO_PIN);
}

/* Turn positive FET line on. */
void fetStandardPositiveOn(void)
{
  fetStandardIfSet(&FET_POSITIVE_GPIO_PORT, FET_POSITIVE_GPIO_PIN);
}

/* End of FET_Standard_Driver defgroup */
/** @}
  */
