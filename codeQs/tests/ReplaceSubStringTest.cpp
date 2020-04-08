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

TEST_F(ReplaceSubStringTest, repSubStrTest){
  std::string data = "This string has 4 spaces ";
  std::string newString = "This%20string%20has%204%20spaces%20"; 
  obj.repSubStr(data, " ", "%20");
  EXPECT_TRUE(data.compare(newString) == 0);
}

TEST_F(ReplaceSubStringTest, repSubStrCuostomTest){
  std::string data = "_123_45678_";
  std::string newString = "%--123%--45678%--";
  obj.repSubStrCuostom(data, "_", "%--");
  EXPECT_TRUE(data.compare(newString) == 0);

  data = "1_2_3_4_5_6_7_8";
  newString = "1%--2%--3%--4%--5%--6%--7%--8";
  obj.repSubStrCuostom(data, "_", "%--");
  EXPECT_TRUE(data.compare(newString) == 0);
}

TEST_F(ReplaceSubStringTest, numSubStringTest){
  std::string data = "foo1lskdjffoo2ielskdfjfoo3lskjfdlskjsdffoo";
  std::string newString = "This%20string%20has%204%20spaces%20"; 
  int numSubStr = obj.numSubString(data, "foo");
  EXPECT_TRUE(numSubStr == 4);
}

} // utils end