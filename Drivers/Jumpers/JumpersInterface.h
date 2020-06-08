/**
  ******************************************************************************
  * @file    JumpersInterface.h
  * @brief   Interface for Jumpers module (header)
  * @version 1.0.0
  *
  * @page driver_jumpers_interface  Jumpers driver interface
  *
  * @subsection Description
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
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef JUMPERS_INTERFACE_H
#define JUMPERS_INTERFACE_H


/** @addtogroup Drivers
  * @brief      Drivers for MCU peripheral (ADC, GPIO, EEPROM, etc.), peripheral modules (InelliFET, etc.), custom drivers (BattryMeasure, Magazine, etc.)
  * @{
  */


/** @ingroup    Drivers
  * @addtogroup Jumpers
  * @brief      Jumpers handler 
  * @details    More information on page @ref driver_jumpers  
  * @{
  */


/** @ingroup    Jumpers
  * @defgroup   Jumpers_Interface
  * @brief      Interface for the Jumpers module
  * @details    More information on page @ref driver_jumpers_interface  
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

/* End of Jumpers_Interface defgroup */
/** @}
  */


/* End of Jumpers defgroup */
/** @}
  */


/* End of Drivers defgroup */
/** @}
  */

#endif
