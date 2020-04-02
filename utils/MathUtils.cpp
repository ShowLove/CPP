#include "MathUtils.h"
#include "UtilConst.h" //for prime numbers

namespace utils
{

bool MathUtils::isPrime(const int num) const
{
  if (num <= 1)
    return false;

  for (int i=2; i<=(num/2) ; i++) 
     if (num%i==0)
        return false; //divider mod input number = 0 not prime

  return true;
}

int MathUtils::nThPrime(int n) const 
{
  if (n > UtilConst::nThPrimeMax || n < 1){
    std::cout << "Nope: Either your n is smaller than 1 or this computer is too lazy to comput primes larger than 1000" << std::endl;
    return 0;
  }

  int primesFound = UtilConst::zero;
  int currentNum  = UtilConst::zero;
  while(primesFound < n)
  {
    currentNum++;
    if(isPrime(currentNum)){
      primesFound++;
    }
  }

  return currentNum;
}

  
} // utils end