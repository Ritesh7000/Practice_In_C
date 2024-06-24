#include<stdio.h>

int main(void)
{
	int iNo;
	int iTemp = 0;
	int sum = 0;

	printf("Enter Number =\t");
	scanf("%d",&iNo);

	iTemp = iNo;
	while(iTemp > 0)
	{
		int rem = iTemp%10;

		sum = (sum*10) + rem;

		iTemp = iTemp/10;
	}

	printf("\n%d",sum);
	return 0;
}