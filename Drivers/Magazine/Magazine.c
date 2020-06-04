#include "GPIO.h"

#include "MagazineSettings.h"
#include "Magazine.h"


static bool g_magazine = false;


void magazineInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE,
    .pullUp = GPIO_PULL,
    .pin    = GPIO_PIN,
  }; 
  
  gpioInit(&GPIO_PORT, &gpio);
  g_magazine = gpioRead(&GPIO_PORT, GPIO_PIN);
}


bool magazinePresent(void)
{
  return g_magazine;
}


void magazineIrqHandler(void)
{
  g_magazine = gpioRead(&GPIO_PORT, GPIO_PIN);
}
