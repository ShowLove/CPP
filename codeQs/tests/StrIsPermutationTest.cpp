#include "gtest/gtest.h"
#include "StrIsPermutation.h"

#define PRINT_SEARCH_DEBUG 0

namespace codeQs
{

class StrIsPermutationTest : public ::testing::Test {

 public:

  StrIsPermutationTest() {}
  ~StrIsPermutationTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  StrIsPermutation obj;
};

TEST_F(StrIsPermutationTest, isPermuttaionTest){
  std::string str1 = "abcdefg";
  std::string str2 = "gfedcba";
  EXPECT_TRUE(obj.isPermuttaion(str1, str2));
  str1 = "aaabcdeefg";
  str2 = "gfeedcbaaa";
  EXPECT_TRUE(obj.isPermuttaion(str1, str2));
  str1 = "aaabcdeeefg";
  str2 = "gfeedcbaaa";
  EXPECT_FALSE(obj.isPermuttaion(str1, str2));
}

TEST_F(StrIsPermutationTest, isPermuttaion2Test){
  std::string str1 = "abcdefg";
  std::string str2 = "gfedcba";
  EXPECT_TRUE(obj.isPermuttaion2(str1, str2));
  str1 = "aaabcdeefg";
  str2 = "gfeedcbaaa";
  EXPECT_TRUE(obj.isPermuttaion2(str1, str2));
  str1 = "aaabcdeeefg";
  str2 = "gfeedcbaaa";
  EXPECT_FALSE(obj.isPermuttaion2(str1, str2));
}

} // utils end