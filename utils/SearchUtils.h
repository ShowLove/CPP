#ifndef SEARCHUTILS
#define SEARCHUTILS

#include <iostream>
#include <stdlib.h>

namespace utils
{

class SearchUtils
{
 public:
  SearchUtils(){}
  ~SearchUtils(){}
  
  /* Searches an array for the key
   * @param *array takes in an array of ints, you pass it the address
   * @param arraySize size of the array
   * @param key the key that you want to find
   * @return returns true if key is found in array, false otherwise
   */
  bool binarySearch(int *array, int arraySize, int key);

 private:

};


} // utils end

#endif 
