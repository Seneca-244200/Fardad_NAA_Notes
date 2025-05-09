#include <iostream>
using namespace std;
#include "NumIO.h"

int main() {
   int age;
   cout << "OOP244 NAA May09" << endl;
   cout << "How old are you?\n> ";
   if (getValidatedNum(&age, 18, 90)) {
      cout << "Hello and welcome, you are " << age << " years old and permitted to enter!" << endl;
   }
   else {
      cout << "Invalid age entry" << endl;
   }
   return 0;
}


