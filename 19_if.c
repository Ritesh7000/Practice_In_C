#include <stdio.h>

int main(void)
{
	int iNo;
	
	iNo = 5;

	if(iNo < 10)
		printf("One\t");
		printf("Two\n");
	//o/p: One	Two
	

	iNo = 15;
	if(iNo < 10)
		printf("One\t");
		printf("Two\n");
	//o/p : Two
	

	iNo = 5;
	if(iNo < 10)
	{
		printf("One\t");
		printf("Two\n");
	}
	//o/p: One	Two

	iNo = 15;
	if(iNo < 10);
	{	
		printf("One\t");
		printf("Two\n");
	}
	//o/p: One	Two

	iNo = 15;
	if(iNo < 10)
	{	
		printf("One\t");
		printf("Two\n");
	}
	//o/p: No Output

	return 0;
}