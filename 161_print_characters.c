#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char chChar;

	fp = fopen("print_character.txt","r");

	if(NULL == fp)
	{
		printf("\nCant Open File\n");
		return -1;
	}

	while(1)
	{
		if((chChar = fgetc(fp)) == EOF)
			break;
		else
			printf("%c",chChar);
	}
	//Hello World
	
	fclose(fp);
	fp = NULL;

	return 0;
}