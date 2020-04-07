#include "utils.h"

namespace codeQs
{

const int utils::MAX_CHAR;

std::string utils::getRandomStr(const int size) const
{
  char* s = new char[size];
  std::string str(s); // SYNTAX: convert char* to std::string

  for (int i = 0; i < str.length(); i++)
  {

  }
}

int utils::getRandomNumInRange(const int min, const int max) const
{
   static bool firstRandomSeed = true;
   if (firstRandomSeed) 
   {  //seeding for the first time only!
      srand( time(NULL) ); // SYNTAX: seed rand
      firstRandomSeed = false;
   }
  return min + rand() % (( max + 1 ) - min); // SYNTAX: get range of random numbers
}
  
} // codeQs end