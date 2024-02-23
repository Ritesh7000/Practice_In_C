#include<stdio.h>
//#include<string.h>

int main(void)
{
	char str[20];

	printf("\n\nEnter the String:\t");			//hello
	gets(str);

	strupr(str);

	printf("\nString In Lower Case Is:\t");		//HELLO
	puts(str);

	return 0;
}