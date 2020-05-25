#include "Pinout.h"
#include "FETNormal.h"


void fetNormalInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = MODE_FET_NEGATIVE_SDA,
    .pullUp = PULL_FET_NEGATIVE_SDA,
    .pin    = PIN_FET_NEGATIVE_SDA,
  };
  
  gpioInit(&PORT_FET_NEGATIVE_SDA, &gpio);
  gpioPinSet(&PORT_FET_NEGATIVE_SDA, PIN_FET_NEGATIVE_SDA);
  
  gpio.mode   = MODE_FET_POSITIVE_SCL;
  gpio.pullUp = PULL_FET_POSITIVE_SCL;
  gpio.pin    = PIN_FET_POSITIVE_SCL; 

  gpioInit(&PORT_FET_POSITIVE_SCL, &gpio);
  gpioPinSet(&PORT_FET_POSITIVE_SCL, PIN_FET_POSITIVE_SCL);
}


void fetNormalPositiveOff(void)
{
  gpioPinReset(&PORT_FET_POSITIVE_SCL, PIN_FET_POSITIVE_SCL);
}

void fetNormalPositiveOn(void)
{
  gpioPinSet(&PORT_FET_POSITIVE_SCL, PIN_FET_POSITIVE_SCL);
}


void fetNormalNegativeOff(void)
{
  gpioPinReset(&PORT_FET_NEGATIVE_SDA, PIN_FET_NEGATIVE_SDA);
}

void fetNormalNegativeOn(void)
{
  gpioPinSet(&PORT_FET_NEGATIVE_SDA, PIN_FET_NEGATIVE_SDA);
}
