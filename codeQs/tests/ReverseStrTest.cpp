#include "gtest/gtest.h"
#include "ReverseStr.h"

#include<string.h>

#define PRINT_SReverseStr_DEBUG 0

namespace codeQs
{

class ReverseStrTest : public ::testing::Test {

 public:

  ReverseStrTest() {}
  ~ReverseStrTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  ReverseStr obj;
};

TEST_F(ReverseStrTest, revStrTest){
  std::string str = "abcd"; //even
  std::string strRev = "dcba";
  std::string str2 = "abcde"; // odd 
  std::string str2Rev = "edcba";

  // Test string with even length
  EXPECT_FALSE(str.compare(strRev) == 0);
  obj.revStr(str);
  EXPECT_TRUE(str.compare(strRev) == 0); // SYNTAX compare string, returns 0 if the same
 
  // Test string with odd length
  EXPECT_FALSE(str2.compare(str2Rev) == 0);
  obj.revStr(str2);
  EXPECT_TRUE(str2.compare(str2Rev) == 0);
}

TEST_F(ReverseStrTest, reverseStringTest){
  // Even numbers
  //char *strA = (char *) "12345678"; // cannot swap string literal
  char strA[] = "12345678"; //  makes strA an array into which the contents of "12345678" are copied
  char str1[] = "12345678";
  char str2[] = "87654321";

  obj.reverseString(str1, 8);
  std::cout << "str1:" << str1 << "str2:" << str2 << std::endl;
  EXPECT_TRUE(strcmp(str1, str2)==0); // SYNTAX compare two char*

  // Odd numbers
  //char *strA = (char *) "12345678"; // cannot swap string literal
  char strB[] = "123456789"; //  makes strA an array into which the contents of "12345678" are copied
  char str3[] = "123456789";
  char str4[] = "987654321";

  obj.reverseString(str3, 9);
  std::cout << "str1:" << str3 << "str2:" << str4 << std::endl;
  EXPECT_TRUE(strcmp(str3, str4)==0); // SYNTAX compare two char*
}

} // utils end