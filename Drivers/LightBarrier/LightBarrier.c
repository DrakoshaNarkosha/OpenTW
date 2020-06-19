/**
  ******************************************************************************
  * @file    LightBarrier.c
  * @brief   Light Barrier driver (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "LightBarrierSettings.h"
#include "LightBarrierInterface.h"
#include "LightBarrier.h"


/** @ingroup    driver_light_barrier
  * @addtogroup driver_light_barrier_driver  Driver
  * @brief      Light Barrier driver
  * @details    More information on page @ref light_barrier
  * @{
  */

volatile static bool g_state = false;  /*!< Variable to store current Light Barrier`s LED status in. */


/* Initialize related to the Light Barrier module peripheral modules. */
void lightBarrierInit(void)
{
  ligthBarrierIfInit();
  g_state = ligthBarrierIfRead();
}


/* Turn on the LED for the Light Barrier. */
void lightBarrierOn(void)
{
  ligthBarrierIfOn();
}

/* Turn off the LED for the Light Barrier. */
void lightBarrierOff(void)
{
  ligthBarrierIfOff();  
}


/* Read state of the light barrier photodiode. */
bool ligthBarrierRead(void)
{
  return g_state;
}


/* Interrupt handler for the Magazine module. */
void lightBarrierIrqHandler(void)
{
  g_state = ligthBarrierIfRead();
}

/* End of driver_light_barrier_driver defgroup */
/** @}
  */
