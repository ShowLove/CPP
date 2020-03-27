#ifndef CSTRINGUTILS
#define CSTRINGUTILS

#include <iostream>

#define M_INIT 8

namespace utils
{

class StringUtilsC
{
 public:

  StringUtilsC() : m_memberVariable(M_INIT) {}// Default constructor
  StringUtilsC(int x) // Overloaded constructor
  {
    x = m_memberVariable;
  }

  StringUtilsC(const StringUtilsC &fc) // Copy constructor
  {
  	if (this!= &fc)
  	{
  	  m_memberVariable = fc.m_memberVariable;
  	}
  }
  
  void fooFunction(const int x) const; /* x will not change and no member variables will be altered */

  ~StringUtilsC(){}

 private:

  void fooPrivateFunction(); // This will not compile in fooFunction (!const)
  void fooPrivateFunction() const;

  int m_memberVariable; // Must be defined in constructor	
};

} //utils end

#endif