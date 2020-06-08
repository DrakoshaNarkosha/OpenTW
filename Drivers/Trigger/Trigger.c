/**
  ******************************************************************************
  * @file    Trigger.c
  * @brief   Implementation of Trigger module (source)
  * @version 1.1.0
  ******************************************************************************
  */


#include "TriggerSettings.h"
#include "TriggerInterface.h"
#include "Trigger.h"


/** @ingroup    Peripheral
  * @defgroup   Trigger_Driver
  * @brief      Trigger driver
  * @details    More information on page @ref driver_trigger  
  * @{
  */

/*!< Variable to store current trigger status in. */
volatile static bool g_triggered = false;


/* Initialize related to the Trigger module peripheral modules. */
void triggerInit(void)
{
  g_triggered = !gpioRead(&GPIO_PORT, GPIO_PIN);
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

/** @}
  * End of Trigger_Driver defgroup.
  */
