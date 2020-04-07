#ifndef UTILS
#define UTILS

#include <iostream>

namespace codeQs
{

class utils
{
 public:

  utils()
  {
     // SYNTAX: Seed rand in constructor once 
     static bool firstRandomSeed = true;
     if (firstRandomSeed) 
     {  //seeding for the first time only!
        srand( time(NULL) ); // SYNTAX: seed rand
        firstRandomSeed = false;
     }
  }// Default constructor
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

  /* Swaps the contents of two pointers. e.g chars in a string
   * @param a pointer 1 to swap
   * @param b pointer 2 to swap
   * @return void
   */ 
  static void swapP( char *a, char *b );

  /* Convert an std::string to char*, user is responsible for clean up
   * @param str string you are converting to char*
   * @return returns a char* version of std::string
   */
  static char* convertToCString(std::string str);

  /* Convert an char* to std::string, assumes std::string is already constructed
   * @param str string you are converting to char*
   * @return returns a std::string version of char*
   */
  static void converStdStrToCStr(char* str, std::string& strStd);


 private:
};

} //codeQs end

#endif