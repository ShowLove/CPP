#include "gtest/gtest.h"
#include "MathUtils.h"
#include "UtilConst.h"

#define PRINT_MATH_DEBUG 0

namespace utils
{

class MathUtilsTest : public ::testing::Test {

 public:

  MathUtilsTest() {}
  ~MathUtilsTest(){}

 protected:
  virtual void SetUp() 
  {
  
  }

  virtual void TearDown() 
  {

  }
  
  MathUtils mathUtilsObj;
};

// Test the isPrime function
TEST_F(MathUtilsTest, isPrimeTest){

  // UtilConst::primeNums::pn1; cpp11
  EXPECT_TRUE(mathUtilsObj.isPrime(UtilConst::pn1));
  EXPECT_TRUE(mathUtilsObj.isPrime(UtilConst::pn2));
  EXPECT_TRUE(mathUtilsObj.isPrime(UtilConst::pn10)); 

  EXPECT_FALSE(mathUtilsObj.isPrime(UtilConst::one));   //composit number
  EXPECT_FALSE(mathUtilsObj.isPrime(UtilConst::eight)); //composit number
}

// Test that we can successfully find the nTh prime number
TEST_F(MathUtilsTest, nThPrimeTest){

  EXPECT_TRUE(UtilConst::pn1 == mathUtilsObj.nThPrime(UtilConst::one));
  EXPECT_TRUE(UtilConst::pn2 == mathUtilsObj.nThPrime(UtilConst::two));
  EXPECT_TRUE(UtilConst::pn5 == mathUtilsObj.nThPrime(UtilConst::five));
  EXPECT_TRUE(UtilConst::pn10 == mathUtilsObj.nThPrime(UtilConst::ten));
  EXPECT_TRUE(UtilConst::maxSub1000Prime == mathUtilsObj.nThPrime(UtilConst::nThPrimeMax));
  EXPECT_FALSE(mathUtilsObj.nThPrime(UtilConst::zero));
  EXPECT_FALSE(mathUtilsObj.nThPrime(-UtilConst::ten));
}

// Test fibonacci functions
TEST_F(MathUtilsTest, fibonacciTest){

  int number = mathUtilsObj.getNthFibonacciNumRec(0);

  // Using recursive function
  EXPECT_TRUE(number == 0);
  number = mathUtilsObj.getNthFibonacciNumRec(1);
  EXPECT_TRUE(number == 1);
  number = mathUtilsObj.getNthFibonacciNumRec(2);
  EXPECT_TRUE(number == 1);
  number = mathUtilsObj.getNthFibonacciNumRec(3);
  EXPECT_TRUE(number == 2);
  number = mathUtilsObj.getNthFibonacciNumRec(4);
  EXPECT_TRUE(number == 3);
  number = mathUtilsObj.getNthFibonacciNumRec(5);
  EXPECT_TRUE(number == 5);
  number = mathUtilsObj.getNthFibonacciNumRec(12);
  EXPECT_TRUE(number == 144);
  number = mathUtilsObj.getNthFibonacciNumRec(22);
  EXPECT_TRUE(number == 17711);


  // Using seq function
  number = mathUtilsObj.getNthFibonacciNumSeq(0);
  EXPECT_TRUE(number == 0);
  number = mathUtilsObj.getNthFibonacciNumSeq(1);
  EXPECT_TRUE(number == 1);
  number = mathUtilsObj.getNthFibonacciNumSeq(2);
  EXPECT_TRUE(number == 1);
  number = mathUtilsObj.getNthFibonacciNumSeq(3);
  EXPECT_TRUE(number == 2);
  number = mathUtilsObj.getNthFibonacciNumSeq(4);
  EXPECT_TRUE(number == 3);
  number = mathUtilsObj.getNthFibonacciNumSeq(5);
  EXPECT_TRUE(number == 5);
  number = mathUtilsObj.getNthFibonacciNumSeq(12);
  EXPECT_TRUE(number == 144);
  number = mathUtilsObj.getNthFibonacciNumSeq(22);
}

} // utils end