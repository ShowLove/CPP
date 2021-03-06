#include "AsciiUtils.h"

namespace utils
{

void AsciiUtils::printAsciiIntValueInfo() const
{
  int a = (int) 'a'; int A = (int) 'A';  
  int null = (int) '\0'; //First letter of ascii
  int tilde = (int) '~';  //Second to last letter in ascii DEL is last
  //26 letters in alphabet
  printf("lower case int rep of ascii a-z %d-%d \n", a, (a+26-1) );
  printf("Upper case int rep of ascii A-Z %d-%d \n", A, (A+26-1) );
  printf("int rep of chars range from %d-%d in ascii \n", null, tilde+1 ); //+1 for del
}

bool AsciiUtils::getAsciiInt(const char c, int& asciiIntValue) const
{
  // TODO: make a class for literals
  int asciiMin = (int) '\0'; //First letter of ascii
  int asciiMax = (int) ('~' + 1);  //Second to last letter in ascii DEL is last

  asciiIntValue = static_cast<int>(c);    

  if ((asciiIntValue < asciiMin) || (asciiIntValue > asciiMax))
    return false;

  return true;
}
  
} // utils end