/**
  ******************************************************************************
  * @file    Tick.ñ
  * @brief   Milliseconds tick implementation, based on Timer/Counter 0 (source) 
  * @version 1.0.0  
  ******************************************************************************
  */


#include "interrupt.h"

#include "TimerCounter0.h"

#include "Tick.h"


/** @ingroup    Peripheral
  * @addtogroup Tick
  * @brief      Tick (milliseconds) source 
  * @details    More information on page @ref driver_tick
  * @{
  */

/*!< Counter value to load into counter register for 1 milliseconds ticks with 1 MHz clock. */
#define COUNTER 0x82


/*!< Variable, to store number of ticks (milliseconds) in. */
volatile static uint16_t g_time;


/* Start ticks. */
void tickStart(void)
{
  g_time = 0;
  tc0SetCounter(COUNTER);
  tc0SetIt(TC0_IT_OVERFLOW);
  tc0SetClock(TC0_CLK_SOURCE_PRESCALLER_8);
}

/* Stop ticks. */
void tickStop(void)
{
  tc0SetClock(TC0_CLK_SOURCE_OFF);  
  tc0SetIt(TC0_IT_NONE);
  tc0SetCounter(0x00);
}


/* Reset time variable. */
void tickReset(void)
{
  g_time = 0;
}


/* Get number of ticks (milliseconds) since tickStart() call. */
uint16_t tickGet(void)
{
  return g_time;
}


/** Timer/Counter 0 interrupt vector.
  *
  * @return None.
  */
ISR(TIM0_OVF_vect)
{
  g_time++;
  tc0SetCounter(COUNTER);
}

/** @}
  * End of Tick defgroup.
  */
