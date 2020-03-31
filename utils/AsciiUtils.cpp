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
  
} // utils end