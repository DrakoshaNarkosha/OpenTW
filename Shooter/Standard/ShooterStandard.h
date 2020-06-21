/**
  ******************************************************************************
  * @file    ShooterStandard.h
  * @brief   Standard Shooter module (header)
  * @version 1.0.0  
  *
  * @page shooter_standard  Standard Shooter
  *
  * @section shooter_standard_description  Description
  *   Current module implements low-level interface for performing shoots, 
  *   based on the Standard FET module. @ref shooterStandardInit() function 
  *   call initialization of the Standard FET module. The 
  *   @ref shooterStandardShoot() function performs shoot using the standard FET
  *   module.
  *
  *
  * @section shooter_standard_usage  Usage
  *   1. Call shooterStandardInit().
  *   2. Call shooterStandardShoot() to perform one shoot.
  *
  *
  * @section shooter_standard_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef SHOOTER_STANDARD_H
#define SHOOTER_STANDARD_H

#include <stdbool.h>


/** @addtogroup shooter  Shooter
  * @brief      Shoot interface 
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter
  * @addtogroup shooter_standard  Standard
  * @brief      Standard shooter handle
  * @details    More information on page @ref shooter
  * @{
  */


/** @ingroup    shooter_standard
  * @defgroup   shooter_standard_driver  Driver
  * @brief      Standard shooter driver
  * @details    More information on page @ref shooter_standard_settings
  * @{
  */

/** Initialize standard shooter module.
  *
  * @retval false  Shooter driver initialization failed.
  * @retval true   Shooter driver initialization passed.
  */
bool shooterStandardInit(void);

/** Perform a single shoot.
  *
  * @retval false  Shoot successful.
  * @retval true   Shoot failed.
  */
bool shooterStandardShoot(void);

/* End of shooter_standard_driver defgroup */
/** @}
  */


/* End of shooter_standard defgroup */
/** @}
  */


/* End of shooter defgroup */
/** @}
  */

#endif
