#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20];

	printf("\n\nEnter the String:\t");			//HELLO
	gets(str);

	strlwr(str);

	printf("\nString In Lower Case Is:\t");		//hello
	puts(str);

	return 0;

}