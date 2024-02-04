#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int iRows;
	int iPlanes;
	int iColumns;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int ***pppPtr = NULL;

	printf("Enter Number of Planes =\t");
	//Enter Number of Planes =        2

	printf("Enter Number of Rows =\t");
	scanf("%d",&iRows);
	//Enter Number of Rows =  3

	printf("Enter Number of Columns =\t");
	scanf("%d",&iColumns);
	//Enter Number of Columns =       4

	printf("\n");
	pppPtr = (int ***) malloc (iPlanes* sizeof(int **));

	if(NULL == pppPtr)
	{
		printf("Memory Allocation is  Failed!\n");
		return -1;
	}


	for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
	{
		pppPtr[iCounter1] = (int **) malloc (iRows * sizeof(int *));

		if(NULL == pppPtr[iCounter1])
		{
			printf("Memory Allocation is Failed!\n");
			return -1;
		}

		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{
			pppPtr[iCounter1][iCounter2] = (int *) malloc (iColumns * sizeof(int));
			
			if(NULL == pppPtr[iCounter1][iCounter2])
			{
				printf("Memory Allocation is Failed!\n");
				return -1;
			}

			for(iCounter3 = 0; iCounter3 < iColumns ; iCounter3++)
			{
				printf("Enter Value of arr[%d][%d][%d] =\t",iCounter1, iCounter2, iCounter3);
				scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3]);
			}
			//printf("\n");
		}
		printf("\n");
	}
/*	o/p:
	Enter Value of arr[0][0][0] =   1
	Enter Value of arr[0][0][1] =   2
	Enter Value of arr[0][0][2] =   3
	Enter Value of arr[0][0][3] =   4
	Enter Value of arr[0][1][0] =   5
	Enter Value of arr[0][1][1] =   6
	Enter Value of arr[0][1][2] =   7
	Enter Value of arr[0][1][3] =   8
	Enter Value of arr[0][2][0] =   9
	Enter Value of arr[0][2][1] =   10
	Enter Value of arr[0][2][2] =   11
	Enter Value of arr[0][2][3] =   12

	Enter Value of arr[1][0][0] =   13
	Enter Value of arr[1][0][1] =   14
	Enter Value of arr[1][0][2] =   15
	Enter Value of arr[1][0][3] =   16
	Enter Value of arr[1][1][0] =   17
	Enter Value of arr[1][1][1] =   18
	Enter Value of arr[1][1][2] =   19
	Enter Value of arr[1][1][3] =   20
	Enter Value of arr[1][2][0] =   21
	Enter Value of arr[1][2][1] =   22
	Enter Value of arr[1][2][2] =   23
	Enter Value of arr[1][2][3] =   24
*/

	printf("\nPrinted Vales are:\n");
	for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
	{	
		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{	
			for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
			{
				printf("arr[%d][%d][%d] =\t%d\n",iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
			}
		}
		printf("\n");
	}
/*	o/p:
	Printed Vales are:
	arr[0][0][0] =  1
	arr[0][0][1] =  2
	arr[0][0][2] =  3
	arr[0][0][3] =  4
	arr[0][1][0] =  5
	arr[0][1][1] =  6
	arr[0][1][2] =  7
	arr[0][1][3] =  8
	arr[0][2][0] =  9
	arr[0][2][1] =  10
	arr[0][2][2] =  11
	arr[0][2][3] =  12

	arr[1][0][0] =  13
	arr[1][0][1] =  14
	arr[1][0][2] =  15
	arr[1][0][3] =  16
	arr[1][1][0] =  17
	arr[1][1][1] =  18
	arr[1][1][2] =  19
	arr[1][1][3] =  20
	arr[1][2][0] =  21
	arr[1][2][1] =  22
	arr[1][2][2] =  23
	arr[1][2][3] =  24
*/

	if(pppPtr != NULL)
	{
		for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
		{
			if(pppPtr[iCounter1] != NULL)
			{
				for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
				{
					if(pppPtr[iCounter1][iCounter2] != NULL)
					{
						free(pppPtr[iCounter1][iCounter2]);
						pppPtr[iCounter1][iCounter2] = NULL;
					}
				}

				free(pppPtr[iCounter1]);
				pppPtr[iCounter1] = NULL;
			}
		}

		free(pppPtr);
		pppPtr = NULL;
	}

	return 0;
}