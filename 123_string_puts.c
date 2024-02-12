#include<stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszstr = "Good";

	//puts adhi output deto ani last '\n' append karto mhanun new line la o/p yeto
	puts(szStr);
	puts(pszstr);
	puts("Night");
	
/*  o/p:
	Hello
	Good
	Morning
*/
	return 0;
}