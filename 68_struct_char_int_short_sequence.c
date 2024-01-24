#include <stdio.h>

int main(void)
{
	struct Demo
	{
		char chChar;
		int iNo;
		short int siNo;
	}obj;

	printf("sizeof(obj) =\t%d",sizeof(obj));	//12

	return 0;
}