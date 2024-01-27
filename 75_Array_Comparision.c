#include <stdio.h>
#define MAX 10

int CompareArrays(int [],int [],int);

int main(void)
{
	int iLimit1;
	int iLimit2;
	int iCounter;
	int iCompareStatus;
	int arr1[MAX] = {0};
	int arr2[MAX] = {0};

	printf("How many element's you want to enter in array1(between 1-10):-\t");	//	3
	scanf("%d",&iLimit1);

	if(iLimit1 > 10)
	{
		printf("\nEnter element count is more than 10!");
		return 1;
	}

	for(iCounter=0;iCounter<iLimit1;iCounter++)
	{
		printf("Enter Number %d =\t ",iCounter+1);		
		scanf("%d",&arr1[iCounter]);
	}
/*
	How many element's you want to enter in array1(between 1-10):-  3
	Enter Number 1 =	1
	Enter Number 2 =    2
	Enter Number 3 =    3
*/

	printf("\nHow many element's you want to enter in array2(between 1-10):-\t");		//	3
	scanf("%d",&iLimit2);

	if(iLimit2 > 10)
	{
		printf("\nEnter element count is more than 10!");
		return 1;
	}


	if(iLimit1 != iLimit2)
	{
		printf("\narr1 & arr2 element count is not same,\n'Array will be not Equal!'");
		return 0;;
	}

	for(iCounter=0;iCounter<iLimit2;iCounter++)
	{
		printf("Enter Number %d =\t ",iCounter+1);		// 1 2 3
		scanf("%d",&arr2[iCounter]);
	}
/*	
	How many element's you want to enter in array2(between 1-10):-  3
	Enter Number 1 =     2
	Enter Number 2 =     3
	Enter Number 3 =     1
*/

	 iCompareStatus = CompareArrays(arr1,arr2,iLimit1);

	 if(iCompareStatus==1)
	 	printf("\nArray is Equal1!");		//  Array is Equal1!
	 else
	 	printf("\nArray is Not Equal!");

	return 0;
}
/*
//version1:
int CompareArrays(int arr1[],int arr2[],int iLimit)
{
	int iCounter;

	for(iCounter=0;iCounter<iLimit;iCounter++);
	{	
		if(arr1[iCounter] != arr2[iCounter])
			break;
	}
	
	if(iCounter == iLimit)
		return 1;					// return 1
	return 0;
}

*/

//version2:
int CompareArrays(int arr1[],int arr2[],int iLimit)
{
	int iCounter;

	for(iCounter=0;iCounter<iLimit;iCounter++);
	{	
		if(arr1[iCounter] != arr2[iCounter]);
				return 0;
	}
	return 1;							//return 1
}

