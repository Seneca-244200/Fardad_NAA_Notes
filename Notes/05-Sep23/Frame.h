#pragma once
#ifndef SENECA_FRAME_H
#define SENECA_FRAME_H
namespace seneca {
   struct Frame {
      int m_width;
      int m_height;
      char m_fill;
   };
   void set(Frame& f, int width, int height, char fill);
   void draw(const Frame& f);

}
#endif // !SENECA_FRAME_H

