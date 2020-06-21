/**
  ******************************************************************************
  * @file    ShooterStandard.c
  * @brief   Standard Shooter module (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "delay.h"

#include "FETStandard.h"
#include "LightBarrier.h"

#include "Tick.h"

#include "ShooterStandardSettings.h"
#include "ShooterStandard.h"


/** @ingroup    shooter_standard
  * @addtogroup shooter_standard_driver  Driver
  * @brief      Standard shooter driver
  * @details    More information on page @ref shooter_standard_settings
  * @{
  */

/** Provide starting conditions for a shoot.
  *
  * Turn on run a FET and a light barrier`s LED.
  *
  * @return None.
  */
static inline void start(void);

/** Shoot cycle.
  *
  * Wait for the sector gear cycle finish.
  *
  * @retval false  Maximum cycle time reached, shoot failed.
  * @retval true   Shoot successful.
  */
static inline bool cycle(void);

/** Stop motor.
  *
  * Turn off the run FET and light barrier`s LED.
  *
  * @return None.
  */
static inline void stop(void);

/** Perform brake operation.
  *
  * Turn on a brake FET, wait a while and turn it off.
  *
  * @return None.
  */
static inline void brake(void);


/* Initialize standard shooter module. */
bool shooterStandardInit(void)
{
  fetStandardInit();
  lightBarrierInit();

  return true;
}


/* Perform a single shoot. */
bool shooterStandardShoot(void)
{
  bool status;

  start();
  status = cycle();
  stop();

  if (status)
  {
    brake();
  }

  return status;
}


/* Provide starting conditions for a shoot. */
static inline void start(void)
{
  fetStandardPositiveOn();
  lightBarrierOn();
  DELAY_US(LIGHT_BARRIER_ON_US);  
}

/* Shoot cycle. */
static inline bool cycle(void)
{
  bool status     = true;
  bool photodiode = lightBarrierRead();

  tickStart();
  while (photodiode == lightBarrierRead())
  {
    if (tickGet() > MAX_CYCLE_MS)
    {
      status = false;
      break;
    }
  }
  tickStop();
  
  return status;
}

/* Stop motor. */
static inline void stop(void)
{
  fetStandardPositiveOff();
  lightBarrierOff();
  DELAY_US(MOSFET_OFF_US);    
}

/* Perform brake operation. */
static inline void brake(void)
{
  fetStandardNegativeOn();
  DELAY_MS(BRAKE_MS);
  fetStandardNegativeOff();
  DELAY_US(MOSFET_OFF_US);
}

/* End of shooter_standard_driver defgroup */
/** @}
  */
