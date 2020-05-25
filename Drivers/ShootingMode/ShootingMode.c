#include "EEPROM.h"
#include "GPIO.h"

#include "Pinout.h"
#include "Addresses.h"

#include "ShootingMode.h"


ShootingMode_t autoMode = SHOOTING_MODE_AUTO;
ShootingMode_t currMode = SHOOTING_MODE_SEMI;


void shootingModeInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = MODE_SIGNAL_MODE,
    .pullUp = PULL_SIGNAL_MODE,
    .pin    = PIN_SIGNAL_MODE,
  };

  autoMode = eepromReadByte(ADDR_SHOOTING_MODE);

  gpioInit(&PORT_SIGNAL_MODE, &gpio);
  currMode = (gpioRead(&PORT_SIGNAL_MODE, PIN_SIGNAL_MODE) ? SHOOTING_MODE_SEMI : autoMode);
}


void shootingModeWrite(ShootingMode_t mode)
{
  eepromWriteByte(ADDR_SHOOTING_MODE, mode);

  if (currMode != SHOOTING_MODE_SEMI)
  {
    currMode = mode;
  }
}

ShootingMode_t shootingModeRead(void)
{
  return currMode;
}


void shootingModeIrqHandler(void)
{
  currMode = (gpioRead(&PORT_SIGNAL_MODE, PIN_SIGNAL_MODE) ? SHOOTING_MODE_SEMI : autoMode);
}
