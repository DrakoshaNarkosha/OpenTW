#ifndef PINOUT_H
#define PINOUT_H

#include "GPIODef.h"
#include "PCITypes.h"


#ifdef HW_V1

#define PORT_JUMPER_1                      GPIOA
#define PIN_JUMPER_1                       GPIO_PIN_0

#define PORT_JUMPER_2                      GPIOA
#define PIN_JUMPER_2                       GPIO_PIN_1

#define PORT_BATTERY                       GPIOA
#define PIN_BATTERY                        GPIO_PIN_7

#define PORT_SIGNAL_MAGAZINE               GPIOA
#define PIN_SIGNAL_MAGAZINE                GPIO_PIN_5
#define PCI_LINE_SIGNAL_MAGAZINE           PCI_LINE_5

#define PORT_SIGNAL_TRIGGER                GPIOB
#define PIN_SIGNAL_TRIGGER                 GPIO_PIN_1
#define PCI_LINE_SIGNAL_TRIGGER            PCI_LINE_9

#define PORT_SIGNAL_MODE                   GPIOB
#define PIN_SIGNAL_MODE                    GPIO_PIN_2
#define PCI_LINE_SIGNAL_MODE               PCI_LINE_10

#define PORT_SIGNAL_LIGTH_BARIER_OPT        GPIOA
#define PIN_SIGNAL_LIGTH_BARIER_OPT         GPIO_PIN_3
#define PCI_LINE_SIGNAL_LIGTH_BARIER_OPT    PCI_LINE_3

#define PORT_LIGTH_BARIER_LED               GPIOA
#define PIN_LIGTH_BARIER_LED                GPIO_PIN_2

#define PORT_FET_POSITIVE_SCL               GPIOA
#define PIN_FET_POSITIVE_SCL                GPIO_PIN_4

#define PORT_FET_NEGATIVE_SDA               GPIOA
#define PIN_FET_NEGATIVE_SDA                GPIO_PIN_6

#define PORT_LED                            GPIOB
#define PIN_LED                             GPIO_PIN_0

#endif

#endif
