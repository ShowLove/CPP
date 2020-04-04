#ifndef FOOHEADER
#define FOOHEADER

#include <iostream>

#define M_INIT 8

namespace fooNameSpace
{

class fooClass
{
 public:

  fooClass() : m_memberVariable(M_INIT) {}// Default constructor
  fooClass(int x) // Overloaded constructor
  {
    x = m_memberVariable;
  }

  fooClass(const fooClass &fc) // Copy constructor
  {
  	if (this!= &fc)
  	{
  	  m_memberVariable = fc.m_memberVariable;
  	}
  }
  
  void fooFunction(const int x) const; /* x will not change and no member variables will be altered */

  ~fooClass(){}

 private:

  void fooPrivateFunction(); // This will not compile in fooFunction (!const)
  void fooPrivateFunction() const;

  int m_memberVariable; // Must be defined in constructor	
};

} //fooNameSpace end

#endif