#include<stdio.h>

int CheckArmstrong(int);

int main(void)
{
	int iNo;

	printf("Enter Number =\t");
	scanf("%d",&iNo);


	if(CheckArmstrong(iNo))
		printf("This is Armstrong Number.");
	else
		printf("This is NOT Armstrong Number.");

	return 0;
}

int CheckArmstrong(int iNo)
{
	int iCount = 0;
	int iTemp = iNo;  //backup iNo
	int iMod = 0;
	int iAns1 = 0;
	int iAns2;

	while(iTemp != 0)
	{
		iTemp /= 10;
		iCount++;
	}

	iTemp = iNo;
	while(iNo != 0)
	{
		int i = 0;
		iAns2 = 1;

		iMod = iNo%10;

		while(i != iCount)
		{
			i++;
			iAns2 *= iMod; 
		}
		
		iAns1 += iAns2;
	
		iNo /= 10;
	}

	if(iAns1 == iTemp)
		return 1;

	return 0;
}