#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20],chChar;

	printf("\n\nEnter The String:\t");				//Pass@123
	gets(str);
	printf("\n\nEnter The Character To Set:\t");	//*
	scanf("%c",&chChar);

	strset(str,chChar);

	printf("\n\nNow String Is:\t");					//********
	puts(str);

	return 0;
}