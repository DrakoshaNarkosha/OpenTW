#ifndef EXTI_H
#define EXTI_H

#include "EXTITypes.h"


namespace drv
{
  namespace periph
  {
    namespace exti
    {
      void setPCIE(PCIE_t pcie);
      
 
      void disable(Line_t line);

      void enable(Line_t line);
    }
  } 
}

#endif
