#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int iRows;
	int iColumns;
	int iCounter1;
	int iCounter2;
	int **ppPtr = NULL;

	printf("Enter Number of Rows =\t");
	scanf("%d",&iRows);
	//Enter Number of Rows =  3

	printf("Enter Number of Columns =\t");
	scanf("%d",&iColumns);
	//Enter Number of Columns =       4

	printf("\n");
	ppPtr = (int **) malloc (iRows* sizeof(int *));

	if(NULL == ppPtr)
	{
		printf("Memory Allocation is  Failed!\n");
		return -1;
	}


	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		ppPtr[iCounter1] = (int *) malloc (iColumns * sizeof(int));

		if(NULL == ppPtr[iCounter1])
		{
			printf("Memory Allocation is Failed!\n");
			return -1;
		}

		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{
			printf("Enter Value of arr[%d][%d] =\t",iCounter1,iCounter2);
			scanf("%d",&ppPtr[iCounter1][iCounter2]);
		}
		printf("\n");
	}
/*	o/p:

	Enter Value of arr[0][0] =      1
	Enter Value of arr[0][1] =      2
	Enter Value of arr[0][2] =      3
	Enter Value of arr[0][3] =      4

	Enter Value of arr[1][0] =      5
	Enter Value of arr[1][1] =      6
	Enter Value of arr[1][2] =      7
	Enter Value of arr[1][3] =      8

	Enter Value of arr[2][0] =      9
	Enter Value of arr[2][1] =      10
	Enter Value of arr[2][2] =      11
	Enter Value of arr[2][3] =      12

*/
	printf("\nPrinted Vales are:\n");
	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{	
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{	
			printf("arr[%d][%d] =\t%d\n",iCounter1,iCounter2,ppPtr[iCounter1][iCounter2]);
		}
		printf("\n");
	}
/*	o/p:
	Printed Vales are:
	arr[0][0] =     1
	arr[0][1] =     2
	arr[0][2] =     3
	arr[0][3] =     4

	arr[1][0] =     5
	arr[1][1] =     6
	arr[1][2] =     7
	arr[1][3] =     8

	arr[2][0] =     9
	arr[2][1] =     10
	arr[2][2] =     11
	arr[2][3] =     12
*/
	if(ppPtr != NULL)
	{
		for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
		{
			if(ppPtr[iCounter1] != NULL)
			{
				free(ppPtr[iCounter1]);
				ppPtr[iCounter1] = NULL;
			}
		}

		free(ppPtr);
		ppPtr = NULL;
	}

	return 0;
}