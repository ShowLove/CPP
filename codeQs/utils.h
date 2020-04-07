#ifndef UTILS
#define UTILS

#include <iostream>

namespace codeQs
{

class utils
{
 public:

  utils(){}// Default constructor
  ~utils(){}

  ///////////////////////////////////////
  // constants SYNTAX: Constants to know
  //////////////////////////////////////
  static const int MAX_CHAR = 256; // The number of chars
  static const int a_ASCII_INT = static_cast<int>('a'); // smallest ascii
  static const int MAX_ASCII_INT = static_cast<int>('~' + 1); // largest ascii

  
  /* Generate a string of random chars of size "size"
   * @param size size of the string
   * @return a string of random characters
   */
  std::string getRandomStr(const int size) const;

  /* Generate a random number in a range
   * @param min minimun in range
   * @param max in range
   * @return an int random number in range [min, max]
   */
  int getRandomNumInRange(const int min, const int max) const;


 private:
};

} //codeQs end

#endif