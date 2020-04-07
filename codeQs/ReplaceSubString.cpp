#include "ReplaceSubString.h"

namespace codeQs
{

void ReplaceSubString::repSubStr(std::string& str, const std::string subStr, const std::string replaceStr) const
{
  // Get the first occurrence
  size_t pos = str.find(subStr);
 
  // Repeat till end is reached
  while( pos != std::string::npos)
  {
    // Replace this occurrence of Sub String
    str.replace(pos, subStr.size(), replaceStr);
    // Get the next occurrence from the current position
    pos =str.find(subStr, pos + replaceStr.size());
  }

}
  
} // codeQs end