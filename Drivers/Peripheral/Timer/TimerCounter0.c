/**
  ******************************************************************************
  * @file    TimerCounter0.c
  * @brief   Timer/Counter 0 driver for 8-bit AVR MCUs (source)
  * @version 1.0.0  
  ******************************************************************************
  */


#include "TimerCounter0.h"


/** @ingroup    drivers_peripheral_timers_timer_0
  * @addtogroup drivers_peripheral_timers_timer_0_driver  Driver
  * @brief      Timer/Counter 0 driver
  * @details    More information on page @ref timer_counter_0
  * @{
  */

/* Set clock source for the timer. */
void tc0SetClock(TC0Clk_t source)
{
  TCCR0B &= ~((1 << CS00) | (1 << CS01) | (1 << CS02));
  /*        CS0[0:2] */
  TCCR0B |= source;
}

/* Set counter for the timer. */
void tc0SetCounter(uint8_t counter)
{
  TCNT0 = counter;
}

/* Set interrupt mode for the timer. */
void tc0SetIt(TC0It_t interrupt)
{
  TIMSK0 &= ~((1 << TOIE0) | (1 << OCIE0A) | (1 << OCIE0B));
  /*        TOIE0 | OCIE0A | OCIE0B*/
  TIMSK0 |= interrupt;
}

/* End of drivers_peripheral_timers_timer_0_driver defgroup */
/** @}
  */
