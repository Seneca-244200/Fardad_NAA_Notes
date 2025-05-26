#ifndef SENECA_ASSESSMENT_H
#define SENECA_ASSESSMENT_H
namespace seneca {
   struct Assessment {
      char m_title[128]; 
      int m_mark;
   };
   void set( Assessment& A );
   void print( const Assessment& A );



}
#endif // !SENECA_ASSESSMENT_H


