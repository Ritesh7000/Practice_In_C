#include <stdio.h>
#define MAX 10

void Assign(int [],int[],int);

int main(void)
{
	int iLimit;
	int iCounter;
	int arr1[MAX] = {0};
	int arr2[MAX] = {0};

	printf("How many Value Enter in Array1 :\t");
	scanf("%d",&iLimit);

	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("Enter value %d = \t", iCounter+1);
		scanf("%d",&arr1[iCounter]);
	} 
/*
How many Value Enter in Array1 :        3
Enter value 1 =         11
Enter value 2 =         44
Enter value 3 =         77
*/

	printf("\nBefore Assignment :-");

	printf("\nArray1 Values are");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\narr1[%d] =\t%d",iCounter,arr1[iCounter]);
	}
/*
Before Assignment :-
Array1 Values are
arr1[0] =       11
arr1[1] =       44
arr1[2] =       77
*/
	printf("\nArray2 Values are:");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\narr2[%d] =\t%d",iCounter,arr2[iCounter]);
	}
/*
Array2 Values are:
arr2[0] =       0
arr2[1] =       0
arr2[2] =       0
*/

	Assign(arr1, arr2, iLimit);

	printf("\n\nAfter Assignment :-");

	printf("\nArray1 Values are:");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\narr1[%d] =\t%d",iCounter,arr1[iCounter]);
	}
/*
After Assignment :-
Array1 Values are:
arr1[0] =       11
arr1[1] =       44
arr1[2] =       77
*/ 
	printf("\nArray2 Values are:");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\narr2[%d] =\t%d",iCounter,arr2[iCounter]);
	}
/*
Array2 Values are:
arr2[0] =       11
arr2[1] =       44
arr2[2] =       77
*/
	return 0;
}

void Assign(int arr1[],int arr2[], int iLimit)
{
	int iCounter;

	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		arr2[iCounter] = arr1[iCounter];
	}
}
