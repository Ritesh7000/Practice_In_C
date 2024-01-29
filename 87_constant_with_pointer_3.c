#include<stdio.h>

int main(void)
{
	int iNo = 10;
	const int *pPtr = &iNo;

	//printf("++(*pPtr)\t=\t%d",++(*pPtr)); //error, pointing to constant

	printf("\n++iNo\t=\t%d",++iNo);		    //11	-allowed, iNo is non-constant

	printf("\n++pPtr\t=\t%d",++pPtr);	    // 13630252   /104	
	//allowed, pPtr is non-constant

	return 0;
}