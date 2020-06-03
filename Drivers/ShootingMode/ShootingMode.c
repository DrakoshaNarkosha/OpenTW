/**
  ******************************************************************************
  * @file    ShootingMode.c
  * @brief   Implementation of Shooting Mode module (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "EEPROM.h"
#include "GPIO.h"

#include "ShootingModeSettings.h"
#include "ShootingMode.h"


/** @ingroup    Peripheral
  * @addtogroup Shooting_Mode_Driver
  * @brief      Shooting mode driver
  * @{
  */

ShootingMode_t g_autoMode = SHOOTING_MODE_BURST;  /*!< Automatic mode (full auto or 3-burst), based on value read from EEPROM. */
ShootingMode_t g_currMode = SHOOTING_MODE_SEMI;   /*!< Current shooting mode. */


/* Initialize related to Shooting Mode module peripheral modules. */
void shootingModeInit(void)
{
  GPIOInit_t gpio =
  {
    .mode   = GPIO_MODE,
    .pullUp = GPIO_PULL,
    .pin    = GPIO_PIN,
  };
  /* Read automatic mode type from EEPROM */
  g_autoMode = eepromReadByte(EEPROM_ADDR);
  /* If read data does not match to possible automatic modes, set 3-burst mode */
  if ((g_autoMode != SHOOTING_MODE_AUTO) && (g_autoMode != SHOOTING_MODE_AUTO))
  {
    g_autoMode = SHOOTING_MODE_BURST;
    eepromWriteByte(EEPROM_ADDR, g_autoMode);    
  }
  /* Initialize GPIO line */
  gpioInit(&GPIO_PORT, &gpio);
  /* Set current shooting mode, based on GPIO pin state */
  g_currMode = (gpioRead(&GPIO_PORT, GPIO_PIN) ? SHOOTING_MODE_SEMI : g_autoMode);
}


/* Change automatic shooting mode between full auto and 3-burst. */
void shootingModeChange(void)
{
  g_autoMode = ((g_autoMode == SHOOTING_MODE_AUTO) ? SHOOTING_MODE_BURST : SHOOTING_MODE_AUTO);
  
  eepromWriteByte(EEPROM_ADDR, g_autoMode);

  if (g_currMode != SHOOTING_MODE_SEMI)
  {
    g_currMode = g_autoMode;
  }
}


/* Read current shooting mode from RAM variable. */
ShootingMode_t shootingModeRead(void)
{
  return g_currMode;
}


/* Interrupt handler for shooting mode module. */
void shootingModeIrqHandler(void)
{
  g_currMode = (gpioRead(&GPIO_PORT, GPIO_PIN) ? SHOOTING_MODE_SEMI : g_autoMode);
}

/** @}
  * End of Shooting_Mode_Driver defgroup.
  */
