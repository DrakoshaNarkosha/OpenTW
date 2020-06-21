/**
  ******************************************************************************
  * @file    Shooter.c
  * @brief   Shooter module (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "ShooterStandard.h"

#include "Shooter.h"


/** @ingroup    shooter_app
  * @addtogroup shooter_app_driver  Driver
  * @brief      Application shooter driver
  * @details    More information on page @ref shooter
  * @{
  */

static ShooterShootFunct_t  shootFunct = NULL;  /*!< Shoot function pointer. */


/* Initialize shooter module. */
bool shooterInit(ShooterType_t type)
{
  bool status = false;
  
  switch(type)
  {
    case SHOOTER_TYPE_STANDARD:
    {
      status      = shooterStandardInit();
      shootFunct  = shooterStandardShoot;
    }
    break;
    
    case SHOOTER_TYPE_INTELLIGENT:
    {
      
    }
    break;
  }
  
  return status;
}

/* Perform a single shoot. */
bool shoot(void)
{
  return shootFunct();
}

/* End of shooter_app_driver defgroup */
/** @}
  */
