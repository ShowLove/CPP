#ifndef MATHUTILS
#define MATHUTILS

#include <iostream>

namespace utils
{

class MathUtils
{
 public:

  MathUtils(){}// Default constructor
  
  /* Every positive integer is composite, prime, or the unit 1.
   * so the composite numbers are exactly the numbers that are not prime and not a unit.
   * This function uses that property to determine if a number is prime.
   * @param n the number you are checking for prime
   * @return true if n is prime, false otherwise
   */
  bool isPrime(const int num) const;

  /* Finds the Nth prime number
   * @param n prime number you want to find (e.g: n(10) = 29)
   * @return int value of nTh prime zero, zero if invalid n
   */
  int nThPrime(int n) const;

  ~MathUtils(){}

 private:
};

} //fooNameSpace end

#endif