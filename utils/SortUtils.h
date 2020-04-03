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

    ~SortUtils(){}

  /* see:
    http://p-nand-q.com/programming/cplusplus/using_member_functions_with_c_function_pointers.html
    for in-depth info on qsort Using C++ Member Functions for C Function Pointers
    see:
    https://en.cppreference.com/w/c/algorithm/qsort
    for in-depth info on qsort
  */

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
    int arg1 = *static_cast<const int*>(a);
    int arg2 = *static_cast<const int*>(b);
    //return (*(int *)a - *(int *)b); // C style (error, see below)
    //return *static_cast<const int*>(a) - *static_cast<const int*>(b); FAILS with INT_MIN
    return (arg1 > arg2) - (arg1 < arg2);
  }

  /* @param a first copmarison parameter
   * @param b second comparison parameter
   * @return returns the smaller between a and b, if they are eqaul it returns b
   */ 
  int min(int a, int b){ return (a < b) ? a : b; }

  /*
   * Checks to see if an array of ints is sorted
   * @param *ar int pointer to an array
   * @param the size of the array
   * @param returns true if it is sorted, false otherwise
   */
  bool isSorted(const int* array, int size);

  /*************************************************
   * my sort functions
   *************************************************/

  void insertionSort(int *array, int arraySize);
  void selectionSort(int *array, int arraySize); 
  void bubbleSort(int *array, int arraySize);
  void mergeSort(int *pInArray, int nSize);
  void merge(int *pInArray, int nLeftSize, int nRightSize);
  ////////HELPER FUNCTIONS//////////////
  void swap(int *array, int index );
  void printArray(int *array, int arraySize);
  void rePolute(int *array, int arraySize);
  int *getArrayRandom(int arraySize, int upperBounds); // user must: delet[] array
  void randomizeArray(int* array, int arraySize, int upperBounds);
 private:

};

} //utils end

#endif