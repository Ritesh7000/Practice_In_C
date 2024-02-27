#include<stdio.h>

int main(int argc, char *argv[])
{
	int iAns;

	if(argc != 3)
	{
		printf("Invalid argument : ProgramName No1 No2\n");
		return -1;
	}

	//iAns = argv[1] + argv[2];	//error,'+' cannot add two pointers

	iAns = atoi(argv[1]) + atoi(argv[2]);
	//atoi(ascii to integer) he function ahe ascii to integer covert karun deto.

	printf("\nAddition is %d",iAns);

/*
->	147_command_line_arguments_addition_two_integers.exe 10 20

o/p: Addition is 30
*/

	return 0;
}