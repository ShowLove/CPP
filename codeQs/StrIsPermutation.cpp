#include "StrIsPermutation.h"

namespace codeQs
{

bool StrIsPermutation::isPermuttaion2(const std::string str1, const std::string str2) const
{
  if(str1.length() != str2.length())
    return false;

  int asciiAr[utils::MAX_CHAR];
  memset(asciiAr,0,sizeof(asciiAr));
  // Increase value at index (int rep of char) str1
  // Decrease value at index (int rep of char) str2
  // int representation of char is array index
  for(int i = 0; i < str1.length(); i++)
  {
    asciiAr[static_cast<int>(str1[i])]++;
    asciiAr[static_cast<int>(str2[i])]--;
  } 

  // If strings are permutations of each other all index should have o
  for(int i = 0; i < str1.length(); i++)
    if(asciiAr[static_cast<int>(str1[i])] > 0)
      return false;

  return true;
}
 

bool StrIsPermutation::isPermuttaion(const std::string str1, const std::string str2) const
{
  if(str1.length() != str2.length())
    return false;

  int asciiAr[utils::MAX_CHAR];
  memset(asciiAr,0,sizeof(asciiAr));
  // Increase value at index (int rep of char) str1
  // int representation of char is array index
  for(int i = 0; i < str1.length(); i++)
    asciiAr[static_cast<int>(str1[i])]++;

  // Decrease value at index (int rep of char) str2
  for(int i = 0; i < str1.length(); i++)
    asciiAr[static_cast<int>(str2[i])]--;

  // If strings are permutations of each other all index should have o
  for(int i = 0; i < str1.length(); i++)
    if(asciiAr[static_cast<int>(str1[i])] > 0)
      return false;

  return true;
}
  
} // codeQs end