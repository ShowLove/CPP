#include "genericHeader.h"

/* g++ genericMain.cpp genericSource.cpp -o genericOut.out && ./genericOut.out */

using namespace fooNameSpace;

#define FUNCTION_PARAM 10

int main()
{
	fooClass fooObject;
	fooObject.fooFunction(FUNCTION_PARAM);

	fooClass *pFooObject = new fooClass();
    pFooObject->fooFunction(FUNCTION_PARAM);


    fooClass fooObject2 = fooObject;
    fooObject2.fooFunction(FUNCTION_PARAM);

	return 0;
}