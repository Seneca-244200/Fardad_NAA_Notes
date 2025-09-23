#pragma once
#ifndef SENECA_FRAME_H
#define SENECA_FRAME_H
namespace seneca {
   struct Frame {
   private:
      int m_width;
      int m_height;
      char m_fill;
   public:
      void set( int width, 
         int height, char fill);
      void draw()const;// can't change the owner
   };


}
#endif // !SENECA_FRAME_H

