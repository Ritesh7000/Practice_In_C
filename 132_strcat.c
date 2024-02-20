#include<stdio.h>
#include<string.h>

int main(void)
{
	char source[20],destination[40];

	printf("\n\nEnter destination String:\t"); 		//Good
	gets(destination);
	printf("\n\nEnter Source String:\t");			//Morning
	gets(source);

	strcat(destination,source);

	printf("\n\nConcatenated String Is:\t");		//GoodMorning
	puts(destination);

	return 0;
}