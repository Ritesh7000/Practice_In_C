#include<stdio.h>

int main(void)
{
	int iNo = 10;
	int *const pPtr = &iNo;

	printf("++(*pPtr)=\t%d",++(*pPtr));		//11
	//allowed, pointing to non-constant.

	printf("\n++iNo\t=\t%d",++iNo);			//12
	//allowed, iNo is non-constant.

	//printf("\n++pPtr\t=\t%d",++pPtr);		//error, pPtr is contant.

	return 0;
}
