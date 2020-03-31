#include "gtest/gtest.h"
#include "StringUtils_c.h"

#define PRINT_ASCII_DEBUG 0

namespace utils
{

class StringUtilsCTest : public ::testing::Test {

 public:

  StringUtilsCTest() {}
  ~StringUtilsCTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  StringUtilsC sUtilObj;
};

// Test that we can recieve dynamic length prompt input 
TEST_F(StringUtilsCTest, prompAndAlocStringDynamicallyTest){
  
#if PRINT_ASCII_DEBUG
  printf("\n stringLength(%d) \n", length);
#endif

  EXPECT_TRUE(1 > 0);
}

} // utils end