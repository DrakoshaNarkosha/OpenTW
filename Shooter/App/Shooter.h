/**
  ******************************************************************************
  * @file    Shooter.h
  * @brief   Shooter module (header)
  * @version 1.0.0  
  *
  * @page shooter Application Shooter
  *
  * @section shooter_description  Description
  *   Current module implements high-level interface for performing shoots, 
  *   based on different shooting (FET) modules. @ref shooterInit() function 
  *   call initialization of selected module and save shoot function to global
  *   function pointer. For each @ref shoot() function call this module will
  *   call underlying shoot function, which may be reassigned using 
  *   @ref shooterInit() one.
  *
  *
  * @section shooter_usage  Usage
  *   1. Call shooterInit().
  *   2. Call shoot() to perform one shoot.
  *
  *
  * @section shooter_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTER_H
#define SHOOTER_H

#include "ShooterTypes.h"


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
  * @defgroup   shooter_app_driver  Driver
  * @brief      Application shooter driver
  * @details    More information on page @ref shooter
  * @{
  */

/** Initialize shooter module.
  *
  * @param[in]     type  Shooter type to use.
  *
  * @retval false  Underlying shooter driver initialization failed.
  * @retval true   Underlying shooter driver initialization passed.
  */
bool shooterInit(ShooterType_t type);

/** Perform a single shoot.
  *
  * @retval false  Shoot successful.
  * @retval true   Shoot failed.
  */
bool shoot(void);

/* End of shooter_app_driver defgroup */
/** @}
  */


/* End of shooter_driver defgroup */
/** @}
  */


/* End of shooter defgroup */
/** @}
  */

#endif
