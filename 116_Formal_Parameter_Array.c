#include<stdio.h>

void Fun(char []);

int main(void)
{
	Fun("Hello");

	return 0;
}
 
void Fun(char szStr[])//jevha apan string pass karu tevha formal parameter ha array lihila asun to pointer ch asto.
{
	printf("%s\n",szStr);		//Hello

	//szStr[4] = 'z';			//crash, 
	//as vatat ha allowed asel,pan formal parameter ha pointer ch ahe ani pointer madhalya(add) string la memory hi rodata madhe milte
	//mhanun crash hoil.
	
	szStr = "bye";				//Allowed

	printf("%s\n",szStr);		//bye
}