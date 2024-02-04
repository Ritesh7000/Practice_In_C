#include <stdio.h>
#include<malloc.h>

int main(void)
{
	int iLimit;
	int iCounter;
	int *pPtr = NULL; 

	printf("Enter number of element you want?\n");
	scanf("%d",&iLimit);
	//	Enter number of element you want?	
	//	3

	pPtr = (int *)malloc(iLimit*sizeof(int));

	if(NULL == pPtr)
	{
		printf("Memmory Allocation FAILED.");
		return -1;
	}

	printf("\n");
	for(iCounter = 0;iCounter < iLimit;iCounter++)
	{
		printf("Enter value of pPtr[%d] =\t",iCounter);
		scanf("%d",&pPtr[iCounter]);
	}
/*
	Enter value of pPtr[0] =        10
	Enter value of pPtr[1] =        20
	Enter value of pPtr[2] =        30

*/

	for(iCounter = 0;iCounter < iLimit;iCounter++)
	{
		printf("\nValue pPtr[%d] =\t%d",iCounter,pPtr[iCounter]);
	}
/*
	Value pPtr[0] = 10
	Value pPtr[1] = 20
	Value pPtr[2] = 30
*/

	if(pPtr != NULL)
	{
		free(pPtr);
		pPtr = NULL;
	}

	return 0;
}