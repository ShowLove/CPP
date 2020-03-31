#include "gtest/gtest.h"
#include "AsciiUtils.h"

#define PRINT_ASCII_DEBUG 1

namespace utils
{

class AsciiUtilsTest : public ::testing::Test {

 public:

  AsciiUtilsTest() {}
  ~AsciiUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  AsciiUtils asciiUtilsObj;
};

// Prints 
TEST_F(AsciiUtilsTest, printAsciiIntValueInfoTest){
  
#if PRINT_ASCII_DEBUG
  asciiUtilsObj.printAsciiIntValueInfo();
#endif

  EXPECT_TRUE(1 > 0);
}

} // utils end