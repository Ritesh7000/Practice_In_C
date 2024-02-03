#include<stdio.h>

int main(void)
{
	int *pPtr = NULL;

	{
		int iNo = 10;
		pPtr = &iNo;

		printf("*pPtr\t=\t%d",*pPtr);	//10
	}

	printf("\n*pPtr\t=\t%d");			//Dangling Pointer
	//ans 10 yeu shakat pan pointer kadhina kadhi crash hoil.			

	return 0;
}