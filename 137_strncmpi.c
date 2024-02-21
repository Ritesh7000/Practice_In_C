#include<stdio.h>
#include<string.h>

int main(void)
{
	char string1[20],string2[20];
	int iSta,iNo;

	printf("\n\nEnter string1:\t");		//Hello
	gets(string1);
	printf("\n\nEnter string2:\t");		//hello
	gets(string2);
	printf("\n\nEnter n:\t");			//3
	scanf("%d",&iNo);

	iSta = strncmpi(string1,string2,iNo);
	//he ya compiler(visual studio 2010) chya string.h madhe ya function ch diclaration nahi ahe.
	//linux var try kar
	if(iSta == 0)
		printf("\n\nBoth Strings Are Same\n");		//Both Strings Are Same
	else
   		printf("\n\nBoth String Are Diffrent\n ");
	getch();

	return 0;
}