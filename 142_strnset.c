#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20],chChar;
	int iNo;

	printf("\n\nEnter The String:\t");				//Pass@123
	gets(str);
	printf("\n\nEnter The Character To Set:\t");	//*
	scanf("%c",&chChar);
	printf("\n\nEnter The Value Of n:\t");			//3
	scanf("%d",&iNo);

	strnset(str,chChar,iNo);

	printf("\n\nNow String Is:\t");					//***s@123
	puts(str);

	return 0;
}