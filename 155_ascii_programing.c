#include<stdio.h>
#include<string.h>

int main(void)
{
	char chChar = 'A';

	char szStr[] = "Hello";

	char *pszStr = "Hello";


	printf("sizeof(chChar)\t=\t%d\n",sizeof(chChar));		//1

	printf("sizeof(szStr)\t=\t%d\n",sizeof(szStr));			//6
	
	printf("sizeof(pszStr)\t=\t%d\n",sizeof(pszStr));		//4

	printf("strlen(szStr)\t=\t%d\n",strlen(szStr));			//5

	printf("strlen(pszStr)\t=\t%d\n",strlen(pszStr));		//5

	return 0;
}