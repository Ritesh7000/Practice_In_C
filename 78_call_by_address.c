#include <stdio.h>

void Fun(int *);

int main(void)
{
	int iNo = 10;

	printf("Before calling Fun, iNo = %d\n",iNo);	//10

	Fun(&iNo);

	printf("\nAfter calling Fun, iNo = %d\n",iNo);	//11

	return 0;
}

void Fun(int *pPtr)
{
	printf("In Fun,iNo =\t%d",*pPtr);				//10

	(*pPtr)++;
	/*
		(*pPtr)++
		(*pPtr) = (*pPtr) + 1
		(*pPtr) = 10 + 1
		(*pPtr) = 11
	*/

	printf("\nLeaving Fun,iNo =\t%d",*pPtr);		//11
}
