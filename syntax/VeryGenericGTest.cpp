#include "gtest/gtest.h"
#include "SortUtils.h"

#define PRINT_SEARCH_DEBUG 0

namespace utils
{

class FooTest : public ::testing::Test {

 public:

  FooTest() {}
  ~FooTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  //Foo fooObj;
};

TEST_F(FooTest, foo){
  
}

} // utils end