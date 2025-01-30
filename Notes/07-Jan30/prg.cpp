#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;



int main( ) {
   cout << "OOP244NAA, Jan 30" << endl;
   IntArray A;
   IntArray B( 10 );
   size_t i = 0;
   cout << "B array has " << B.size( ) << " elements" << endl;
   
   B.element( 5 ) = 500;
   cout << B.element( 5 ) << endl;

   for ( i = 0; i < 12; i++ ) {
      B.element( i ) = (i + 1) * 10;
   }

   for ( i = 0; i < 12; i++ ) {
      cout << B.element( i ) << " ";
   }
   cout << endl;

   return 0;
}