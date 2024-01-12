#include <stdio.h>

void Fun1(int);

int main(void)
{
	int iNo = 10;

	printf("Before calling Fun1, iNo = %d\n", iNo);	//10
 
	Fun1(iNo);
	printf("After Calling fun1, iNo = %d\n",iNo);	//10

	return 0;
}

void Fun1(int iNo)
{
	printf("In Fun1, iNo = %d\n",iNo);	//10

	iNo++;

	printf("Leaving Fun1,iNo = %d\n",iNo);	//11
}
