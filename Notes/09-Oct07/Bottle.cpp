#include "Bottle.h"
#include "cstr.h"
namespace seneca {
   Bottle::Bottle(const char* content, unsigned int capacity ) {
      if(content && content[0])
         strcpy(m_content, content, 80);
      else
         strcpy(m_content, "No Name", 80);
      m_capacity = capacity;
      m_curAmount = 0;
   }

   Bottle& Bottle::operator+=(unsigned int amount) {
      m_curAmount += amount;
      if (m_curAmount > m_capacity) {
         m_curAmount = m_capacity;
      }
      return *this;
   }
   Bottle& Bottle::operator=(unsigned int amount) {
      m_curAmount = amount;
      if (m_curAmount > m_capacity) {
         m_curAmount = m_capacity;
      }
      return *this;
   }
   Bottle& Bottle::operator=(const Bottle& other) {
      //return *this = other.m_curAmount;
      return operator=(other.m_curAmount);
   }
   std::ostream& Bottle::display( std::ostream& ostr ) {
      return ostr << m_content << " Bottle(" 
         << m_curAmount << "/" 
         << m_capacity << ")";
   }
}