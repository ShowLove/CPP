#include "gtest/gtest.h"

#include "SortUtils.h" // for getArrayRandom, printArray
#include "SearchUtils.h"

#define PRINT_SEARCH_DEBUG 0

namespace utils
{

class SearchUtilsTest : public ::testing::Test {

 public:

  SearchUtilsTest() {}
  ~SearchUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  SortUtils sortUtilsObject; // for setup functions
  SearchUtils searchUtilsObj;
};

TEST_F(SearchUtilsTest, binarySearchTest){
  // get a random array and put a key in it to search for
  int arraySize = 10, upperBound = 100;
  int* array = sortUtilsObject.getArrayRandom(arraySize, upperBound);
  int key = rand() % upperBound;
  int keyExistsIndex = rand() % arraySize;

  // Insert key into array so that we can search for it
  array[keyExistsIndex] = key;

  // Binary search assumes a sorted array, so this will fail until sorted
  EXPECT_FALSE(searchUtilsObj.binarySearch(array, arraySize, key));
  sortUtilsObject.bubbleSort(array, arraySize);
  EXPECT_TRUE(searchUtilsObj.binarySearch(array, arraySize, key));

#if PRINT_SEARCH_DEBUG
  std::cout << "Key: " << key << std::endl;
  sortUtilsObject.printArray(array, arraySize);
#endif
   
  //Search an array that doesn't contain the key (key is not neg)
  int ints[] = { -10, -9, -8, -7, -6, -5, -4, -3, -2, -1 };

  //Binary search assumes a sorted array
  sortUtilsObject.bubbleSort(array, arraySize);
  EXPECT_FALSE(searchUtilsObj.binarySearch(ints, arraySize, key));

  // Clean your room
  delete[] array;
}

} // utils end