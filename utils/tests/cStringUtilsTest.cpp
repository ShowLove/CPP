#include "gtest/gtest.h"
#include "cStringUtils.h"

namespace utils
{

class cStringUtilsTest : public ::testing::Test {

 public:

  cStringUtilsTest() {}
  ~cStringUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }

    
  StringUtilsC sUtilObj;
};

TEST_F(cStringUtilsTest, prompAndAlocStringDynamicallyTest){

  printf("Enter your string: ");
  char *str = sUtilObj.prompAndAlocStringDynamically();
  printf("OriginalString(%s)", str );

  int length = sUtilObj.strLength(str);
  printf("\n stringLength(%d) \n", length);

  EXPECT_TRUE(length > 0);
}

TEST_F(cStringUtilsTest, strLengthTest){

  const int expectedStringSize = 8;
  char *str1 = "12345678";

  int length = sUtilObj.strLength(str1);
  printf("\n stringLength(%d) \n", length);

  EXPECT_TRUE(length == expectedStringSize);
}

} // utils end