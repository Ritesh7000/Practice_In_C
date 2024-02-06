#include<stdio.h>

void Fun(char *);

int main(void)
{
	printf("IN main");
	Fun("Hello");

	return 0;
}

void Fun(char * pszStr)
{
	printf("\nIN Fun\n");

	printf("%s\n",pszStr);		//Hello

	//pszStr[4] = 'z';			//crash,rodata data madhe change karu sakat nahi

	pszStr = "bye";				//allowed, yala memory direct rodata madhe milele
	printf("%s\n",pszStr);		//bye
}
