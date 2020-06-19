/**
  ******************************************************************************
  * @file    Trigger.c
  * @brief   Trigger driver (source)
  * @version 1.1.0
  ******************************************************************************
  */


#include "TriggerSettings.h"
#include "TriggerInterface.h"
#include "Trigger.h"


/** @ingroup    drivers_trigger
  * @addtogroup drivers_trigger_driver  Driver
  * @brief      Fire trigger driver
  * @details    More information on page @ref trigger  
  * @{
  */

volatile static bool g_triggered = false;   /*!< Variable to store current trigger status in. */


/* Initialize related to the Trigger module peripheral modules. */
void triggerInit(void)
{
  triggerIfInit();
  g_triggered = triggerIfRead();
}


/* Get current state of the trigger. */
bool triggerPushed(void)
{
  return g_triggered;
}


/* Interrupt handler for the Trigger module. */
void triggerIrqHandler(void)
{
  g_triggered = triggerIfRead();
}

/* End of drivers_trigger_driver defgroup */
/** @}
  */
