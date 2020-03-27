#include "cStringUtils.h"

namespace utils
{
  void StringUtilsC::fooFunction(const int x) const
  {
  	std::cout << "x = " << x << std::endl;
  	fooPrivateFunction();
  }

  void StringUtilsC::fooPrivateFunction() const
  {
  	std::cout << "Private Function" << std::endl;
  }
  
} // utils end