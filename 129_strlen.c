#include<stdio.h>
#include<string.h>

int main(void)
{
	char *pszPtr = "Hello";
	char szStr[] = "Good";

	printf("\nThe Length of Helllo is %d\n",strlen(pszPtr));	//5

	printf("The Length of Good is %d\n",strlen(szStr));			//4

	printf("The Length of Morning is %d\n",strlen("Morning"));	//7

	return 0;
}