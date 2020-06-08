/**
  ******************************************************************************
  * @file    TriggerInterface.h
  * @brief   Interface for Trigger module (header)
  * @version 1.0.0
  *
  * @page driver_trigger_interface  Trigger driver interface
  *
  * @subsection Description
  *   Current module implements platform-related hardware functions for 
  *   operations with trigger. This module must implement initialization and 
  *   trigger GPIO read function for proper functioning.
  *
  *   @note Low logic level on trigger GPIO line means, that trigger is
  *         pressed, so read function must return true. For this reason input
  *         signal from GPIO line must be inverted.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef TRIGGER_INTERFACE_H
#define TRIGGER_INTERFACE_H


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Trigger
  * @brief      Trigger handler 
  * @details    More information on page @ref driver_trigger  
  * @{
  */


/** @ingroup    Trigger
  * @defgroup   Trigger_Interface
  * @brief      Interface for the Trigger module
  * @details    More information on page @ref driver_trigger_interface  
  * @{
  */

/** Initialize trigger hardware, based on settings inside the TriggerSettings.h file.
  *
  * @return None.
  */
void triggerIfInit(void);


/** Read state of the trigger.
  *
  * @retval false  Trigger is not pressed.
  * @retval true   Trigger is presed.
  */
bool triggerIfRead(void);

/** @}
  * End of Trigger_Interface defgroup.
  */


/** @}
  * End of Trigger defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
