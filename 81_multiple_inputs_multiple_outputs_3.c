#include<stdio.h>

void AddSub(int *,int *);

int main(void)
{
	int iNo1;
	int iNo2;

	printf("Enter iNo1 =\t");		//20
	scanf("%d",&iNo1);

	printf("Enter iNo2 =\t");		//10
	scanf("%d",&iNo2);

	//Approach 3
	AddSub(&iNo1,&iNo2);

	printf("\nAddition is = %d",iNo1);		//30
	printf("\nSubtraction is = %d",iNo2);	//10

	return 0;
}

void AddSub(int *piSum ,int *piDif)
{
	int pTemp;		//pTemp ghetala karan pTemp madhe *piSum(20) chi value takali *piDif sathi
	pTemp = *piSum;

	*piSum = pTemp + (*piDif);
	*piDif = pTemp - (*piDif);
}
