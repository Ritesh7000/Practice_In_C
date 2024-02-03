#include<stdio.h>

int Addition(int ,int);
int Multiplication(int, int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int (* pPtr)(int, int) = NULL;
/*
	pPtr is Pionter pointing to Function which contain two parameter,
	each parameter type is int, which is return type is int. 
*/

	printf("Enter Two Number -");		// 10	20
	printf("\nNo1\t=\t");
	scanf("%d",&iNo1);

	printf("No2\t=\t");
	scanf("%d",&iNo2);

	pPtr = Addition;  // or &Addition
/*	
	1.Function name itself is address.
	2.Fuction name is address of first instruction of function 
	3.Jar Addition function la bracket takale tar call jail
*/

	iAns = pPtr(iNo1, iNo2);

	printf("\nAddition is\t=\t%d", iAns);					//30
	printf("\npPtr\t\t=\t%d",pPtr);							//1000
	printf("\nAddition(add)\t=\t%d\n",Addition);			//1000

	pPtr = Multiplication;

	iAns = pPtr(iNo1, iNo2);

	printf("\nMultiplication is\t=\t%d", iAns);				//200
	printf("\npPtr\t\t\t=\t%d",pPtr);						//2000
	printf("\nMultiplication(add)\t=\t%d",Multiplication);	//2000

	return 0;
}

int Addition(int iNo1, int iNo2)
{
	return iNo1 + iNo2;						//20
}

int Multiplication(int iNo1, int iNo2)
{
	return iNo1 * iNo2;						//200
}
