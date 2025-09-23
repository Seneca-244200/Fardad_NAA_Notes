#include <iostream>
#include "Frame.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "05-Sep23 OOP244 NAA" << endl;
   Frame F;
   F.set(40, 10, '*');
   F.m_fill = '+';
   F.draw();
   return 0;
}