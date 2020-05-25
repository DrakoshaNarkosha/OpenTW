#ifndef PCIE_H
#define PCIE_H

#include "PCIETypes.h"


void pcieSetMode(PCIE_t pcie);
      
 
void pcieLineDisable(uint16_t lines);

void pcieLineEnable(uint16_t lines);
      
#endif
