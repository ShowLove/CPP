#include "gtest/gtest.h"
#include "cStringUtils.h"

namespace utils
{

class cStringUtilsTest : public ::testing::Test {

 public:

  cStringUtilsTest() : m_function_param(10) {}
  ~cStringUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
    // declare pointer 
    pFooObject = new StringUtilsC();    
  }

  virtual void TearDown() 
  {
    // Code here will be called immediately after each test
    // (right before the destructor).
    if (pFooObject != NULL)
    {
      delete pFooObject;
      pFooObject = NULL;
    }
  }

    
  StringUtilsC fooObject;              // declare object
  StringUtilsC *pFooObject;
  int m_function_param;                // this value is used to test constructor
};

TEST_F(cStringUtilsTest, testConstructors){
    EXPECT_TRUE(1);

    StringUtilsC fooObject2 = fooObject; // use copy constructor


    fooObject.fooFunction(m_function_param);
    pFooObject->fooFunction(m_function_param);
    fooObject2.fooFunction(m_function_param);
}

} // utils end