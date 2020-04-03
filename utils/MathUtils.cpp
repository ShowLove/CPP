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

int MathUtils::getNthFibonacciNumRec(const int num ) const
{

  if( num  == 0  ) 
    return 0;
  else if( num == 1 )
    return 1;
  else 
    return ( getNthFibonacciNumRec( num - 1 ) + getNthFibonacciNumRec( num - 2 ) );
}

int MathUtils::getNthFibonacciNumSeq(const int num ) const
{
    int n = num;
    int num1 = 0; int num2 = 1; int num_next = 1;
    if (n < 2)
      return (n < 1) ? 0 : 1;
    
    int i = 0;
    while(i <= (n-2))
    {
      num_next = num1 + num2;
      num1 = num2;
      num2 = num_next;

      i++;
    }

    return num_next;
}

  
} // utils end