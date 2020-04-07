#ifndef REVERSESTR
#define REVERSESTR

#include <iostream>
#include "utils.h"

namespace codeQs
{

class ReverseStr
{
 public:

  ReverseStr(){}// Default constructor

  /* 1.2 Implement a function void reverse(char* str) in C or C++ 
   * which reverses a nullterminated string. */
  
  /* Reverse a string in place
   * @param str [out] string youw want to reverse
   * @return void
   */ 
  void revStr(std::string& str) const;

  /* Reverse a string in place using char* pointers
   * @param str [out] string youw want to reverse
   * @return void
   */ 
  char* reverseString(char *str, int length);

  ~ReverseStr(){}

 private:
};

} //codeQs end

#endif