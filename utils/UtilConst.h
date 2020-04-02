#ifndef UTILCONSTANTS
#define UTILCONSTANTS

namespace utils
{

class UtilConst
{
 public:

  UtilConst(){}// Default constructor

  /***********************************************
   * MATH CONSTANTS
   ***********************************************/
  enum primeNums { pn1 = 2,  pn2 = 3,  pn3 = 5,   pn4 = 7,   pn5 = 11, 
                   pn6 = 13, pn7 = 17, pn8 = 19,  pn9 = 23,  pn10 = 29, pn168 = 997};
  enum nums      { zero = 0, one = 1,  two = 2,   three = 3, four = 4,
                   five = 5, six = 6,  seven = 7, eight = 8, nine = 9,  ten = 10};
  static const int maxSub1000Prime = 997;
  static const int nThPrimeMax = 168;

  /***********************************************
   * STRING CONSTANTS
   ***********************************************/
  static const int DEFAULT_STR_SIZE = eight;
  static const char NEWLINE_CHAR = '\n';
  static const char CARRIAGE_RETURN_CHAR = '\r';
  static const char NULL_CHAR = '\0';


  /***********************************************
   * ASCII CONSTANTS
   ***********************************************/
  static const int a_ASCII_INT = static_cast<int>('a');
  static const int z_ASCII_INT = static_cast<int>('z');
  static const int A_ASCII_INT = static_cast<int>('A');
  static const int Z_ASCII_INT = static_cast<int>('Z');
  static const int MIN_ASCII_INT = static_cast<int>(NULL_CHAR);
  static const int MAX_ASCII_INT = static_cast<int>('~' + one);


  ~UtilConst(){}

 private:
};

} //utils end

#endif