#include<stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;
	char Temp;

	printf("Enter Character 1 :\t");	//A
	scanf("%c",&chChar1);

	printf("Enter Character 2 :\t");	//B
	//scanf("%c%c",&chChar2,&chChar2);
		//or
	scanf("%c%c",&Temp,&chChar2);
	

	printf("\nCharacter 1 is %c",chChar1);	//A
	printf("\nCharacter 2 is %c",chChar2);	//B

	return 0;
}