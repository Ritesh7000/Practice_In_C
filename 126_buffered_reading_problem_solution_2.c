#include<stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;

	printf("Enter Character 1 :\t");	//A
	scanf("%c",&chChar1);

	fflush(stdin);

	printf("Enter Character 2 :\t");	//B
	scanf("%c",&chChar2);

	printf("\nCharacter 1 is %c",chChar1);	//A
	printf("\nCharacter 2 is %c",chChar2);	//B

/*	
1.	'fflush' ne apan buffered rikama karu.fflush he file handling ch function ahe.
	'stdin' he scanf ani 'stdout' he printf, mhanjech konti file flush karaychi he sangnyasathi vapartat.
2.	this method is recomended but these function(fflush) is not supported to all platform
*/
	return 0;
}