#ifndef MODE_H
#define MODE_H

#include "ShootingModeTypes.h"


void shootingModeInit(void);


void shootingModeWrite(ShootingMode_t mode);

ShootingMode_t shootingModeRead(void);


void shootingModeIrqHandler(void);

#endif
