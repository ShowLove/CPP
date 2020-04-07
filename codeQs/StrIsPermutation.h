#ifndef STRISPERMUTATION
#define STRISPERMUTATION

#include <iostream>
#include "utils.h"

namespace codeQs
{

class StrIsPermutation
{
 public:

  StrIsPermutation(){}// Default constructor

  /*Given two strings, write a method to decide if one is a permutation of the other.*/
  
  /* Check that str1 is a permutation of str2
   * @param str1 string to be checked
   * @param str2 string to be checked 
   * @return true if it is a permutation, false otherwise
   */
  bool isPermuttaion(const std::string str1, const std::string str2) const;

  /* Check that str1 is a permutation of str2, using 2 for loops
   * @param str1 string to be checked
   * @param str2 string to be checked 
   * @return true if it is a permutation, false otherwise
   */
  bool isPermuttaion2(const std::string str1, const std::string str2) const;

  ~StrIsPermutation(){}

 private:
};

} //codeQs end

#endif