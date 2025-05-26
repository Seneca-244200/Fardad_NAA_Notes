#ifndef SENECA_ASSESSMENT_H
#define SENECA_ASSESSMENT_H
namespace seneca {
   class Assessment {
  // private: //is by default
      char m_title[128]; 
      int m_mark;
   public:
      void set( );
      void set(const char*title, int mark );
      void print()const;
   };



}
#endif // !SENECA_ASSESSMENT_H


