/*
23.	void **((*(*p)[3])(void(*(*)[])(void)))
	'p' is pointer pointing to array which contain 3 element each element is type of pointer which is pointing
	to function which function accept address of array each element is type of pointer which is pointing to 
	function which function accept nothing and return nothing and hole function return address of void pointer.   
*/

#include<stdio.h>

void** Fun1(void(*(*)[])(void));
void** Fun2(void(*(*)[])(void));	
void** Fun3(void(*(*)[])(void));

void Fun4(void);
void Fun5(void);
void Fun6(void);

int main(void)
{
	int iCounter;
	void ** (*arr1[3])(void(*(*)[])(void));
	void((*arr2[])(void)) = {Fun4, Fun5, Fun6};
	void **((*(*pPtr)[3])(void(*(*)[])(void))) = NULL;

	arr1[0] = Fun1;
	arr1[1] = Fun2;
	arr1[2] = Fun3;

	for(iCounter = 0;iCounter < 3; iCounter++)
	{
		pPtr = *(arr1[iCounter])(&arr2);
		printf("\n%d",**pPtr);
		printf("\n");
	}
/*	o/p:

	In Fun1
	In Fun4
	In Fun5
	In Fun6
	10

	In Fun2
	In Fun4
	In Fun5
	In Fun6
	11

	In Fun3
	In Fun4
	In Fun5
	In Fun6
	12
	
*/
	return 0;
}	

void** Fun1(void(*(*pPtr)[])(void))
{
	int iCounter;
	static int iNo1 = 10;
	static int *ppPtr1 = &iNo1;

	printf("\nIn Fun1");
	for(iCounter = 0;iCounter < 3; iCounter++)
	{
		(*pPtr)[iCounter]();
	}

	return &ppPtr1;
}

void** Fun2(void(*(*pPtr)[])(void))
{
	int iCounter;
	static int iNo2 = 11;
	static int *ppPtr2 = &iNo2;

	printf("\nIn Fun2");
	for(iCounter = 0;iCounter < 3; iCounter++)
	{
		(*pPtr)[iCounter]();
	}

	return &ppPtr2;
}	

void** Fun3(void(*(*pPtr)[])(void))
{
	int iCounter;
	static int iNo3 = 12;
	static int *ppPtr3 = &iNo3;

	printf("\nIn Fun3");
	for(iCounter = 0;iCounter < 3; iCounter++)
	{
		(*pPtr)[iCounter]();
	}

	return &ppPtr3;
}

void Fun4(void)
{
	printf("\nIn Fun4");
}

void Fun5(void)
{
	printf("\nIn Fun5");	
}

void Fun6(void)
{
	printf("\nIn Fun6");
}