#include "Calculation.h"
#include <stdio.h>

void Multiplication(int, int, int);
int Addition(int, int, int);
int Division(int, int);
void Subtraction(int, int);
int Modulus(void);

int main(void)
{
	int iAns;
	int iNo1;
	int iNo2;
	int iNo3;

	printf("Enter a Three Number's =\t");
	scanf("%d%d%d", &iNo1,&iNo2,&iNo3);		// 10 20 30

	iAns = Addition(iNo1, iNo2, iNo3);
	printf("\nAddition is %d ",iAns);      	//60
    
	Subtraction(iNo1,iNo2);
	Multiplication(iNo1, iNo2, iNo3);

	printf("\nEnter a Numerator & Denominator = \t"); //10 5
	scanf("%d%d",&iNo1,&iNo2);
	iAns = Division(iNo1, iNo2);
	printf("\nQuotient is = %d", iAns);              // 2

	iAns = Modulus();
	printf("\nRemainder is = %d",iAns);              //2

	return 0;
}

void Multiplication(int iParam1, int iParam2, int iParam3)
{
	int iAns;
	
	iAns = iParam1 * iParam2 * iParam3;  // 10 20 30  
	printf("\nMultiplication is = %d", iAns); //600
}

int Addition(int iParam1, int iParam2, int iParam3)
{
	return iParam1 + iParam2 + iParam3; //60
}

int Division(int iParam1, int iParam2)
{
	int iAns;
	iAns = iParam1 / iParam2; // 10/5

	return iAns; // 2
}

void Subtraction(int iParam1, int iParam2)
{
	printf("\nSubtraction is = %d ", iParam1 - iParam2); // -10
}

int Modulus(void)
{
	int iNumerator;
	int iDenominator;
	int iRemainder;

	printf("\nEnter iNumerator & iDenominator = \t"); // 10 4
	scanf("%d%d",&iNumerator, &iDenominator);

	iRemainder = iNumerator % iDenominator;

	return iRemainder; 
}