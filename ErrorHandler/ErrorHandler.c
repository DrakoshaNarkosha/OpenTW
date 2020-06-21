/**
  ******************************************************************************
  * @file    ErrorHandler.h
  * @brief   Error read and write operations to EEPROM (source)
  * @version 1.0.0
  ******************************************************************************
  */


#include "interrupt.h"

#include "Errno.h"

#include "FETStandard.h"


void errAbort(Errno_t err)
{
  cli();
  

  while(1)
  {
    
  }  
}
