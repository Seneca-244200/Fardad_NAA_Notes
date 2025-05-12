#include <iostream>
#include "lines.h"
using namespace std;
namespace seneca {
   void line( size_t len ) {
      for ( size_t i = 0; i < len; i++ ) {
         cout << "-";
      }
      cout << endl;
   }

   void line( size_t len, char fill ) {
      for ( size_t i = 0; i < len; i++ ) {
         cout << fill;
      }
      cout << endl;
   }


}