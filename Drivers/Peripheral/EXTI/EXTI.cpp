#include "EXTI.h"


using namespace drv;
using namespace periph;
using namespace exti;


void exti::setPCIE(PCIE_t pcie)
{
  GIMSK &= ~((1 << PCIE0) | (1 << PCIE1));  // Reset bits 4, 5 (PCIE0, PCIE1)
  GIMSK |= pcie;  // Set bits 4, 5 (PCIE0, PCIE1)
}  
      

void exti::disable(Line_t line)
{
  PCMSK0 &= ~(line & 0xFF);
  PCMSK1 &= ~(line >> 8);  
}

void exti::enable(Line_t line)
{
  PCMSK0 |= (line & 0xFF);
  PCMSK1 |= (line >> 8);
}
