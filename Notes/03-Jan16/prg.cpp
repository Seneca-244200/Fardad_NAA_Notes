#include <iostream>
using namespace std;
int main( ) {
   char ch = 66;
   cout << ch << endl;
   for ( ch = 65; ch <= 'Z'; cout << ch, ch++ );
   cout << endl;
   return 0;
}