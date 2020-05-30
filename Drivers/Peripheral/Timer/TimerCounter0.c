#include "TimerCounter0.h"


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
