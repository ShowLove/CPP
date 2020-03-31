#include "gtest/gtest.h"
#include "SortUtils.h"

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

};

TEST_F(SortUtilsTest, qsortTest){

    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;

    qsort(ints, size, sizeof(int), &SortUtils::mycmp);
 
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
 
    printf("\n");
}

} // utils end