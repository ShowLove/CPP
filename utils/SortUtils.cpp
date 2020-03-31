#include "SortUtils.h"

namespace utils
{

bool SortUtils::SimpleIsSorted(const int *array, int size) {

  if (size == 0)
    return true;   // Edge case

  if( *(array + (size - 1)) < *array)
    return false;  // Last number is smaller than first, this is not sorted

  int previousValue= *array; // initialize previousValue
  while (size){ // check for assendig values until size values are checked

    if (*array < previousValue)
      return false;

    previousValue= *array;
    // Iterate up the array, decrease size because we iterated up one
    ++array; --size;
  }

  return true;
}
  
} // utils end