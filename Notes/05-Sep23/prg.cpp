#include <iostream>
#include "Frame.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "05-Sep23 OOP244 NAA" << endl;
   Frame F;
   set(F,40, 10, '*');
   draw(F);
   return 0;
}