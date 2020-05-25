#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "GPIO.h"


void magazineInit(void);


bool magazinePresent(void);


void magazineIrqHandler(void);

#endif
