#include "gtest/gtest.h"
#include "StringUtils_c.h"

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

TEST_F(StringUtilsCTest, prompAndAlocStringDynamicallyTest){
  // Prompt for string
  printf("Enter your string: ");
  char *str = sUtilObj.prompAndAlocStringDynamically();
  printf("OriginalString(%s)", str );

  int length = sUtilObj.strLength(str);
  printf("\n stringLength(%d) \n", length);
  // We expect to have a string length
  EXPECT_TRUE(length > 0);
}

TEST_F(StringUtilsCTest, strLengthTest){

  const int expectedStringSize = 8;
  char *str1 = (char *) "12345678";

  int length = sUtilObj.strLength(str1);
  printf("\n stringLength(%d) \n", length);

  EXPECT_TRUE(length == expectedStringSize);
}

} // utils end