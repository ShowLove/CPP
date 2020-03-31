#ifndef FOOHEADER
#define FOOHEADER

#include <iostream>
#include <stdlib.h> // qsort

#define INT_SIZE sizeof(int)

namespace utils
{

class SortUtils
{
 public:

  SortUtils() {}// Default constructor

  /* comparison function used in qsort. qsort(array, LEN, sizeof(int), mycmp)
   * since we you cannot pass C++ member function pointers to functions 
   * expecting C function pointers so we use a static class member function
   * The function must not modify the objects passed to it and must 
   * return consistent results when called for the same objects, 
   * regardless of their positions in the array.
   * used to call qsort(array, LEN, sizeof(int), mycmp);
   * @param a first argument for comparison
   * @param b second argument for comparison
   * @return negative int if first argument < second argument
   *         positive int if first argument > second argument
   *         zero if the arguments are equal
   */
  static int mycmp(const void* a, const void* b)
  {     
    //return (*(int *)a - *(int *)b); // C style 
    return *static_cast<const int*>(a) - *static_cast<const int*>(b);
  }

  ~SortUtils(){}

 private:

  void fooPrivateFunction(); 
};

} //utils end

#endif