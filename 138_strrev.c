#include<stdio.h>

int main(void)
{
	char string[20];

	printf("\n\nEnter The String:\t");		//Hello
	gets(string);

	strrev(string);

	printf("\n\nReverse String Is:\t");		//olleH
	puts(string);

	return 0;
}