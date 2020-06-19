/**
  ******************************************************************************
  * @file    TriggerInterface.c
  * @brief   Interface for Trigger driver (source)
  * @version 1.1.0
  ******************************************************************************
  */


#include "GPIO.h"
#include "PCI.h"

#include "TriggerSettings.h"
#include "TriggerInterface.h"


/** @ingroup    drivers_trigger
  * @defgroup   drivers_trigger_interface  Interface
  * @brief      Fire trigger module interface
  * @details    More information on page @ref trigger_interface
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
  pciLineEnable(PCI_LINE);
}


/* Read state of the trigger. */
bool triggerIfRead(void)
{
  return !gpioRead(&GPIO_PORT, GPIO_PIN);
}

/* End of Trigger_Interface defgroup */
/** @}
  */
