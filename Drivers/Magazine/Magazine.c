#include "Pinout.h"
#include "Magazine.h"


static bool g_magazine = false;


void magazineInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = MODE_SIGNAL_MAGAZINE,
    .pullUp = PULL_SIGNAL_MAGAZINE,
    .pin    = PIN_SIGNAL_MAGAZINE,
  }; 
  
  gpioInit(&PORT_SIGNAL_MAGAZINE, &gpio);
  g_magazine = gpioRead(&PORT_SIGNAL_MAGAZINE, PIN_SIGNAL_MAGAZINE);
}


bool magazinePresent(void)
{
  return g_magazine;
}


void magazineIrqHandler(void)
{
  g_magazine = gpioRead(&PORT_SIGNAL_MAGAZINE, PIN_SIGNAL_MAGAZINE);
}
