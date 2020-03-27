#include "cStringUtils.h"

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
	char c = 'C'; int size = initialSize; int sizeIndex = 0;
	// CPP equivalent: char* str = new char[size]; C equivalent: char* str = malloc(size*sizeof(char));
	char* str = reinterpret_cast<char*>(malloc(size*sizeof(char))); 	
	if(str == NULL)
		return NULL;

	while(c != 0){
		// Get char and check if new line or escape was pressed 
		c = getchar();
		if( c == '\n' || c == '\r'){
			return str;
		}
		// If size got to big realocate
		if( sizeIndex == size ){
			size = size*2;
			str = reinterpret_cast<char*>(realloc(str, size*sizeof(char) ));
		}
        // Place the char into the string
		str[sizeIndex] = c;
		sizeIndex++;
	}

	return NULL;
  }
  
} // utils end