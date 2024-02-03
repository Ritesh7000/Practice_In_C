#include<stdio.h>
#define MAX 10

int main(void)
{
	int iLimit;
	int iCounter;
	int arr[MAX] = {0};

	printf("How many element's you want to enter in 1D-Array(between 1-10):-\t");
	scanf("%d",&iLimit);
//	How many element's you want to enter in 1D-Array(between 1-10):-    3
	
	printf("\n");
	
	if(iLimit > MAX)
	{
		printf("Element Count is more than 10.");
		return 1;
	}

	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("Enter element %d =\t", iCounter+1);
		scanf("%d", &arr[iCounter]);
	}
/* 
	Enter element 1 =      10
	Enter element 2 =      20
	Enter element 3 =      30
*/

	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\nElement %d is =\t%d ", iCounter+1, arr[iCounter]);

/*
	Element 1 is =  10
	Element 2 is =  20
	Element 3 is =  30
*/


	return 0;
}