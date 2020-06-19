/**
  ******************************************************************************
  * @file    TriggerInterface.h
  * @brief   Interface for Trigger driver (header)
  * @version 1.1.0
  *
  * @page trigger_interface  Trigger interface
  *
  * @section trigger_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with trigger. This module must implement initialization and 
  *   trigger GPIO read function for proper functioning.
  *
  *   @note Low logic level on trigger GPIO line means, that trigger is
  *         pressed, so read function must return true. For this reason input
  *         signal from GPIO line must be inverted.
  *
  *
  * @section trigger_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  *   - <b><em>Version 1.1.0</em></b>
  *     - Added PCI line interrupt enabling.
  ******************************************************************************
  */


#ifndef TRIGGER_INTERFACE_H
#define TRIGGER_INTERFACE_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup drivers_trigger  Trigger
  * @brief      Fire trigger handler
  * @details    More information on page @ref trigger  
  * @{
  */


/** @ingroup    drivers_trigger
  * @defgroup   drivers_trigger_interface  Interface
  * @brief      Fire trigger module interface
  * @details    More information on page @ref trigger_interface  
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

/* End of drivers_trigger_interface defgroup */
/** @}
  */


/* End of drivers_trigger defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
