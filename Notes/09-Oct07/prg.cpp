#include <iostream>
#include "Bottle.h"
using namespace std;
using namespace seneca;
int main() {
   Bottle B = "B";
   Bottle C("C", 500);
   C = 300;
   C.display() << endl;
   B = 100;
   cout << "09-Oct07 OOP244 NAA" << endl;
   B.display( ) << endl;
   B += 120;
   B.display() << endl;
   B += 200;
   B.display() << endl;
   C = B;
   C.display();
   return 0;
}