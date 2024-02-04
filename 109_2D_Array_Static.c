#include<stdio.h>

#define MAX1 10
#define MAX2 10

int main(void)
{
	int iRows;
	int iColumns;
	int iCounter1;
	int iCounter2;
	int arr[MAX1][MAX2] = {0};

	printf("How many Rows you want to enter(1-10) =\t");
	scanf("%d",&iRows);
	//How many Rows you want to enter(1-10) = 3

	if(iRows > MAX1)
	{
		printf("Rows count is more than 10.");
		return 1;
	}

	printf("\nHow many Columns you want to enter(1-10) =\t");
	scanf("%d",&iColumns);
	//How many Columns you want to enter(1-10) =  2

	printf("\n");
	if(iColumns > MAX2)
	{
		printf("Column count is more than 10.");
		return 1;
	}

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{
			printf("Enter Value of arr[%d][%d] =\t",iCounter1,iCounter2);
			scanf("%d",&arr[iCounter1][iCounter2]);
		}

	}

/*  o/p :
	Enter Value of arr[0][0] =      10
	Enter Value of arr[0][1] =      20
	Enter Value of arr[1][0] =      30
	Enter Value of arr[1][1] =      40
	Enter Value of arr[2][0] =      50
	Enter Value of arr[2][1] =      60
*/

	printf("\n");
	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{
			printf("\narr[%d][%d] value is =\t%d",iCounter1,iCounter2,arr[iCounter1][iCounter2]);
		}
		printf("\n");
	}

/*	o/p :
	arr[0][0] value is =    10
	arr[0][1] value is =    20

	arr[1][0] value is =    30
	arr[1][1] value is =    40

	arr[2][0] value is =    50
	arr[2][1] value is =    60
*/

	return 0;
}