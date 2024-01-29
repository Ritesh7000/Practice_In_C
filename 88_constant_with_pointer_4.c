#include<stdio.h>

int main(void)
{
	const int iNo = 10;
	int *pPtr = &iNo;	//warning :- 'initializing' : different 'const' qualifiers

	printf("++(*pPtr)\t=\t%d",++(*pPtr)); 		//11
	//allowed ,pointing to non-constant

	//printf("\n++iNo\t=\t%d",++iNo);		 	//error,iNo is constant
	
	printf("\n++pPtr\t=\t%d",++pPtr);	  		//19920968    /104
	//allowed, pPtr is non-constant

	return 0;
}
