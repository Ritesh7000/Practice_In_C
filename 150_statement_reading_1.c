/*
	int(*arr[3])[2];
	arr is array which contain 3 element each element is type of pointer which strore addres of array which array conatin
	2 element each element is type of integer.  
*/
#include<stdio.h>

int main(void)
{
	int iCounter1;
	int iCounter2;
	int arr1[2];
	int arr2[2];
	int arr3[2];
	int (*arr[3])[2] = {&arr1, &arr2, &arr3};

	printf("Enter the values:\n");
	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < 2; iCounter2++)
		{
			printf("((*(arr[%d]))[%d])\t=\t",iCounter1,iCounter2);
			scanf("%d",&((*(arr[iCounter1]))[iCounter2]));
		}
	}
/*	o/p:
	Enter the values:
	((*(arr[0]))[0])        =       1
	((*(arr[0]))[1])        =       20
	((*(arr[1]))[0])        =       30
	((*(arr[1]))[1])        =       40
	((*(arr[2]))[0])        =       50
	((*(arr[2]))[1])        =       60
*/
	printf("\nPrinted values are:\n");

	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < 2; iCounter2++)
		{
			printf("(*arr[%d])[%d]\t=\t%d\n",iCounter1,iCounter2,(*(arr[iCounter1]))[iCounter2]);
		}
	}
/*	o/p:
	Printed values are:
	(*arr[0])[0]    =       1
	(*arr[0])[1]    =       20
	(*arr[1])[0]    =       30
	(*arr[1])[1]    =       40
	(*arr[2])[0]    =       50
	(*arr[2])[1]    =       60
*/
	return 0;
}