/*
21.	int (*(* arr[2])(int *)) [3];
	arr is array which contain 2 element each element is of type pointer which pointing to function
	which function except address of integer and return address of array which array contain 3 element 
	each element is type of integer. 
*/

#include<stdio.h>

int (* Fun1(int *))[3];
int (* Fun2(int *))[3];

int main(void)
{
	int iNo = 11;	
	int iCounter1;
	int iCounter2;
	int (*pPtr)[3] = NULL;
	int (*(* arr[2])(int *)) [3];

	arr[0] = Fun1;
	arr[1] = Fun2;

	for(iCounter1 = 0;iCounter1 < 2;iCounter1++)
	{
		pPtr = arr[iCounter1](&iNo);

		for(iCounter2 = 0;iCounter2 < 3; iCounter2++)
		{
			printf("%d\n",(*pPtr)[iCounter2]);
		}
	}
/*
	o/p:
	
	In Fun1
	11
	Leave Fun1
	10
	20
	30

	In Fun2
	11
	Leave Fun2
	40
	50
	60
*/
	return 0;
}

int (* Fun1(int * pPtr))[3]
{
	static int arr1[3] = {10,20,30};

	printf("\nIn Fun1\n");
	printf("%d",*pPtr);
	printf("\nLeave Fun1\n");

	return &arr1;
}

int (* Fun2(int *pPtr))[3]
{
	static int arr2[3] = {40,50,60};

	printf("\nIn Fun2\n");
	printf("%d",*pPtr);
	printf("\nLeave Fun2\n");

	return &arr2;
}
