#ifndef REPLACESUBSTRING
#define REPLACESUBSTRING

#include <iostream>

#include "utils.h"

namespace codeQs
{

class ReplaceSubString
{
 public:

  ReplaceSubString(){}// Default constructor

  /* 1.4 Write a method to replace all spaces in a string with'%20'. 
   * You may assume that the string has sufficient space at the end 
   * of the string to hold the additional
   * characters, and that you are given the "true" length of the string.*/

  /* Replaces subStr in str with bigger replaceStr without libs (i.e) std::string
   * @param str [out] original string
   * @param subStr sub string in str that you want to replace
   * @param replaceStr this string replaces subStr in str
   * @return void
   */
  void repStrWithBiggerSubStr(std::string& str, const std::string subStr, const std::string replaceStr) const;
  
  /* Replaces subStr in str with replaceStr. Uses std::string: replace, find
   * @param str [out] original string
   * @param subStr sub string in str that you want to replace
   * @param replaceStr this string replaces subStr in str
   * @return void
   */
  void repSubStr(std::string& str, const std::string subStr, const std::string replaceStr) const;

////////////////////////////////////////////HELPER FUNCTIONS////////////////////////////////////////////
  int numSubString(std::string& str, std::string subStr) const;


  ~ReplaceSubString(){}

 private:

////////////////////////////////////////////HELPER FUNCTIONS////////////////////////////////////////////


};

} //codeQs end

#endif