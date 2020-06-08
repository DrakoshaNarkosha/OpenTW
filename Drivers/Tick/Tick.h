/**
  ******************************************************************************
  * @file    Tick.h
  * @brief   Milliseconds tick implementation, based on Timer/Counter 0 (header)
  * @version 1.0.0  
  *
  * @page driver_tick  Tick driver
  *
  * @subsection Description
  *   Current module gives interrupt-based API for measuring one milliseconds 
  *   ticks, based on Timer/Counter 0.
  * 
  *   @note This module is calculated for systems with 1 MHz clock source.
  *
  *   @warning This module may calculate up to 65535 milliseconds, before
  *            overflow occurs.
  *
  *
  * @subsection Usage
  *   1. Set global interrupts flag to true.
  *   2. Call tickStart() to start Timer/Counter 0.
  *   3. Call tickGet() to get current time, starting from tickStart() call in 
  *      milliseconds.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef TICK_H
#define TICK_H


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
  * @defgroup   Tick
  * @brief      Tick (milliseconds) source 
  * @details    More information on page @ref driver_tick
  * @{
  */

/** Start ticks.
  *
  * Set time variable to 0, enable Timer/Counter 0 and start time calculating.
  *
  * @return None.
  */
void tickStart(void);

/** Stop ticks.
  *
  * Disable Timer/Counter 0 and stop time calculating.
  *
  * @return None.
  */
void tickStop(void);


/** Reset time variable.
  *
  * @return None.
  */
void tickReset(void);


/** Get number of ticks (milliseconds) since tickStart() call.
  *
  * @return None.
  */
uint16_t tickGet(void);

/** @}
  * End of Tick defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
