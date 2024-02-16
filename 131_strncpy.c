#include<stdio.h>
#include<string.h>

int main(void)
{
	int iNo;
	char source[20];
	char destiniation[20];

	printf("\n\nEnter  Source String :\t");
	gets(source);
	printf("\n\nEnter Value Of n:\t");
	scanf("%d",&iNo);

	printf("\n\nSource Strinig Is:\t");
	puts(source);

	strncpy(destiniation,source,iNo);

	printf("\n\nDestination string Is:\t");
	puts(destiniation);
/*	o/p:


	Enter  Source String :  hello


	Enter Value Of n:       3


	Source Strinig Is:      hello


	Destination string Is:  hel σàâ
	(3 char chya pudhe garbage print hot ahe.)
*/
	
	return 0;
}
