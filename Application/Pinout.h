#ifndef PINOUT_H
#define PINOUT_H

#include "GPIODef.h"


#ifdef HW_V1

#define PORT_JUMPER_1           drv::periph::gpio::GPIOA
#define PIN_JUMPER_1            drv::periph::gpio::GPIO_PIN_0
#define MODE_JUMPER_1           drv::periph::gpio::MODE_INPUT
#define PULL_JUMPER_1           drv::periph::gpio::PULL_UP_ENABLE

#define PORT_JUMPER_2           drv::periph::gpio::GPIOA
#define PIN_JUMPER_2            drv::periph::gpio::GPIO_PIN_1
#define MODE_JUMPER_2           drv::periph::gpio::MODE_INPUT
#define PULL_JUMPER_2           drv::periph::gpio::PULL_UP_ENABLE

#define PORT_SIGNAL_MAGAZINE    drv::periph::gpio::GPIOA
#define PIN_SIGNAL_MAGAZINE     drv::periph::gpio::GPIO_PIN_5
#define MODE_SIGNAL_MAGAZINE    drv::periph::gpio::MODE_INPUT
#define PULL_SIGNAL_MAGAZINE    drv::periph::gpio::PULL_UP_ENABLE

#define PORT_SIGNAL_TRIGGER     drv::periph::gpio::GPIOB
#define PIN_SIGNAL_TRIGGER      drv::periph::gpio::GPIO_PIN_1
#define MODE_SIGNAL_TRIGGER     drv::periph::gpio::MODE_INPUT
#define PULL_SIGNAL_TRIGGER     drv::periph::gpio::PULL_UP_ENABLE

#define PORT_SIGNAL_FULL_AUTO   drv::periph::gpio::GPIOB
#define PIN_SIGNAL_FULL_AUTO    drv::periph::gpio::GPIO_PIN_2
#define MODE_SIGNAL_FULL_AUTO   drv::periph::gpio::MODE_INPUT
#define PULL_SIGNAL_FULL_AUTO   drv::periph::gpio::PULL_UP_ENABLE

#define PORT_LIGTH_BARIER_IN    drv::periph::gpio::GPIOA
#define PIN_LIGTH_BARIER_IN     drv::periph::gpio::GPIO_PIN_3
#define MODE_LIGTH_BARIER_IN    drv::periph::gpio::MODE_INPUT
#define PULL_LIGTH_BARIER_IN    drv::periph::gpio::PULL_UP_ENABLE

#define PORT_LIGTH_BARIER_OUT   drv::periph::gpio::GPIOA
#define PIN_LIGTH_BARIER_OUT    drv::periph::gpio::GPIO_PIN_2
#define MODE_LIGTH_BARIER_OUT   drv::periph::gpio::MODE_OUTPUT
#define PULL_LIGTH_BARIER_OUT   drv::periph::gpio::PULL_UP_DISABLE

#define PORT_FET_POSITIVE       drv::periph::gpio::GPIOA
#define PIN_FET_POSITIVE        drv::periph::gpio::GPIO_PIN_4
#define MODE_FET_POSITIVE       drv::periph::gpio::MODE_OUTPUT
#define PULL_FET_POSITIVE       drv::periph::gpio::PULL_UP_DISABLE

#define PORT_FET_NEGATIVE       drv::periph::gpio::GPIOA
#define PIN_FET_NEGATIVE        drv::periph::gpio::GPIO_PIN_6
#define MODE_FET_NEGATIVE       drv::periph::gpio::MODE_OUTPUT
#define PULL_FET_NEGATIVE       drv::periph::gpio::PULL_UP_DISABLE

#define PORT_LED                drv::periph::gpio::GPIOB
#define PIN_LED                 drv::periph::gpio::GPIO_PIN_0
#define MODE_LED                drv::periph::gpio::MODE_OUTPUT
#define PULL_LED                drv::periph::gpio::PULL_UP_DISABLE

#define PORT_BATTERY            drv::periph::gpio::GPIOA
#define PIN_BATTERY             drv::periph::gpio::GPIO_PIN_7       
#define MODE_BATTERY            drv::periph::gpio::MODE_OUTPUT
#define PULL_BATTERY            drv::periph::gpio::PULL_UP_DISABLE

#endif

#endif
