#include "ReplaceSubString.h"

namespace codeQs
{


void ReplaceSubString::repStrWithBiggerSubStr(std::string& str, const std::string subStr, const std::string replaceStr) const
{
  int numSubStr = numSubString(str, subStr);
  int oldLength = str.length();
  int newLength = 0;

  bool repStrIsBigger = (subStr.length() <= replaceStr.length()) ? true : false;
  // If substring is smaller than the replacment string, else 
  // we are replacing substring with a smaller string
  if(repStrIsBigger){
    int subStrIncreaseBy = replaceStr.length() - subStr.length();
    newLength = str.length() + (numSubStr * subStrIncreaseBy);
    str.resize(newLength);
  }
  else if (!repStrIsBigger){
    int subStrDecBy = replaceStr.length() - subStr.length();
    newLength = str.length() - (numSubStr * subStrDecBy);
    // decrese array size after allocated so as to not loose data 
  }

  int newL = newLength - 1; // -1 for zero index
  char* charStr = utils::opOnStdFromChar(str);

  for(int strIndx = (oldLength - 1); (strIndx >= 0); strIndx--)
  {
    std::string tmpSubStr(utils::getSubstr(charStr, strIndx, subStr.length()));
    if(utils::strsAreEq(tmpSubStr, subStr))
      for(int i = replaceStr.length() - 1; (i >= 0); i--)
        str[newL--] = replaceStr[i];
      
    else
      str[newL--] = str[strIndx];
  }

  // shorten size if replacment string is smaller than substring
  if (!repStrIsBigger)
    str.resize(newLength); 
}

void ReplaceSubString::repSubStr(std::string& str, const std::string subStr, const std::string replaceStr) const
{
  // Get the first occurrence
  size_t pos = str.find(subStr);
 
  // Repeat till end is reached
  while( pos != std::string::npos)
  {
    // Replace this occurrence of Sub String
    str.replace(pos, subStr.size(), replaceStr);
    // Get the next occurrence from the current position
    pos =str.find(subStr, pos + replaceStr.size());
  }

}

////////////////////////////////////////////HELPER FUNCTIONS////////////////////////////////////////////

int ReplaceSubString::numSubString( std::string& str, const std::string subStr) const
{
  int numSubStr = 0;
  char* charStr = utils::opOnStdFromChar(str);
  for(int strIndx = 0; strIndx < str.length(); strIndx++)
  {
    //Dont go over the array bounds
    if((strIndx + subStr.length()) > str.length())
      break;

    // convert char* to std::string and compare
    std::string tmpSubStr(utils::getSubstr(charStr, strIndx, subStr.length()));
    if(utils::strsAreEq(tmpSubStr, subStr))
      numSubStr++;
  }

  return numSubStr; 
}

  
} // codeQs end

// 407 234 0356