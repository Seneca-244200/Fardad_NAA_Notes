#include "Title.h"
#include "cstr.h"
namespace seneca {
   Title::Title(const char* content) {
      if (content && content[0]) {// content exists and has data
         m_content = new char[strlen(content) + 1];
         strcpy(m_content, content);
      }
      else {
         m_content = nullptr;
      }
   }
   Title::~Title() {
      delete[] m_content;
   }

   bool Title::isValid() const {
      return bool(m_content);
   }

}