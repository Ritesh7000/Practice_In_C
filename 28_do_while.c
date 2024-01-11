#include <stdio.h>

int main(void)
{
	int iCounter;

	printf("\nusing while, Initially condition false\n");

	iCounter = 3;
	while(iCounter < 3)
	{
		printf("%d\t",iCounter);
		iCounter++;
	}
	// o/p: no output

	printf("\nusing do-while, Initially condition false\n");

	iCounter = 3;
	do
	{
		printf("%d\t",iCounter);
		iCounter++;
	}while(iCounter < 3);
	// o/p: 3


	printf("\nUsing do-while\n");
	iCounter = 0;
	do
	{
		printf("%d\t", iCounter);
		iCounter++;
	}while(iCounter<3);
	// o/p: 0 1 2 


	return 0;
}