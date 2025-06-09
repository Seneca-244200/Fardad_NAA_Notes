#include "cstr.h"
#include "Name.h"

namespace seneca {
   Name::Name( const char* value ) {
      m_value[0] = char( 0 );
      if ( value ) {
         seneca::strcpy( m_value, value, MaxNameLength );
      }

   }
   // Todo: make this safe:
   Name& Name::operator+=( const char* value ) {
      seneca::strcat( m_value, value );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator+=( const Name& other ) {
      seneca::strcat( m_value, other.m_value );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator++( int ) {
      seneca::strcat( m_value, " " );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator++( ) {
      char temp[128] = " ";
      strcat( temp, m_value );
      strcpy( m_value, temp );
      return *this;
   }

   Name Name::operator+( const Name& other ) const {
      Name Both = *this;
      return Both += other;
   }

   std::ostream& Name::display( std::ostream& ostr )const {
      return ostr << m_value;
   }

   Name::operator int( ) const {
      return strlen( m_value );
   }

}