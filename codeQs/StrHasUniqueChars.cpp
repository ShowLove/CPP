#include "StrHasUniqueChars.h"

namespace codeQs
{

bool StrHasUniqueChars::uniqueCharacters(const std::string str) const
{
  // If length is greater than 265, some characters must have been repeated 
  if (str.length() > utils::MAX_CHAR) 
    return false; 

  int chars[utils::MAX_CHAR];
  memset(chars,0,sizeof(chars)); // SYNTAX: initialize int array to 0
  for (int i = 0; i < str.length(); i++) { // SYNTAX: std::string length
    if (chars[int(str[i])] == 1) // SYNTAX: turn std::string char into an int
      return false; 

    chars[int(str[i])] = 1; 
  } 
  return true;
}
  
} // codeQs end