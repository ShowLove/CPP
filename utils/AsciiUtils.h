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
  void printAsciiIntValueInfo() const;

  /* Get the int representation of an ascii character
   * @param c ascii char that you want int value for
   * @param asciiIntValue [out] the int representation of the ascii character
   * @return returns true if successfull, false otherwise
   */
  bool getAsciiInt(const char c, int& asciiIntValue) const;

  ~AsciiUtils(){}

 private:
};

} //fooNameSpace end

#endif