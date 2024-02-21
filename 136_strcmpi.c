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

	iSta = strcmpi(string1,string2);

	if(iSta == 0)
		printf("\n\nBoth Strings Are Same\n");
	else
		printf("\n\nBoth string Are Different\n");
	getch();
/*	o/p:
1)	Enter string1:  Hello

	Enter string2:  hello

	Both Strings Are Same
	|(getch() mule wat bhagto carret)

2)	Enter string1:  hello

	Enter string2:  bye

	Both string Are Different
	|

*/

	return 0;
}