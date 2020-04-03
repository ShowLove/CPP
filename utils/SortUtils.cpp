#include "SortUtils.h"

namespace utils
{

bool SortUtils::isSorted(const int *array, int size) {

  if (size == 0)
    return true;   // Edge case

  if( *(array + (size - 1)) < *array)
    return false;  // Last number is smaller than first, this is not sorted

  int previousValue= *array; // initialize previousValue
  while (size){ // check for assendig values until size values are checked

    if (*array < previousValue)
      return false;

    previousValue= *array;
    // Iterate up the array, decrease size because we iterated up one
    ++array; --size;
  }

  return true;
}

void SortUtils::insertionSort(int *array, int arraySize){
    
    int i, j, k, temp; 

    for ( i = 0 ; i < arraySize ; i++ ){
        for ( j = 0 ; j < i ; j++ ){
            if ( array[j] > array[i] ){
                temp = array[j] ;
                array[j] = array[i] ;
                
                for ( k = i ; k > j ; k-- )
                    array[k] = array[k - 1] ;
                
                array[k + 1] = temp ;
            }
        }
    }
    
}

void SortUtils::selectionSort(int *array, int arraySize){
    
    int i, j, min, temp;
    for(i=0;i<arraySize-1;i++){
        min = i;
        for(j= i+1;j<arraySize;j++)
            if(array[j]<array[min])
                min = j;
        //notice we didn't use the swap func 
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}

void SortUtils::bubbleSort(int *array, int arraySize) //best arraySize, Worst arraySize^2 
{
    int i, j;
    
    for (i = 0 ; i < ( arraySize - 1 ); i++)
    {
        for (j = 0 ; j < arraySize - i - 1; j++)
            if (array[j] > array[j+1]) /* For decreasing order use < */
                swap(array, j);
    }
}

void SortUtils::merge(int *pInArray, int nLeftSize, int nRightSize)
{
  //int *pTemp = malloc( sizeof(int)*(nLeftSize + nRightSize) );
  int *pTemp = new int[nLeftSize + nRightSize];
  int nLeftIndex = 0, nRightIndex = 0;
  int *pLeftArray = pInArray, *pRightArray = &pInArray[nLeftSize];

  while (nLeftIndex + nRightIndex < nLeftSize + nRightSize)
  {
    if (nLeftIndex < nLeftSize && 
      (pLeftArray[nLeftIndex] <= pRightArray[nRightIndex] || nRightIndex >= nRightSize))
    {
      pTemp[nLeftIndex + nRightIndex] = pLeftArray[nLeftIndex];
      nLeftIndex++;
    }
    if (nRightIndex < nRightSize && 
      (pRightArray[nRightIndex] < pLeftArray[nLeftIndex] || nLeftIndex >= nLeftSize))
    {
      pTemp[nLeftIndex + nRightIndex] = pRightArray[nRightIndex];
      nRightIndex++;
    }
  }

  for (int i = 0; i < nLeftSize + nRightSize; i++)
  {
    pInArray[i] = pTemp[i];
  }
  delete[] pTemp;
  //free(pTemp);
}

void SortUtils::mergeSort(int *pInArray, int nSize)
{
  if (nSize <= 1)
  {
    return;
  }

  int nLeftSize = nSize / 2;
  int nRightSize = nSize - nLeftSize;
  mergeSort(pInArray, nLeftSize);
  mergeSort(&pInArray[nLeftSize], nRightSize);
  merge(pInArray, nLeftSize, nRightSize);
}

//////////////////////HELPER_FUNCTIONS//////////////////////

void SortUtils::rePolute(int *array, int arraySize){
    int i;

    //Insert random data into the array from [0,99]
    for( i = 0; i < arraySize; i++ )
        array[i] = rand() % 100;
}

void SortUtils::swap(int *array, int index ){
    //lagit swap function
    array[index] = array[index+1] + array[index]; 
    array[index + 1] = array[index] - array[index + 1]; 
    array[index] =  array[index] - array[index + 1]; 
}

// Print an array of arraySize integers, space-separated, followed by two newline chars.
void SortUtils::printArray(int *array, int arraySize)
{
  int i;
  for (i = 0; i < arraySize; i++)
    printf("%d%c", array[i], (i == arraySize - 1) ? '\n' : ' ');
    
//    printf("\arraySize");
}

int* SortUtils::getArrayRandom(int arraySize, int upperBounds)
{
  int* array = new int[arraySize];

  //Insert random data into the array from [0,(upperBounds - 1)]
  for( int i = 0; i < arraySize; i++ )
      array[i] = rand() % upperBounds;

  return array;
}

void SortUtils::randomizeArray(int* array, int arraySize, int upperBounds)
{
  //Insert random data into the array from [0,(upperBounds - 1)]
  for( int i = 0; i < arraySize; i++ )
      array[i] = rand() % upperBounds;
}
  
} // utils end