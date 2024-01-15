#include <stdio.h>

extern int No;

int main(void)
{
	extern int No;

	printf("No = %d",No);		//10

	return 0;
}
int No = 10;