#include <iostream>
using namespace std;
int getNum();
bool getValidatedNum(int* num, int min, int max);

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


int getNum() {
   int number;
   cin >> number;
   return number;
}

bool getValidatedNum(int* num, int min, int max) {
   bool result = false;
   int number = getNum();
   if (number >= min && number <= max) {
      *num = number;
      result = true;
   }
   return result;
}
