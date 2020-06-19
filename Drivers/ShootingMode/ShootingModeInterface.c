/**
  ******************************************************************************
  * @file    ShootingModeInterface.c
  * @brief   Interface for Shooting Mode module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "PCI.h"
#include "GPIO.h"
#include "EEPROM.h"

#include "ShootingModeSettings.h"
#include "ShootingModeInterface.h"


/** @ingroup    drivers_shooting_mode
  * @addtogroup drivers_shooting_mode_interface  Interface
  * @brief      Shooting Mode module interface
  * @details    More information on page @ref shooting_mode_interface  
  * @{
  */

/* Initialize trigger hardware, based on settings inside the TriggerSettings.h file. */
void shootingModeIfInit(void)
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
bool shootingModeIfRead(void)
{
  return gpioRead(&GPIO_PORT, GPIO_PIN);
}


/* Read current automatic mode from memory. */
ShootingMode_t shootingModeIfMemoryRead(void)
{
  return eepromReadByte(EEPROM_ADDR);
}

/* Write current automatic mode to memory. */
void shootingModeIfMemoryWrite(ShootingMode_t mode)
{
  eepromWriteByte(EEPROM_ADDR, mode);
}

/* End of drivers_shooting_mode_interface defgroup */
/** @}
  */
