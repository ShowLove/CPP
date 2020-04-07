#include "ReverseStr.h"

namespace codeQs
{

void ReverseStr::revStr(std::string& str) const
{
  int middleIndx = (str.length() - 1) / 2; // SYNTAX: get middle index

  for(int i = 0; i <= middleIndx; i++) // make sure to remember the "="
  {
    char tmp = str[i];
    int endIndex = (str.length() - 1) - i; // -1 for 0 index
    // swap
    str[i] = str[endIndex];
    str[endIndex] = tmp;
  }
}

char *ReverseStr::reverseString(char *str, int length)
{
  int middleIndx = (length - 1) / 2; // fastest way to always get middle index for odd or even

  for(int i = 0; i <= middleIndx; i++)
  {
    utils::swapP( &str[i], &str[length - i - 1] );
  }

  return str;
}
  
} // codeQs end