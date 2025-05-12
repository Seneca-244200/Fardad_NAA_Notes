#include <iostream>
#include "lines.h"
namespace seneca {
   void line( size_t len ) {
      for ( size_t i = 0; i < len; i++ ) {
         std::cout << "-";
      }
      std::cout << std::endl;
   }

   void line( size_t len, char fill ) {
      for ( size_t i = 0; i < len; i++ ) {
         std::cout << fill;
      }
      std::cout << std::endl;
   }


}