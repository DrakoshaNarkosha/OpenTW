/**
  ******************************************************************************
  * @file    JumpersInterface.h
  * @brief   Interface for Jumpers module (header)
  * @version 1.0.0
  *
  * @page jumpers_interface  Jumpers interface
  *
  * @section jumpers_interface_description  Description
  *   Current module implements platform-related hardware functions for 
  *   operations with jumpers. This module must implement initialization and 
  *   GPIO read function for proper functioning.
  *
  *   @note Low logic level on GPIO line means, that jumper is soldered, so 
  *         read read function must return true. High logic level means, that 
  *         jumper is not soldered, so read function must return false. For
  *         this reasons input signal from GPIO line must be inverted.
  *
  *
  * @section jumpers_interface_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef JUMPERS_INTERFACE_H
#define JUMPERS_INTERFACE_H


/** @addtogroup drivers  Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    drivers
  * @addtogroup driver_jumpers  Jumpers
  * @brief      Jumpers handler 
  * @details    More information on page @ref jumpers
  * @{
  */


/** @ingroup    driver_jumpers
  * @defgroup   driver_jumpers_interface  Interface
  * @brief      Jumpers module interface
  * @details    More information on page @ref jumpers_interface
  * @{
  */

/** Initialize jumpers hardware, based on settings inside the JumpresSettings.h file.
  *
  * @return None.
  */
void jumpersIfInit(void);


/** Read state of the jumper on selected GPIO line.
  *
  * @param[in]     port  GPIO port.
  * @param[in]     pin   GPIO pin.
  *
  * @retval false  Jumper is not present.
  * @retval true   Jumper is present.
  */
bool jumpersIfRead(const void* port, uint8_t pin);

/* End of driver_jumpers_interface defgroup */
/** @}
  */


/* End of driver_jumpers defgroup */
/** @}
  */


/* End of drivers defgroup */
/** @}
  */

#endif
