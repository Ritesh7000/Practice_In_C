#include<stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	//sz(string zero),string hi \0 ne sampte mhanun 'z'.
	
	char *pszStr = "Hello";
	//psz(pointer string zero)(ye 'Hello' la memory rodata madhe milali)

	printf("sizeof(szStr)  =   %d\n",sizeof(szStr));	//6
	printf("sizeof(pszStr) =   %d\n",sizeof(pszStr));	//4

	printf("\nszStr   =\t%s\n",szStr);		//Hello

	szStr[3] = 'z';		//Allowed
	printf("szStr   =\t%s\n",szStr);		//Helzo
	
	//szStr = "bye";		//error,left operand must be l-value

	printf("\npszStr  =\t%s\n",pszStr);		//Hello
	
	//pszStr[4] = "z";	//crash, pszStr ha rodata madhe change kartoy ani he allowed nahi ahe mhanun crash.
	
	pszStr = "bye";		//allowed
	//jar pointer madhe apan direct string strore karat asu tar tya string jaga "rodata"(read only data) madhe milte
	//ani tya string cha address pointer madhe strore hoto.ani tya string madhe apan chages karu shakat nahi.
	
	printf("pszStr  =\t%s",pszStr);	//bye

	return 0;
}