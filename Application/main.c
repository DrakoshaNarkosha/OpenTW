#include "main.h"


#include "Tick.h"

int main(void)
{
  asm("SEI");


  uint16_t var = 0;  
    
    
  tickStart();  
    
  while (1) 
  {
    
    if (var == 15)
    {
      
      while(1)
      {
        asm("NOP");
      }
    }
  }
}


void PCINT0_vect(void)
{
  
  asm("SEI");
}
  
void PCINT1_vect(void)
{

  asm("SEI");
}
