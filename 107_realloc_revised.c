#include <stdio.h>

int main(void)
{
	int iCounter;
	int * pPtr = NULL;
	int * pTemp = NULL;

	//allocating memory for 10 int(40 byte)
	pPtr = (int *) malloc(10 * sizeof(int));

	if(NULL == pPtr)
	{
		printf("Memory Allocation is FAILED");
		return -1;
	}

	//use of 40 bytes pPtr
	printf("\nuse of 10 int:\n");
	for(iCounter = 0; iCounter < 10; iCounter++)
	{
		printf("Enter value of pPtr[%d] =\t",iCounter);
		scanf("%d",&(pPtr[iCounter]));
	}

	printf("\n");

	for(iCounter = 0; iCounter < 10; iCounter++)
	{
		printf("Value of pPtr[%d] =\t%d\n",iCounter,pPtr[iCounter]);
	}

	//reallocating memory for 15 int
	pTemp = (int *) malloc(pPtr, 15*sizeof(int));

	if(NULL == pTemp)
	{
		printf("Memory Allocation is FAILED");
		return -1;
	}
	else
	{
		pPtr = pTemp;
		pTemp = NULL;
	}

	//use of 60 bytes pPtr
	printf("\nuse of 15 int:\n");
	for(iCounter = 0; iCounter < 15; iCounter++)
	{
		printf("Enter value of pPtr[%d] =\t",iCounter);
		scanf("%d",&(pPtr[iCounter]));
	}
	printf("\n");

	for(iCounter = 0; iCounter < 15; iCounter++)
	{
		printf("Value of pPtr[%d] =\t%d\n",iCounter,pPtr[iCounter]);
	}

	//reallocating memory  for 5 int
	pPtr = (int *)malloc(5 * sizeof(int));

	//use of 20 bytes usiing pPtr
	printf("\nuse of 5 int:\n");
	for(iCounter = 0; iCounter < 5; iCounter++)
	{
		printf("Enter value of pPtr[%d] =\t",iCounter);
		scanf("%d",&(pPtr[iCounter]));
	}
	printf("\n");

	for(iCounter = 0; iCounter < 5; iCounter++)
	{
		printf("Value of pPtr[%d] =\t%d\n",iCounter,pPtr[iCounter]);
	}

	if(pPtr != NULL)
	{
		free(pPtr);
		pPtr = NULL;
	}
/*	o/p:

	use of 10 int:
	Enter value of pPtr[0] =        1
	Enter value of pPtr[1] =        2
	Enter value of pPtr[2] =        3
	Enter value of pPtr[3] =        6
	Enter value of pPtr[4] =        5
	Enter value of pPtr[5] =        4
	Enter value of pPtr[6] =        7
	Enter value of pPtr[7] =        8
	Enter value of pPtr[8] =        9
	Enter value of pPtr[9] =        8

	Value of pPtr[0] =      1
	Value of pPtr[1] =      2
	Value of pPtr[2] =      3
	Value of pPtr[3] =      6
	Value of pPtr[4] =      5
	Value of pPtr[5] =      4
	Value of pPtr[6] =      7
	Value of pPtr[7] =      8
	Value of pPtr[8] =      9
	Value of pPtr[9] =      8

	use of 15 int:
	Enter value of pPtr[0] =        5
	Enter value of pPtr[1] =        6
	Enter value of pPtr[2] =        5
	Enter value of pPtr[3] =        6
	Enter value of pPtr[4] =        5
	Enter value of pPtr[5] =		22
	Enter value of pPtr[6] =        6
	Enter value of pPtr[7] =        5
	Enter value of pPtr[8] =        9
	Enter value of pPtr[9] =        8
	Enter value of pPtr[10] =       7
	Enter value of pPtr[11] =       4
	Enter value of pPtr[12] =       1
	Enter value of pPtr[13] =       2
	Enter value of pPtr[14] =       3

	Value of pPtr[0] =      5
	Value of pPtr[1] =      6
	Value of pPtr[2] =      5
	Value of pPtr[3] =      6
	Value of pPtr[4] =      5
	Value of pPtr[5] =      22
	Value of pPtr[6] =      6
	Value of pPtr[7] =      5
	Value of pPtr[8] =      9
	Value of pPtr[9] =      8
	Value of pPtr[10] =     7
	Value of pPtr[11] =     4
	Value of pPtr[12] =     1
	Value of pPtr[13] =     2
	Value of pPtr[14] =     3

	use of 5 int:
	Enter value of pPtr[0] =        6
	Enter value of pPtr[1] =        5
	Enter value of pPtr[2] =        8
	Enter value of pPtr[3] =        9
	Enter value of pPtr[4] =        7

	Value of pPtr[0] =      6
	Value of pPtr[1] =      5
	Value of pPtr[2] =      8
	Value of pPtr[3] =      9
	Value of pPtr[4] =      7

*/

	return 0;
}