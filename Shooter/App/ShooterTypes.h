/**
  ******************************************************************************
  * @file    ShooterTypes.h
  * @brief   Types for the Shooter module
  * @version 1.0.0  
  *
  * @page shooter_types  Application Shooter types
  *
  * @section shooter_types_description  Description
  *   Types for the Shooter driver.
  *
  *
  * @section shooter_types_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTER_TYPES_H
#define SHOOTER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


/** @addtogroup shooter  Shooter
  * @brief      Shoot interface 
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter
  * @addtogroup shooter_app  Application
  * @brief      Application shooter handle
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter_app
  * @defgroup   shooter_app_types  Types
  * @brief      Application shooter driver types
  * @details    More information on page @ref shooter_app_types
  * @{
  */

/**
  * Type of underlying shooter module.
  */
typedef enum
{
  SHOOTER_TYPE_STANDARD     = 0x00,   /*!< Standard shooting module (standard FET). */
  SHOOTER_TYPE_INTELLIGENT  = 0x01,   /*!< Intelligent shooting module (intelligent FET). */
}ShooterType_t;


/** Shot function typedef.
  *
  * This function must perform one single-shot.
  *
  * @retval false  Shot failed.
  * @retval true   Shot successful.
  */
typedef bool (*ShooterShootFunct_t)(void);

/* End of shooter_app_types defgroup */
/** @}
  */


/* End of shooter_app defgroup */
/** @}
  */


/* End of shooter defgroup */
/** @}
  */

#endif
