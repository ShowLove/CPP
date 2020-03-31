#include "StringUtils_c.h"
#include "SortUtils.h"

/* TODO Write a cmake for utils 
g++ main.cpp StringUtils_c.cpp -o StringUtils_c.out && ./StringUtils_c.out
g++ main.cpp SortUtils.cpp -o SortUtils.out && ./SortUtils.out
*/
using namespace utils;

#define FUNCTION_PARAM 10

int main()
{
	SortUtils sortUtilObj;

    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;
 
    qsort(ints, size, sizeof(int), &SortUtils::mycmp);
 
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
 
    printf("\n");
	return 0;
}