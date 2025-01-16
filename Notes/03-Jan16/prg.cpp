#include <iostream>
using namespace std;
void bar( int len = 79, char fill = '-' );
int main( ) {
   bar( 20, '=' );
   bar( 40 );
   bar( );
   bar( 'A' );
   return 0;
}
void bar( int len, char fill ) {
   for ( int i = 0; i < len; cout << fill, i++ );
   cout << endl;
}
