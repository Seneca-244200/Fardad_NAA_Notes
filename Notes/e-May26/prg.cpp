#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   Assessment MA;
   set( MA ); // set(Assessment& A = MA);
   print( MA );
   return 0;
}