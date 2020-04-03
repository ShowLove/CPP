#ifndef CSTRINGUTILS
#define CSTRINGUTILS

#include <iostream>

#include "UtilConst.h" // for DEFAULT_STR_SIZE

namespace utils
{

class StringUtilsC
{
 public:

  StringUtilsC() {}// Default constructor  
  ~StringUtilsC(){}

  /* Takes a pointer to a string and returns the length as an int
   * @param *str pointer to a string
   * @return returns the lenght of the string as an int
   */
  int strLength(char *str) const;

  /* Feed chars to a string via getchar realocating size via realloc dynamically.
   * It's up to the user to delete the memory alocated.
   * @param initialSize default parameter indicating the size of the string in chars
   * @return returns a dynamically allocated char* string, NULL if unsuccessful
   */
  char *prompAndAlocStringDynamically(const int initialSize = UtilConst::DEFAULT_STR_SIZE) const;
  
  /*
   * TODO
   */ 
  void swapP( char *a, char *b );

  /*
   * TODO
   */ 
  char *reverseString(char *str);

  /*
   * TODO
   */ 
  bool stringIsReverseString(char *str1, char *str2);


 private:

};

} //utils end

#endif