#ifndef PCIE_TYPES_H
#define PCIE_TYPES_H

#include "iotn84a.h"


typedef enum
{
  PCIE_TRIGGER_LEVEL_LOW     = 0x00,
  PCIE_TRIGGER_EDGE_FALLING  = 0x02,
  PCIE_TRIGGER_EDGE_RISING   = 0x03,
  PCIE_TRIGGER_EDGE_BOTH     = 0x01,
}PCIETrigger_t;
      
typedef enum
{
  PCIE_LINE_0                = 0x0001,  
  PCIE_LINE_1                = 0x0002,
  PCIE_LINE_2                = 0x0004,
  PCIE_LINE_3                = 0x0008,
  PCIE_LINE_4                = 0x0010,
  PCIE_LINE_5                = 0x0020,
  PCIE_LINE_6                = 0x0040,
  PCIE_LINE_7                = 0x0080,
  PCIE_LINE_8                = 0x0100,
  PCIE_LINE_9                = 0x0200,
  PCIE_LINE_10               = 0x0400,
  PCIE_LINE_11               = 0x0800,
}PCIELine_t;
      
typedef enum
{
  PCIE_NONE             = 0x00,
  PCIE_0                = 0x10,
  PCIE_1                = 0x20,
  PCIE_0_1              = 0x30, 
}PCIE_t;

#endif
