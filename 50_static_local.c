#include <stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
	int iCounter;

	printf("In Fun1 =\t");				
	for(iCounter = 0;iCounter < 3;iCounter++)
	{
		Fun1();
	}

	printf("\nIn Fun2 =\t");	
	for(iCounter = 0;iCounter < 3;iCounter++)
	{
		Fun2();
	}

	return 0;
}

void Fun1(void)
{
	int iNo = 10;

	++iNo;						 
	printf("%d\t",iNo);			//In Fun1 =	11 11 11
}

void Fun2(void)
{
	static int iNo = 10;
	++iNo;

	printf("%d\t",iNo);			//In Fun1 =	11 12 13 
}