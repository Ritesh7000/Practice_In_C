#include<stdio.h>

int main(int argc, char *argv[])
{
	int iAns = 0;
	int iCounter;

	for(iCounter = 1; iCounter < argc; iCounter++)
		iAns = iAns + atoi(argv[iCounter]);

	printf("Answer is = %d",iAns);

/*
1.
	>	 148_Command_line_arguuments_addition_multiple_value.exe
	o/p: Answer is = 0

2.
	>	 148_Command_line_arguuments_addition_multiple_value.exe 10
	o/p: Answer is = 10

3.
	>	 148_Command_line_arguuments_addition_multiple_value.exe 10 15 5 6 4 5
	o/p: Answer is = 45
*/
	return 0;
}