#include <stdio.h>

extern int No;
int main(void)
{
	extern float No;			//warning ,redefination of type

	printf("No = %d", No);		//10

	return 0;
}
int No = 10;

