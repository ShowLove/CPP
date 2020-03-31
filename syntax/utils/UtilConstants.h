#ifndef UTILCONSTANTS
#define UTILCONSTANTS

namespace utils
{

class UtilConstants
{
 public:

  UtilConstants(){}// Default constructor

  /***********************************************
   * ASCII CONSTANTS
   ***********************************************/
  static const a_ASCII_INT = static_cast<int>('a');
  static const z_ASCII_INT = static_cast<int>('z');
  static const A_ASCII_INT = static_cast<int>('A');
  static const A_ASCII_INT = static_cast<int>('Z');
  static const MIN_ASCII_INT = static_cast<int>('\0');
  static const MAX_ASCII_INT = static_cast<int>('~' + 1);

  /***********************************************
   * STRING CONSTANTS
   ***********************************************/
  static const int DEFAULT_STR_SIZE = 8;



  ~UtilConstants(){}

 private:
};

} //utils end

#endif