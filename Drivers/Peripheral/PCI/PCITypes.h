/**
  ******************************************************************************
  * @file    PCITypes.h
  * @brief   Types for PCI (pin change interrupt) library
  * @version 1.0.0  
  *
  * @page driver_peripheral_pci_types  Types for PCI library
  *
  * @subsection Description
  *   Types for PCI driver library.
  *
  *
  * @subsection Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef PCI_TYPES_H
#define PCI_TYPES_H

#include "iotn84a.h"



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
  * @addtogroup PCI
  * @brief      PCI (pin change interrupt) driver
  * @details    More information on page @ref driver_peripheral_pci  
  * @{
  */


/** @ingroup    PCI
  * @defgroup   PCI_Types
  * @brief      Types for PCI driver
  * @details    More information on page @ref driver_peripheral_pci  
  * @{
  */

/**
  * Pin change interrupt line.
  */      
typedef enum
{
  PCI_LINE_0                = 0x0001,   /*!< Pin change interrupt line 0. */
  PCI_LINE_1                = 0x0002,   /*!< Pin change interrupt line 1. */
  PCI_LINE_2                = 0x0004,   /*!< Pin change interrupt line 2. */
  PCI_LINE_3                = 0x0008,   /*!< Pin change interrupt line 3. */
  PCI_LINE_4                = 0x0010,   /*!< Pin change interrupt line 4. */
  PCI_LINE_5                = 0x0020,   /*!< Pin change interrupt line 5. */
  PCI_LINE_6                = 0x0040,   /*!< Pin change interrupt line 6. */
  PCI_LINE_7                = 0x0080,   /*!< Pin change interrupt line 7. */
  PCI_LINE_8                = 0x0100,   /*!< Pin change interrupt line 8. */
  PCI_LINE_9                = 0x0200,   /*!< Pin change interrupt line 9. */
  PCI_LINE_10               = 0x0400,   /*!< Pin change interrupt line 10. */
  PCI_LINE_11               = 0x0800,   /*!< Pin change interrupt line 11. */
}PCILine_t;

/**
  * Pin change interrupt permissions.
  */            
typedef enum
{
  PCI_NONE             = 0x00,          /*!< Pin change interrupts are forbidden. */
  PCI_0                = 0x10,          /*!< Pin change interrupt 0 is allowed. */
  PCI_1                = 0x20,          /*!< Pin change interrupt 1 is allowed. */
  PCI_0_1              = 0x30,          /*!< Pin change interrupt 0 and 1 are allowed.*/
}PCI_t;

/** @}
  * End of PCI_Types defgroup.
  */


/** @}
  * End of PCI defgroup.
  */


/** @}
  * End of Peripheral defgroup.
  */


/** @}
  * End of Drivers defgroup.
  */

#endif
