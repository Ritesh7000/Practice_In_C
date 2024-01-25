#include <stdio.h>

int main(void)
{
	struct Demo
	{
		char chChar;
		short int siNo;
		int iNo;
	}obj;

	printf("sizeof(obj) =\t%d",sizeof(obj));	//8

	return 0;
}