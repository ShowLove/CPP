#include "cStringUtils.h"

/* g++ main.cpp cStringUtils.cpp -o cStringUtils.out && ./cStringUtils.out */

using namespace utils;

#define FUNCTION_PARAM 10

int main()
{
	StringUtilsC sUtilObj;
	char *str = sUtilObj.prompAndAlocStringDynamically();
	printf("OriginalString(%s)", str );

	int length = sUtilObj.strLength(str);
	printf("\n stringLength(%d) \n", length);
	return 0;
}