#pragma once
#ifndef SENECA_BOTTLE_H
#define SENECA_BOTTLE_H
#include <iostream>
namespace seneca {
   class Bottle {
      char m_content[81];
      unsigned int m_capacity;
      unsigned int m_curAmount;
   public:
      Bottle(const char* content = nullptr, unsigned int capacity = 250u);    
      Bottle& operator+=(unsigned int amount);
      Bottle& operator=(unsigned int amount);
      Bottle& operator=(const Bottle& other);
      std::ostream& display( std::ostream& ostr = std::cout );
   };

}
#endif // !SENECA_BOTTLE_H


