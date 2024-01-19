#include <stdio.h>

int main(void)
{
	int No1;					//allowed, defination
	int No2 = 10;				//allowed, defination
	extern int No3;				//allowed,declaration
	//extern int No4 = 10;		//error,cannot initialize extern variable with block scope

	printf("No1 =\t%d\n",No1);		//garbage
	//warning,uninitialized local variable 'No1' used

	printf("No2 =\t%d\n",No2);		//10
	
	//printf("No3 =\t%d\n",No3);		//unresolved external symbol _No3 referenced in function _main
	
	//printf("No4 =\t%d\n",No4);	//error

	return 0;
}