#include "gtest/gtest.h"
#include "SortUtils.h"

#define PRINT_SORT_DEBUG 0

namespace utils
{

class SortUtilsTest : public ::testing::Test {

 public:

  SortUtilsTest() {}
  ~SortUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }

  SortUtils sortUtilsObject;
};

// Checks that qsort sorts an int array successfully 
TEST_F(SortUtilsTest, qsortTest){

    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;

    qsort(ints, size, sizeof(int), &SortUtils::mycmp);

#if PRINT_SORT_DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
    printf("\n");
#endif

    EXPECT_TRUE(ints[0] == INT_MIN);
    EXPECT_TRUE(ints[(size -1)] == 99);
}

// Checks the isSorted function to see if array is sorted
TEST_F(SortUtilsTest, isSortedTest){

    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;

    qsort(ints, size, sizeof(int), &SortUtils::mycmp);

#if PRINT_SORT_DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
    printf("\n");
#endif

    EXPECT_TRUE(sortUtilsObject.isSorted(ints, size));
}

// Checks the isSorted fails if last number is smaller than first
TEST_F(SortUtilsTest, isSortedTestFail){

    int ints[] = { 101, -2, 99, 0, -743, 2, INT_MIN};
    int size = sizeof ints / sizeof *ints;


#if PRINT_SORT_DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
    printf("\n");
#endif

    EXPECT_FALSE(sortUtilsObject.isSorted(ints, size));
    EXPECT_TRUE(ints[(size - 1)] < ints[0]);
}

// Test all the sort functions 
TEST_F(SortUtilsTest, allSortsTest){

  int arraySize = 10, upperBound = 100;
  int* array = sortUtilsObject.getArrayRandom(arraySize, upperBound);
#if PRINT_SORT_DEBUG
  sortUtilsObject.printArray(array, arraySize);
#endif

  //insertionSort test
  sortUtilsObject.insertionSort(array, arraySize);
  EXPECT_TRUE(sortUtilsObject.isSorted(array, arraySize));
  sortUtilsObject.randomizeArray(array, arraySize, upperBound);

  //selectionSort test
  sortUtilsObject.selectionSort(array, arraySize);
  EXPECT_TRUE(sortUtilsObject.isSorted(array, arraySize));
  sortUtilsObject.randomizeArray(array, arraySize, upperBound);

  //bubbleSort test
  sortUtilsObject.bubbleSort(array, arraySize);
  EXPECT_TRUE(sortUtilsObject.isSorted(array, arraySize));
  sortUtilsObject.randomizeArray(array, arraySize, upperBound);

  //MergeSort test
  sortUtilsObject.mergeSort(array, arraySize);
  EXPECT_TRUE(sortUtilsObject.isSorted(array, arraySize));
  sortUtilsObject.randomizeArray(array, arraySize, upperBound);

  // Clean your room
  delete[] array;
}

} // utils end