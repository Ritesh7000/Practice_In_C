#include <stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	int *pPtr = &arr[0]; 	//or &arr;

	printf("\n&pPtr\t=\t%d",&pPtr);			//9830064		/200
	printf("\npPtr\t=\t%d",pPtr);			//9830068		/100
	printf("\n*pPtr\t=\t%d",*pPtr);			//10
	
	++pPtr;
/*
	++pPtr;
	pPtr = pPtr + 1
	pPtr = pPtr + 1*sizeof(datatype)
	pPtr = 100 + 1*sizeof(int)
	pPtr = 100 + 1*4
	pPtr = 100 + 4
	pPtr = 104

	ata pPtr ha arr[1] = 20 la point karayla lagla
*/

	printf("\n\nAfter ++pPtr :");
	printf("\n&pPtr\t=\t%d",&pPtr);			//9830064		/200
	printf("\npPtr\t=\t%d",pPtr);			//9830072		/104
	printf("\n*pPtr\t=\t%d",*pPtr);			//20

	return 0;
}