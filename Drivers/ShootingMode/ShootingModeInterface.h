/**
  ******************************************************************************
  * @file    ShootingModeInterface.h
  * @brief   Interface for Shooting Mode module (header)
  * @version 1.0.0
  *
  * @page shooting_mode_interface  Shooting Mode interface
  *
  * @section shooting_mode_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   monitoring and changing shooting mode. This module must implement 
  *   initialization, shooting mode GPIO read and EEPROM read/write of auto
  *   mode functions for proper functioning.
  *
  *   @note Low logic level on shooting mode GPIO line means, that auto mode is
  *         selected.
  *
  *
  * @section shooting_mode_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added PCI line interrupt enabling.  
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_INTERFACE_H
#define SHOOTING_MODE_INTERFACE_H

#include "ShootingModeTypes.h"


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_shooting_mode  Shooting mode
  * @brief      Shooting Mode handler 
  * @details    More information on page @ref shooting_mode  
  * @{
  */


/** @ingroup    drivers_shooting_mode
  * @defgroup   drivers_shooting_mode_interface  Interface
  * @brief      Shooting Mode module interface
  * @details    More information on page @ref shooting_mode_interface  
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
  * @param[in]     mode  New shooting mode.
  *
  * @return Automatic mode.
  */
void shootingModeIfMemoryWrite(ShootingMode_t mode);

/* End of drivers_shooting_mode_interface defgroup */
/** @}
  */


/* End of drivers_shooting_mode defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
