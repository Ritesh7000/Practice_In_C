#include<stdio.h>
#include<string.h>

int main(void)
{
	char string1[20],string2[20];
	int iSta;

	printf("\n\nEnter string1:\t");
	gets(string1);
	printf("\n\nEnter string2:\t");
	gets(string2);

	iSta = strcmp(string1,string2);

	if(iSta == 0)
		printf("\n\nBoth Strings Are Same\n");
	else
		printf("\n\nBoth String Are Diffrent\n ");

/*  o/p:
1)	Enter string1:  Hello

	Enter string2:  Hello

	Both Strings Are Same


2)	Enter string1:  Hello
	
	Enter string2:  hello

	Both String Are Diffrent
*/

	return 0;
}
