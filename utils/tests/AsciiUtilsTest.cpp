#include "gtest/gtest.h"
#include "AsciiUtils.h"
#include "UtilConst.h"

#define PRINT_ASCII_DEBUG 0

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

// Prints ascii information
TEST_F(AsciiUtilsTest, printAsciiIntValueInfoTest){
#if PRINT_ASCII_DEBUG
  asciiUtilsObj.printAsciiIntValueInfo();
#endif
}

// Test that we get an accurate int representation of ascii values
TEST_F(AsciiUtilsTest, getAsciiIntTest){

  int asciiInt = -1;

  EXPECT_TRUE(asciiUtilsObj.getAsciiInt('a',asciiInt));
  EXPECT_TRUE(asciiInt == UtilConst::a_ASCII_INT);
  EXPECT_TRUE(asciiUtilsObj.getAsciiInt('z',asciiInt));
  EXPECT_TRUE(asciiInt == UtilConst::z_ASCII_INT);
  EXPECT_TRUE(asciiUtilsObj.getAsciiInt('A',asciiInt));
  EXPECT_TRUE(asciiInt == UtilConst::A_ASCII_INT);
  EXPECT_TRUE(asciiUtilsObj.getAsciiInt('Z',asciiInt));
  EXPECT_TRUE(asciiInt == UtilConst::Z_ASCII_INT);
  EXPECT_TRUE(asciiUtilsObj.getAsciiInt('\0',asciiInt)); //first ascii 
  EXPECT_TRUE(asciiInt == UtilConst::MIN_ASCII_INT);
  EXPECT_TRUE(asciiUtilsObj.getAsciiInt(('~' + 1),asciiInt)); // second to last ascii
  EXPECT_TRUE(asciiInt == UtilConst::MAX_ASCII_INT);
}

} // utils end