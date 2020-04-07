#include "utils.h"

namespace codeQs
{

const int utils::MAX_CHAR;

std::string utils::getRandomStr(const int size) const
{
  char c = 'c';
  char* s = new char[size];
  std::string str(s); // SYNTAX: convert char* to std::string at init

  for (int i = 0; i < str.length(); i++)
  {
    str[i] = getRandomNumInRange(a_ASCII_INT, MAX_ASCII_INT);
  }
  return str;
}

int utils::getRandomNumInRange(const int min, const int max) const
{
  return min + rand() % (( max + 1 ) - min); // SYNTAX: get range of random numbers
}

char* utils::convertToCString(std::string str)
{
  char *cstr = new char[str.length() + 1];
  strcpy(cstr, str.c_str());

  return cstr;
  //  delete [] cstr; // dont forget to clean up later
}

void utils::converStdStrToCStr(char* str, std::string& strStd)
{
  strStd = str; // SYNTAX  convert std::string to char* string
}

void utils::swapP( char *a, char *b )
{
  char tmp = *a;
  *a = *b;
  *b = tmp;
}
  
} // codeQs end