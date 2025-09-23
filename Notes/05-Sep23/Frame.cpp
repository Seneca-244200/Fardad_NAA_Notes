#include <iostream>
#include "Frame.h"
using namespace std;
namespace seneca {
   void set(Frame& f, int width, int height, char fill) {
      f.m_fill = fill;
      f.m_height = height;
      f.m_width = width;
   }
   void draw(const Frame& f) {
      for (int i = 0; i < f.m_width; i++) {
         cout << f.m_fill;
      }
      cout << endl;
      for (int h = 0; h < f.m_height - 2; h++) {
         cout << f.m_fill;
         for (int i = 0; i < f.m_width - 2; i++) {
            cout << " ";
         }
         cout << f.m_fill << endl;
      }
      for (int i = 0; i < f.m_width; i++) {
         cout << f.m_fill;
      }
      cout << endl;
   }


}