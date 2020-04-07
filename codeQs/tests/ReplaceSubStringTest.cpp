#include "gtest/gtest.h"
#include "ReplaceSubString.h"

#define PRINT_SEARCH_DEBUG 0

namespace codeQs
{

class ReplaceSubStringTest : public ::testing::Test {

 public:

  ReplaceSubStringTest() {}
  ~ReplaceSubStringTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  ReplaceSubString obj;
};

TEST_F(ReplaceSubStringTest, foo){
  std::string data = "This string has 4 spaces ";
  std::string newString = "This%20string%20has%204%20spaces%20"; 
  obj.repSubStr(data, " ", "%20");
  EXPECT_TRUE(data.compare(newString) == 0);
}

} // utils end