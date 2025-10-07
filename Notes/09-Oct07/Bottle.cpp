#include "Bottle.h"
namespace seneca {
   Bottle::Bottle( unsigned int capacity ) {
      m_capacity = capacity;
      m_curAmount = 0;
   }
   std::ostream& Bottle::display( std::ostream& ostr ) {
      return ostr << "Bottle(" << m_curAmount << "/" << m_capacity << ")";
   }
}