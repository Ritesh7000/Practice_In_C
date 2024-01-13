#include <stdio.h>

void Factorial_Non_Recursion(int);
int Factorial_Recursion(int);

int main(void)
{
	int iNo;

	printf("Enter a Number = ");    
	scanf("%d", &iNo); 				//5

    printf("\nFactorial is = %d\n\n",Factorial_Recursion(iNo)); //120

    Factorial_Non_Recursion(iNo);

	return 0;
}

int Factorial_Recursion(int iNo)    //using Recursion
{ 
	if(iNo == 1)
		return 1;		

	return Factorial_Recursion(iNo - 1) * iNo;
}


void Factorial_Non_Recursion(int iNo)
{	int iAns = 1;
	int iCounter;


	iAns = iNo;   // iAns  = 5  (yamule ak stack frame kami yeil)
	for(iCounter = iNo-1; iCounter != 1; iCounter--)
	{
		iAns = iAns * iCounter;                   //5*4  
	}

	printf("Factorial is = %d", iAns); 				//120
}