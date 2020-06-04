/**
  ******************************************************************************
  * @file    ShootingModeTypes.h
  * @brief   Types for Shooting Mode module
  * @version 1.0.0
  ******************************************************************************
  */


#ifndef SHOOTING_MODE_TYPES_H
#define SHOOTING_MODE_TYPES_H


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Peripheral
  * @brief      Peripheral drivers (ADC, GPIO, EEPROM, etc.)
  * @{
  */


/** @ingroup    Peripheral
  * @addtogroup Shooting_Mode
  * @brief      Shooting Mode handler 
  * @{
  */


/** @ingroup    Peripheral
  * @defgroup   Shooting_Mode_Types
  * @brief      Shooting mode driver types
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

/** @}
  * End of Shooting_Mode_Types defgroup.
  */

/** @}
  * End of Shooting_Mode defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
