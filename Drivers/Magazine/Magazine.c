#include "Pinout.h"
#include "Magazine.h"


static bool magazine;


void magazineInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = MODE_SIGNAL_MAGAZINE,
    .pullUp = PULL_SIGNAL_MAGAZINE,
    .pin    = PIN_SIGNAL_MAGAZINE,
  }; 
  
  gpioInit(&PORT_SIGNAL_MAGAZINE, &gpio);
  magazine = gpioRead(&PORT_SIGNAL_MAGAZINE, PIN_SIGNAL_MAGAZINE);
}


bool magazinePresent(void)
{
  return magazine;
}


void magazineIrqHandler(void)
{
  magazine = gpioRead(&PORT_SIGNAL_MAGAZINE, PIN_SIGNAL_MAGAZINE);
}
