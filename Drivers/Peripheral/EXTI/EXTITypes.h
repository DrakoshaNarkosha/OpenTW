#ifndef EXTI_TYPES_H
#define EXTI_TYPES_H

#include "iotn84a.h"


namespace drv
{
  namespace periph
  {
    namespace exti
    {
      enum Trigger_t
      {
        TRIGGER_LEVEL_LOW     = 0x00,
        TRIGGER_EDGE_FALLING  = 0x02,
        TRIGGER_EDGE_RISING   = 0x03,
        TRIGGER_EDGE_BOTH     = 0x01,
      };
      
      enum Line_t
      {
        LINE_0                = 0x0001,  
        LINE_1                = 0x0002,
        LINE_2                = 0x0004,
        LINE_3                = 0x0008,
        LINE_4                = 0x0010,
        LINE_5                = 0x0020,
        LINE_6                = 0x0040,
        LINE_7                = 0x0080,
        LINE_8                = 0x0100,
        LINE_9                = 0x0200,
        LINE_10               = 0x0400,
        LINE_11               = 0x0800,
      };
      
      enum PCIE_t
      {
        PCIE_NONE             = 0x00,
        PCIE_0                = 0x10,
        PCIE_1                = 0x20,
        PCIE_0_1              = 0x30, 
      };
    }
  }
}



#endif
