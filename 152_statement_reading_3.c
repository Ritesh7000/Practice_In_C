/*
	int (*(*p[2])())[3];
	p is array which contain 2 element each element is type of Pointer which store add of function which function accept
	nothing and return address of array which array contain 3 element each element type of integer.   
*/ 


#include<stdio.h>

int (* Fun1())[3];
int (* Fun2())[3];

int main(void)
{
	int iCounter1;
	int iCounter2;
	int(*pPtr)[3] = NULL;
	int (*(*arr[2])())[3];

	arr[0] = Fun1;
	arr[1] = Fun2;

	for(iCounter1 = 0; iCounter1 < 2; iCounter1++)
	{
		printf("\n\nIn Fun%d\n",iCounter1+1);
		pPtr = (arr[iCounter1])();
		for(iCounter2 = 0; iCounter2 < 3; iCounter2++)
		{
			printf("%d\t",(*pPtr)[iCounter2]);
		}
		printf("\n");
	}

	return 0;
}

int (* Fun1())[3]
{
	static int arr[3] = {10,20,30};

	return &arr;
}

int (* Fun2())[3]
{
	static int arr[3] = {40,50,60};

	return &arr;
}

