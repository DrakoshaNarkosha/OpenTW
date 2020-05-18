#include "GPIO.h"


using namespace drv;
using namespace periph;


GPIO::GPIO(const gpio::Init_t& init) :
  m_port(init.port),
  m_pin(init.pin)
{
  *m_port.DDR  |= (init.mode & m_pin); 
  *m_port.PORT |= (init.pullUp & m_pin);
}

GPIO::~GPIO()
{
  *m_port.DDR  &= ~m_pin;
  *m_port.PORT &= ~m_pin;  
}


void GPIO::low()
{
  *m_port.PORT &= ~m_pin;
}

void GPIO::high()
{
  *m_port.PORT |= m_pin;  
}

        
bool GPIO::read()
{
  return *m_port.PIN & m_pin;  
}
