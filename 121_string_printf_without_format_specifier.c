#include<stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";

	printf(szStr);
	printf(pszStr);
	printf("Night");

//o/p: HelloGoodNight

	return 0;
}