/**
  ******************************************************************************
  * @file    ShootingMode.c
  * @brief   Shooting Mode module (source)
  * @version 1.1.0  
  ******************************************************************************
  */


#include "ShootingModeSettings.h"
#include "ShootingModeInterface.h"
#include "ShootingMode.h"


/** @ingroup    Drivers
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref driver_shooting_mode  
  * @{
  */

ShootingMode_t g_autoMode = SHOOTING_MODE_BURST;  /*!< Automatic mode (full auto or 3-burst), based on value read from EEPROM. */
ShootingMode_t g_currMode = SHOOTING_MODE_SEMI;   /*!< Current shooting mode. */


/* Initialize related to Shooting Mode module peripheral modules. */
void shootingModeInit(void)
{
  shootingModeIfInit();  
  /* Read automatic mode type from EEPROM */
  g_autoMode = shootingModeIfMemoryRead();
  /* If read data does not match to possible automatic modes, set 3-burst mode */
  if ((g_autoMode != SHOOTING_MODE_AUTO) && (g_autoMode != SHOOTING_MODE_AUTO))
  {
    g_autoMode = SHOOTING_MODE_BURST;
    shootingModeIfMemoryWrite(g_autoMode);    
  }
  /* Set current shooting mode, based on GPIO pin state */
  g_currMode = (shootingModeIfRead() ? SHOOTING_MODE_SEMI : g_autoMode);
}


/* Change automatic shooting mode between full auto and 3-burst. */
void shootingModeChange(void)
{
  g_autoMode = ((g_autoMode == SHOOTING_MODE_AUTO) ? SHOOTING_MODE_BURST : SHOOTING_MODE_AUTO);
  
  shootingModeIfMemoryWrite(g_autoMode);

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


/* Interrupt handler for the Shooting Mode module. */
void shootingModeIrqHandler(void)
{
  g_currMode = (shootingModeIfRead() ? SHOOTING_MODE_SEMI : g_autoMode);
}

/* End of Shooting_Mode_Driver defgroup */
/** @}
  */
