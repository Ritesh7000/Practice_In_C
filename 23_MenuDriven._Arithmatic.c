#include <stdio.h>

int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iChoice;
	int iAns;

	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
	
	printf("\nEnter your Choice =\t");	//3
	scanf("%d", &iChoice);

	if(iChoice < 0 || iChoice > 6)
	{
		printf("Choice is Wrong!");
		return -1;
	}

	printf("\nEnter iNo1 = ");			// 5
	scanf("%d", &iNo1);

	printf("\nEnter iNo2 = ");			// 6
	scanf("%d", &iNo2);

	switch(iChoice)
	{
	case 1:
		iAns = Addition(iNo1, iNo2);
		break;
	case 2:
		iAns = Subtraction(iNo1, iNo2);
		break;
	case 3:
		iAns = Multiplication(iNo1, iNo2);
		break;
	case 4:
		iAns = Division(iNo1, iNo2);
		break;
	case 5:
		iAns = Modulus(iNo1, iNo2);
		break;
	default:
		printf("Invalid Choice");
	}

	printf("\n\nThe Answer is = %d",iAns);  // 30

	return 0;
}

int Addition(int iNo1, int iNo2)
{
	return iNo1 +  iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
	return iNo1 -  iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
	return iNo1 *  iNo2;
}

int Division(int iNo1, int iNo2)
{
	return iNo1 /  iNo2;
}

int Modulus(int iNo1, int iNo2)
{
	return iNo1 %  iNo2;
}