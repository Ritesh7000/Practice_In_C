#include<stdio.h>

void Display_1_to_N(int);
void Display_N_to_1(int);


int main(void)
{

	int iNo;

	printf("Enter a Number = \n");
	scanf("%d",&iNo);				//5

	printf("\n1 to N :-\n");
	Display_1_to_N(iNo);
	printf("\nN to 1 :-\n");
	Display_N_to_1(iNo);

	return 0;
}

/*
void Display_1_to_N(int iNo)
{
	if(iNo == 0)
		return;
	
	Display_1_to_N(iNo - 1);	//ithe zero ci staframe yetee
	printf("%d\t",iNo);
}
*/
void Display_1_to_N(int iNo)
{
	if(iNo != 1)
		Display_1_to_N(iNo - 1);	//yaat madhe  0 chi stackframe yetach nahi 
	printf("%d\t",iNo);
}
// o/p: = 1 2 3 4 5

void Display_N_to_1(int iNo)
{
	printf("%d\t",iNo);

	if(iNo != 1)
		Display_N_to_1(iNo - 1);
}

// o/p : 5 4 3 2 1 