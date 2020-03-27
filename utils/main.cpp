#include "cStringUtils.h"

/* g++ main.cpp cStringUtils.cpp -o cStringUtils.out && ./cStringUtils.out */

using namespace utils;

#define FUNCTION_PARAM 10

int main()
{
	StringUtilsC fooObject;
	fooObject.fooFunction(FUNCTION_PARAM);

	StringUtilsC *pFooObject = new StringUtilsC();
    pFooObject->fooFunction(FUNCTION_PARAM);


    StringUtilsC fooObject2 = fooObject;
    fooObject2.fooFunction(FUNCTION_PARAM);

	return 0;
}