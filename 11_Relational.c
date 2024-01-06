#include <stdio.h>

int main(void)
{
	int iAns;

	printf("10 > 20 = \t%d\n", 10 > 20);				//0
	printf("10 < 20 = \t%d\n", 10 < 20);				//1
	printf("20 > 20 = \t%d\n", 20 > 20);				//0
	printf("10 >= 20 = \t%d\n", 10 >= 20);			//0
	printf("10 >= 10 = \t%d\n", 10 >= 10);			//1
	printf("10 != 20 = \t%d\n", 10 != 20);			//1
	printf("10 == 20 = \t%d\n", 10 == 20);			//0
	printf("10 == 20 = \t%d\n", 10 == 10);			//1
	printf("20 <= 20 != 0 = %d\n", 20 <= 20 != 0);	//1
	printf("20 <= 20 == 0 = %d\n", 20 <= 20 == 0);	//0

	return 0;
}