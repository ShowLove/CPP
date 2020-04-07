#include "gtest/gtest.h"
#include "StrHasUniqueChars.h"

#define PRINT_StrHasUniqueChars_DEBUG 0

namespace codeQs
{

class StrHasUniqueCharsTest : public ::testing::Test {

 public:

  StrHasUniqueCharsTest() {}
  ~StrHasUniqueCharsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  StrHasUniqueChars obj;
};

TEST_F(StrHasUniqueCharsTest, foo){
    std::string str = "thishasrepeatchars"; 
    EXPECT_FALSE(obj.uniqueCharacters(str));
    std::string str2 = "abcdefghijkl1234";
    EXPECT_TRUE(obj.uniqueCharacters(str2));
}

} // utils end