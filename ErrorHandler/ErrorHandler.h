/**
  ******************************************************************************
  * @file    ErrorHandler.h
  * @brief   Error read and write operations to EEPROM (header)
  * @version 1.0.0
  *
  * @page error_handler  Error Handler
  *
  * @section error_handler_description  Description
  *   Current module implements functions for read and write operations with
  *   error messages.
  *
  *
  * @section error_handler_usage  Usage
  *   Call errAbort() to deinitialize all the peripheral modules and save 
  *   error code to EEPROM memory on specified in configuration file address.
  *
  *
  * @section error_handler_changelog  Changelog
  *   - <b><em>Version 1.0.0</em></b>
  *     - Initial version.
  ******************************************************************************
  */


#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include "Errno.h"

void errAbort(Errno_t err);


#endif
