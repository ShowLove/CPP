#ifndef STRHASUNIQUECHARS
#define STRHASUNIQUECHARS

#include <cstring> 
#include <iostream>

#include "utils.h"

namespace codeQs
{

class StrHasUniqueChars
{
 public:

  StrHasUniqueChars(){}// Default constructor
  
  /* 1.2 Implement an algorithm to determine if a string has all unique 
   * characters. What if you cannot use additional data structures?*/

  /* Checks that a string has unique characters
   * @param takes an std string
   * @return returns true if has unique chars false otherwise
   */
  bool uniqueCharacters(const std::string str) const;

  ~StrHasUniqueChars(){}

 private:
};

} //codeQs end

#endif