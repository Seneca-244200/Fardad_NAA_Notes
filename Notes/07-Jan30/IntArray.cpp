#include "IntArray.h"
namespace seneca {   

   IntArray::IntArray( ) {
      // safe emtpy state
      m_data = nullptr;
      m_size = 0;
   }

   IntArray::IntArray( size_t size ) {
      m_data = new int[size];
      m_size = size;
   }


   size_t IntArray::size( )const {
      return m_size;
   }
   IntArray::~IntArray( ) {
      delete[] m_data;
   }
   int& IntArray::element( size_t index ) { // Fardad doesn't like this
      if ( m_data != nullptr ) {
         return m_data[index % m_size];
      }
      else {
         return m_garbage;
      }
   }

   const int& IntArray::element( size_t index )const { // He likes this one!!!!
      int* ret = &m_garbage;
      if ( m_data != nullptr ) {
         ret =  &m_data[index % m_size];
      }
      return *ret;
   }

}
