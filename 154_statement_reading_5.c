/*
	void **(*p)(float *, int **(*) (int *, int **));
	p is pointer pointing to function which accept 2 parameter 1st is address of float and 2nd is address of
	function which accept 2 parameter 1st accept address of integer and 2nd accept address of interger 
	pointer and function return address of integer pointer and whole function return address od void pointer.	 
*/


#include<stdio.h>

void ** Fun1(float *,int ** (*)(int *, int **));
int **Fun2(int *, int **);

int main(void)
{
	float fNo = 60.77f;
	int **ppPtr = NULL;

	void **(*fpPtr1)(float *, int **(*) (int *, int **)) = NULL;
	int ** (*fpPtr2)(int *, int **) = NULL;

	fpPtr1 = Fun1;
	fpPtr2 = Fun2;

	ppPtr = (int **) fpPtr1(&fNo, fpPtr2);

	printf("\nFun1  return %d\n",**ppPtr);

/* o/p:

	In Fun1
	float = 60.770000

	In Fun2
	*pPtr   =       10
	**ppPtr =       20

	Fun2 returned 30

	Fun1  return 20
	
*/
	return 0;
}

void ** Fun1(float *pPtr, int ** (*fpPtr)(int *, int **))
{
	int iNo1 = 10;
	static int iNo2 = 20;
	static int * pPtr1 = &iNo2;
	int **ppPtr = NULL;

	printf("\nIn Fun1\n");

	printf("float = %f\n",*pPtr);

	ppPtr = fpPtr(&iNo1, &pPtr1);

	printf("\nFun2 returned %d\n",**ppPtr);

	return &pPtr1;
}

int **Fun2(int *pPtr, int **ppPtr)
{
	static int iNo = 30;
	static int *pTemp = &iNo;

	printf("\nIn Fun2\n");
	
	printf("*pPtr\t=\t%d\n",*pPtr);
	printf("**ppPtr\t=\t%d\n",**ppPtr);

	return &pTemp;
}
