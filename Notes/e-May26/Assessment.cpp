#include <iostream>
#include "cstr.h"
#include "Assessment.h"
using namespace std;
namespace seneca {
    void set( Assessment& A ) {
       cout << "Assessment Name\n> ";
       cin >> A.m_title;
       cout << "Assessment Mark\n> ";
       cin >> A.m_mark;
    }

    void print( const Assessment& A ) {
       cout << A.m_title << "(" << A.m_mark << ")" << endl;
    }

}