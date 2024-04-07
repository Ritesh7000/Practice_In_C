/*
22) int *(*(* arr[3])())();
	arr is array which contain 3 element each element type of pointer pointing to function which 
	function accept nothing & return address of function, which function accept nothing and return
	address of integer.
*/

#include<stdio.h>

int *(* Fun1())();
int *(* Fun2())();
int *(* Fun3())();
int * Fun4();

int main(void)
{
	int iCounter1;

	int *pPtr = NULL;
	int *(*fpPtr)() = NULL;
	int *(*(* arr[3])())() = {Fun1,Fun2,Fun3};	

	for(iCounter1 = 0;iCounter1 < 3; iCounter1++)
	{
		fpPtr = arr[iCounter1]();
		pPtr = fpPtr();

		printf("%d\n",*pPtr);
	}
/*	o/p:

	In Fun1
	In Fun4
	11

	In Fun2
	In Fun4
	12

	In Fun3
	In Fun4
	13	
*/
	return 0;
}

int *(* Fun1())()
{
	printf("\nIn Fun1\n");

	return Fun4;
}

int *(* Fun2())()
{
	printf("\nIn Fun2\n");
	return Fun4;
}

int *(* Fun3())()
{
	printf("\nIn Fun3\n");

	return Fun4;
}

int * Fun4()
{
	static int iNo = 10;

	printf("In Fun4\n");
	iNo++;
	return &iNo;
}

