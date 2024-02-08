#include<stdio.h>

#define MAX 6
int main(void)
{
	char * pszStr = NULL;

	pszStr = (char *)malloc(MAX * sizeof(char));

	if(NULL == pszStr)
	{
		printf("Memory Allocation is FAILED\n");
		return -1;
	}

	pszStr[0] = 'H';
	pszStr[1] = 'E'; 
	pszStr[2] = 'L'; 
	pszStr[3] = 'L'; 
	pszStr[4] = '0'; 
	pszStr[5] = '\0';

	printf("\npszStr  =  %s\n",pszStr);				//HELLO

	if(pszStr != NULL)
	{
		free(pszStr);
		pszStr = NULL;
	} 

	return 0;
}