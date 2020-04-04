#include "genericHeader.h"

namespace fooNameSpace
{
  void fooClass::fooFunction(const int x) const
  {
  	std::cout << "x = " << x << std::endl;
  	fooPrivateFunction();
  }

  void fooClass::fooPrivateFunction() const
  {
  	std::cout << "Private Function" << std::endl;
  }
  
} // fooNameSpace end