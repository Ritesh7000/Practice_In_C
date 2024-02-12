#include<stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;

	printf("Enter Character 1 :\t");	//A
	scanf("%c",&chChar1);

	printf("Enter Character 2 :\t");	//B
	scanf(" %c",&chChar2);
/*
	'/n' ha blank space la match jhala ani %c ha char la. 	
	pan he solution is not recomended.
*/
	printf("\nCharacter 1 is %c",chChar1);	//A
	printf("\nCharacter 2 is %c",chChar2);	//B

	return 0;
}