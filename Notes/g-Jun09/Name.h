#ifndef SENECA_NAME_H
#define SENECA_NAME_H
#include <iostream>
namespace seneca {
   const int MaxNameLength = 127;
   class Name {
      char m_value[MaxNameLength +1];
   public:
      Name( const char* value  = nullptr );

      Name& operator+=( const char* other );
      Name& operator+=( const Name& other );
      Name& operator++( int );
      Name& operator++( );
      Name operator+( const Name& other )const;
      std::ostream& display( std::ostream& ostr = std::cout )const;

      operator int( )const;


   };
   
}
#endif // !SENECA_NAME_H


