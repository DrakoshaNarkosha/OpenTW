/**
  ******************************************************************************
  * @file    TriggerInterface.c
  * @brief   Interface for Trigger module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"

#include "TriggerSettings.h"
#include "TriggerInterface.h"


/** @ingroup    Trigger
  * @defgroup   Trigger_Interface
  * @brief      Interface for the Trigger module
  * @details    More information on page @ref driver_trigger_interface  
  * @{
  */

/* Initialize trigger hardware, based on settings inside the TriggerSettings.h file. */
void triggerIfInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE_INPUT,
    .pullUp = GPIO_PULL_UP_ENABLE,
    .pin    = GPIO_PIN,
  };  
  gpioInit(&GPIO_PORT, &gpio);
}


/* Read state of the trigger. */
bool triggerIfRead(void)
{
  return !gpioRead(&GPIO_PORT, GPIO_PIN);
}

/** @}
  * End of Trigger_Interface defgroup.
  */
