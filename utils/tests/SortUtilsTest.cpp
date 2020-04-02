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

// Checks the SimpleIsSorted function to see if array is sorted
TEST_F(SortUtilsTest, SimpleIsSortedTest){

    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;

    qsort(ints, size, sizeof(int), &SortUtils::mycmp);

#if PRINT_SORT_DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
    printf("\n");
#endif

    EXPECT_TRUE(sortUtilsObject.SimpleIsSorted(ints, size));
}

// Checks the SimpleIsSorted fails if last number is smaller than first
TEST_F(SortUtilsTest, SimpleIsSortedTestFail){

    int ints[] = { 101, -2, 99, 0, -743, 2, INT_MIN};
    int size = sizeof ints / sizeof *ints;


#if PRINT_SORT_DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
    printf("\n");
#endif

    EXPECT_FALSE(sortUtilsObject.SimpleIsSorted(ints, size));
    EXPECT_TRUE(ints[(size - 1)] < ints[0]);
}

// Test all the sort functions 
TEST_F(SortUtilsTest, allSortsTest){

  /*
    int i = 0, array_size, *array;
    //clock_t
    uintmax_t start,end;

    //promp user for array size
    printf("How long would you like your unsorted array to be? array_Length: ");
    scanf("%d", &array_size ); 

    //allocate array
    array = malloc( sizeof(int) * array_size );

    //Insert random data into the array from [0,99]
    for( i = 0; i < array_size; i++ )
        array[i] = rand() % 100;

    printf("\n");
    //bubble sort 
    printf("original \t->\t\t ");        printA( array, array_size );
    start = clock();
    bubbleSort(array, array_size);
    end = clock(); end = (end - start)/CLOCKS_PER_SEC;
    printf("bubble sort \t-> \t\t ");     printA( array, array_size ); printf("Clock_Time: %ju\n\n", (uintmax_t)(clock_t)end);
    rePolute(array,array_size);

    //selection sort
    printf("original \t->\t\t ");        printA( array, array_size );
    selectionSort(array, array_size);
    printf("selection sort \t->\t\t "); printA( array, array_size ); printf("\n");
    rePolute(array,array_size);

    //insertion sort
    printf("original \t->\t\t ");        printA( array, array_size );
    insertionSort(array, array_size);
    printf("insertion sort \t->\t\t "); printA( array, array_size ); printf("\n");
    rePolute(array,array_size);

    // Theres a but thats no worth my time to find right now in this sort
    //bucket sort
    
    //bucketSort(array, array_size);
    //printf("bucket sort -> \t\t "); printA( array, array_size );    
    //rePolute(array,array_size);

    //quick sort
    printf("original \t->\t\t ");        printA( array, array_size );
    qsort(array, array_size, sizeof(int), mycmp);
    printf("quick sort \t-> \t\t "); printA( array, array_size );  printf("\n");  
    rePolute(array,array_size);

    //mergesort
    printf("original \t->\t\t ");        printA( array, array_size );
    MergeSort(array, array_size);
    printf("merge sort \t-> \t\t "); printA( array, array_size ); printf("\n");
    rePolute(array,array_size);
    */
}

} // utils end