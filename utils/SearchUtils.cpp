#include "SearchUtils.h"

namespace utils
{

bool SearchUtils::binarySearch(int *array, int arraySize, int key)
{
  int lo = 0, hi = arraySize - 1, mid;
  
  while (hi >= lo)
  {
    // Algebraically equivalent to mid = (hi + lo) / 2, but this is better
    mid = lo + (hi  - lo) / 2;
    
    // if the key is less than the value at mid, consider only the left half of the array
    if (key < array[mid])
      hi = mid - 1;
    
    // if the key is greater than the value at mid, consider only the right half of the array
    else if (key > array[mid])
      lo = mid + 1;
    
    // otherwise, we found the key!
    else
      return true;
  }
  
  return false;
}
  
} //utils end