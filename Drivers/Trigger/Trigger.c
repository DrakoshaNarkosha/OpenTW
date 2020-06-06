#include "GPIO.h"

#include "TriggerSettings.h"
#include "Trigger.h"


bool g_triggered = false;


void triggerInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE,
    .pullUp = GPIO_PULL,
    .pin    = GPIO_PIN,
  }; 
  
  gpioInit(&GPIO_PORT, &gpio);
  g_triggered = !gpioRead(&GPIO_PORT, GPIO_PIN);
}


bool triggerPushed(void)
{
  return g_triggered;
}


void triggerIrqHandler(void)
{
  g_triggered = !gpioRead(&GPIO_PORT, GPIO_PIN);
}
