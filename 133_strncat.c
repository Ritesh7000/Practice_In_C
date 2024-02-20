#include<stdio.h>
#include<string.h>

int main(void)
{
	char source[20],destination[40];
	int iNo;

	printf("\n\nEnter Destination String:\t");		//Good
	gets(destination);

	printf("\n\nEnter Source String:\t");			//Morning
	gets(source);
	printf("\n\nEnter Value Of iNo:\t");			//3
	scanf("%d",&iNo);

	strncat(destination,source,iNo);

	printf("\n\nConcatenatedString Is:\t");			//GoodMor
	puts(destination);

	return 0;
}