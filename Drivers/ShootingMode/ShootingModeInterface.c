/**
  ******************************************************************************
  * @file    ShootingModeInterface.c
  * @brief   Interface for the Shooting Mode module (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "GPIO.h"
#include "EEPROM.h"

#include "ShootingModeSettings.h"
#include "ShootingModeInterface.h"


/** @ingroup    Shooting_Mode
  * @defgroup   Shooting_Mode_Interface
  * @brief      Interface for the Shooting Mode module
  * @details    More information on page @ref driver_shooting_mode_interface  
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

/* End of Shooting_Mode_Interface defgroup */
/** @}
  */
