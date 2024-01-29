#include<stdio.h>

int main(void)
{
	int iNo = 10;
	int *pPtr = &iNo;

	++(*pPtr);								//allowed,pointer pointing to non-constantant 
	printf("*pPtr\t=\t%d",*pPtr);			//11

	iNo++;									//allowed,iNo is non-constant
	printf("\niNo\t=\t%d",iNo);				//11

	printf("\npPtr\t=\t%d",pPtr);			// 9959560   /100

	printf("\npPtr++\t=\t%d",++pPtr);		// 9959564	 /104
	
	//allowed, pPtr is non-constant
	//array la swatachi memory nahi ahe,pan pPtr la swatachi memory aste,mhanun pPtr = pPtr+1 allowed
	
	return 0;
}