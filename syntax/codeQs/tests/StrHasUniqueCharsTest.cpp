#include "gtest/gtest.h"
#include "StrHasUniqueChars.h"

namespace utils
{

class StrHasUniqueCharsTest : public ::testing::Test {

 public:

  StrHasUniqueCharsTest(){}
  ~StrHasUniqueCharsTest(){}

 protected:
  virtual void SetUp() 
  {
   
  }

  virtual void TearDown() 
  {

  }

};

TEST_F(StrHasUniqueCharsTest, testConstructors){
    EXPECT_TRUE(1);

}

} // utils end