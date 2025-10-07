#pragma once
#ifndef SENECA_BOTTLE_H
#define SENECA_BOTTLE_H
#include <iostream>
namespace seneca {
   class Bottle {
      unsigned int m_capacity;
      unsigned int m_curAmount;
   public:
      Bottle( unsigned int capacity = 250u );
      std::ostream& display( std::ostream& ostr = std::cout );
   };
}
#endif // !SENECA_BOTTLE_H


