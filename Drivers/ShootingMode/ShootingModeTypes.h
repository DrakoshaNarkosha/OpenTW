/**
  ******************************************************************************
  * @file    ShootingModeTypes.h
  * @brief   Types for the Shooting Mode module
  * @version 1.0.0
  *
  * @page shooting_mode_types  Shooting Mode types
  *
  * @section shooting_mode_types_description  Description
  *   Types for the Shooting Mode module.
  *
  *
  * @section shooting_mode_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_TYPES_H
#define SHOOTING_MODE_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


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


/** @ingroup    driver_shooting_mode
  * @addtogroup driver_shooting_mode_types  Types
  * @brief      Shooting Mode module types
  * @details    More information on page @ref shooting_mode_types
  * @{
  */

/**
  * Shooting modes.
  */
typedef enum
{
  SHOOTING_MODE_SEMI      = 0x00, /*!< Semi mode. */
  SHOOTING_MODE_AUTO      = 0x01, /*!< Full auto mode.*/
  SHOOTING_MODE_BURST     = 0x02, /*!< 3-burst mode. */
}ShootingMode_t;

/* End of driver_shooting_mode_types defgroup */
/** @}
  */


/* End of driver_shooting_mode defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
