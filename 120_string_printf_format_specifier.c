#include<stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";

	printf("%s",szStr);
	printf("%s",pszStr);
	printf("%s","Night");

	//HelloGoodNight

	return 0;
}