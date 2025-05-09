#include <iostream>
using namespace std;
int getNum() {
   int number;
   cin >> number;
   return number;
}


int main() {
   int age;
   cout << "OOP244 NAA May09" << endl;
   cout << "How old are you?\n> ";
   age = getNum();
   cout << "You are " << age << " years old!" << endl;

   return 0;
}