#include "PCIE.h"


void pcieSetMode(PCIE_t pcie)
{
  GIMSK &= ~((1 << PCIE0) | (1 << PCIE1));
  GIMSK |= pcie;   
}


void pcieLineDisable(uint16_t lines)
{
  PCMSK0 &= ~(lines & 0xFF);
  PCMSK1 &= ~(lines >> 8);  
}

void pcieLineEnable(uint16_t lines)
{
  PCMSK0 |= (lines & 0xFF);
  PCMSK1 |= (lines >> 8); 
}
