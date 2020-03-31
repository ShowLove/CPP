#include "gtest/gtest.h"
#include "StringUtils_c.h"

#define PRINT_STRING_DEBUG 0

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
  
  // Prompt for string
  printf("Enter your string: ");
  char *str = sUtilObj.prompAndAlocStringDynamically();

#if PRINT_STRING_DEBUG
  printf("OriginalString(%s)", str );
#endif

  int length = sUtilObj.strLength(str);

#if PRINT_STRING_DEBUG
  printf("\n stringLength(%d) \n", length);
#endif

  // We expect to have a string length
  EXPECT_TRUE(length > 0);
}

// Tests strLength function
TEST_F(StringUtilsCTest, strLengthTest){

  const int expectedStringSize = 8;
  char *str1 = (char *) "12345678";

  int length = sUtilObj.strLength(str1);

#if PRINT_STRING_DEBUG  
  printf("\n stringLength(%d) \n", length);
#endif

  EXPECT_TRUE(length == expectedStringSize);
}

} // utils end