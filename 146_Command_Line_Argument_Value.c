#include<stdio.h>

int main(int argc, char **argv)
{
	int iCounter;

	printf("Command Line Values are:\n");

	printf("%d\n\n",argc);

	for(iCounter = 0; iCounter < argc; iCounter++)
	{
		printf("%s\n",argv[iCounter]);
	}
/*
->	146_Command_Line_Argument_Value.exe 10 20
	
o/p:
	Command Line Values are:
	3
	
	146_Command_Line_Argument_Value.exe
	10
	20
*/
	return 0;
}