#include <stdio.h>

int main(void)
{
	extern int No;
	extern int No;		//allowed

	printf("No = %d",No);		//10

	return 0;
}

int No = 10;