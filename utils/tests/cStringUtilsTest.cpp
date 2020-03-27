#include "gtest/gtest.h"
#include "cStringUtils.h"

class cStringUtilsTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST_F(cStringUtilsTest,twoValues){
    EXPECT_TRUE(1);
}