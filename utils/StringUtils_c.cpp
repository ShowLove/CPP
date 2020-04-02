#include "StringUtils_c.h"

namespace utils
{

int StringUtilsC::strLength(char *str) const
{
  char *endP;
  // Traverse the string until you hit null
  for(endP = str; *endP; endP++);
  // Returns an integer representation of the lenght of the string
  return (int) (endP - str);
}

char* StringUtilsC::prompAndAlocStringDynamically(const int initialSize) const
{
  char c = 'C'; int size = initialSize; int sizeIndex = UtilConst::zero;
  // CPP equivalent: char* str = new char[size]; C equivalent: char* str = malloc(size*sizeof(char));
  char* str = reinterpret_cast<char*>(malloc(size*sizeof(char))); 	
  if(str == NULL)
  	return NULL;
  
  // Comparing to null gives "warning: comparison between NULL and non-pointer ('char' and NULL)"
  while(c != UtilConst::zero){
  	// Get char and check if new line or escape was pressed 
  	c = getchar();
  	if( c == UtilConst::NEWLINE_CHAR || c == UtilConst::CARRIAGE_RETURN_CHAR){
  		return str;
  	}
  	// If size got to big realocate
  	if( sizeIndex == size ){
  		size = (size * UtilConst::two);
  		str = reinterpret_cast<char*>(realloc(str, size*sizeof(char) ));
  	}
        // Place the char into the string
  	str[sizeIndex] = c;
  	sizeIndex++;
  }

  return NULL;
}

void StringUtilsC::swapP( char *a, char *b )
{
  char tmp = *a;
  *a = *b;
  *b = tmp;
}

char *StringUtilsC::reverseString(char *str)
{
  int length = strLength(str);
  int middleIndx = (length - 1) / 2; // fastest way to always get middle index for odd or even

  for(int i = 0; i < middleIndx; i++)
  {
    swapP( &str[i], &str[length - i - 1] );
  }

  return str;
}

bool StringUtilsC::stringIsReverseString(char *str1, char *str2)
{
  if(strLength(str1) != strLength(str2))
    return false;

  bool isOddNumber = false;
  int arrLength = strLength(str1);
  int middleIndx = (arrLength - 1) / 2; // fastest way to always get middle index for odd or even

  if((arrLength % 2) != 0)              // odd number check
    isOddNumber = true;

  for(int i = 0; i < middleIndx; i++)
  {
    if(((int) str1[middleIndx] != (int) str2[middleIndx]) && isOddNumber)
      return false;

    if((int) str1[i] != (int) str2[arrLength - i - 1])
      return false;
  }

  return true;
}

} // utils end