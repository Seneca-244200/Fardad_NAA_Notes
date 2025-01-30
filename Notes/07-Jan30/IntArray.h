#ifndef SENECA_INTARRAY_H
#define SENECA_INTARRAY_H
namespace seneca {
   class IntArray {
      int* m_data;
      size_t m_size;
   public:
      IntArray( );
      IntArray( size_t size );
      ~IntArray( );
      int& element( size_t index );
      size_t size( )const;

   };
}
#endif // !SENECA_INTARRAY_H

