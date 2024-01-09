#include <stdio.h>

int main(void)
{
	int iNo;

	iNo = 5;
	if(iNo < 10)
		printf("One\n");
	else
		printf("Two\n");
	//o/p :	One

	iNo = 15;
	if(iNo < 10)
		printf("One\n");
	else
		printf("Two\n");
	//o/p :	Two
	
	iNo = 5;
	if(iNo < 10)
		printf("One\t");
	//	printf("Two\n");
	else
		printf("Three\n");
	//o/p :	error, no matching if found

	iNo = 15;
	if(iNo < 10)
	{	
		printf("One\t");
		printf("Two\n");
	}	
	else
		printf("Three\n");
	//o/p :	Three

	iNo = 15;
	if(iNo < 10);
	/*{
		printf("One\n");
		printf("Two\n");
	}*/
	else
		printf("Three\n");
	//o/p :	error,no matching if found
	
	return 0;
}