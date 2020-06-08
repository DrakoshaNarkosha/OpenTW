/**
  ******************************************************************************
  * @file    ShootingModeTypes.h
  * @brief   Types for Shooting Mode library
  * @version 1.0.0
  *
  * @page driver_shooting_mode_types  Types for the Shooting Mode library
  *
  * @subsection Description
  *   Types for the Shooting Mode library.
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.  
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_TYPES_H
#define SHOOTING_MODE_TYPES_H


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
  * @defgroup   Shooting_Mode_Types
  * @brief      Shooting mode driver types
  * @details    More information on page @ref driver_shooting_mode_types  
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

/* End of Shooting_Mode_Types defgroup */
/** @}
  */


/* End of Shooting_Mode defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
