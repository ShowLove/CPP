#ifndef UTILCONSTANTS
#define UTILCONSTANTS

namespace utils
{

class UtilConst
{
 public:

  UtilConst(){}// Default constructor

  /***********************************************
   * ASCII CONSTANTS
   ***********************************************/
  static const int a_ASCII_INT = static_cast<int>('a');
  static const int z_ASCII_INT = static_cast<int>('z');
  static const int A_ASCII_INT = static_cast<int>('A');
  static const int Z_ASCII_INT = static_cast<int>('Z');
  static const int MIN_ASCII_INT = static_cast<int>('\0');
  static const int MAX_ASCII_INT = static_cast<int>('~' + 1);

  /***********************************************
   * STRING CONSTANTS
   ***********************************************/
  static const int DEFAULT_STR_SIZE = 8;



  ~UtilConst(){}

 private:
};

} //utils end

#endif