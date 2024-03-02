/*	void *(*p)(int, int(*)());
	p is pointer pointing to function which accepts 2 parameter 1st is integer ans 2nd is address of function
	which accept nothing and return integer and hole function return address of void pointer.	 
*/

#include<stdio.h>

void * Fun1(int , int(*)());
int Fun2();

int main(void)
{
	int *pPtr = NULL;
 	int (*fpPtr2)() = NULL;
	void *(*fpPtr1)(int, int(*)()) = NULL;

	fpPtr1 = Fun1;
	fpPtr2 = Fun2;

	pPtr = (int *) fpPtr1(10, fpPtr2);

	printf("\nFun1 return %d\n",*pPtr);

/*	o/p:

	In Fun1
	iNo     =       10

	In Fun2

	Fun1 return 22

*/

	return 0;
}

void * Fun1(int iNo , int(*fpPtr)())
{
	static int iAns;

	printf("\nIn Fun1\n");

	printf("iNo\t=\t%d\n",iNo);

	iAns = fpPtr();

	return &iAns;
}

int Fun2()
{
	printf("\nIn Fun2\n");

	return 22;
}