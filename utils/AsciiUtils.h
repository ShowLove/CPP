#ifndef ASCIIUTILS
#define ASCIIUTILS

#include <iostream>

namespace utils
{

class AsciiUtils
{
 public:

  AsciiUtils(){}// Default constructor
  
  /* Prints ascii int representation info of a-z, A-Z, \0 - DEL
   * @return void
   */
  void printAsciiIntValueInfo();

  ~AsciiUtils(){}

 private:
};

} //fooNameSpace end

#endif