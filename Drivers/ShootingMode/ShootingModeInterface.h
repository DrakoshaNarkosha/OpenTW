/**
  ******************************************************************************
  * @file    ShootingModeInterface.h
  * @brief   Interface for the Shooting Mode module (header)
  * @version 1.0.0
  *
  * @page driver_shooting_mode_interface  Shooting mode driver interface
  *
  * @subsection Description
  *   Current module implements platform-related hardware functions for 
  *   monitoring and changing shooting mode. This module must implement 
  *   initialization, shooting mode GPIO read and EEPROM read/write of auto
  *   mode functions for proper functioning.
  *
  *   @note Low logic level on shooting mode GPIO line means, that auto mode is
  *         selected.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_INTERFACE_H
#define SHOOTING_MODE_INTERFACE_H

#include "ShootingModeTypes.h"


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref driver_shooting_mode  
  * @{
  */


/** @ingroup    Shooting_Mode
  * @defgroup   Shooting_Mode_Interface
  * @brief      Interface for the Shooting Mode module
  * @details    More information on page @ref driver_shooting_mode_interface  
  * @{
  */

/** Initialize trigger hardware, based on settings inside the ShootingModeSettings.h file.
  *
  * @return None.
  */
void shootingModeIfInit(void);


/** Read state of the shooting mode line.
  *
  * @retval false  Low logic level on shooting mode line.
  * @retval true   High logic level on shooting mode line.
  */
bool shootingModeIfRead(void);


/** Read current automatic mode from memory.
  *
  * @return Automatic mode.
  */
ShootingMode_t shootingModeIfMemoryRead(void);

/** Write current automatic mode to memory.
  *
  * @param[in]     New shooting mode.
  *
  * @return Automatic mode.
  */
void shootingModeIfMemoryWrite(ShootingMode_t mode);

/* End of Shooting_Mode_Interface defgroup */
/** @}
  */


/* End of Shooting_Mode defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
