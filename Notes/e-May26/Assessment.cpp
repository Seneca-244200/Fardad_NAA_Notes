#include <iostream>
#include "cstr.h"
#include "Assessment.h"
using namespace std;
namespace seneca {
    void Assessment::set(  ) {
       cout << "Assessment Name\n> ";
       cin.getline( m_title, 128 );
       cout << "Assessment Mark\n> ";
       cin >> m_mark;
    }

    void Assessment::set( const char* title, int mark ) {
       strcpy( m_title, title );
       m_mark = mark;
    }

    void Assessment::print(  )const {
    //   m_mark = 123;
       cout << m_title << "(" << m_mark << ")" << endl;
    }

}