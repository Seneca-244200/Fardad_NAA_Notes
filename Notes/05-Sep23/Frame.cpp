#include <iostream>
#include "Frame.h"
using namespace std;
namespace seneca {
   void Frame::set( int width, int height, char fill) {
      m_fill = fill;
      m_height = height;
      m_width = width;
   }
   void Frame::draw()const {
      for (int i = 0; i < m_width; i++) {
         cout << m_fill;
      }
      cout << endl;
      for (int h = 0; h < m_height - 2; h++) {
         cout << m_fill;
         for (int i = 0; i < m_width - 2; i++) {
            cout << " ";
         }
         cout << m_fill << endl;
      }
      for (int i = 0; i < m_width; i++) {
         cout << m_fill;
      }
      cout << endl;
   }


}