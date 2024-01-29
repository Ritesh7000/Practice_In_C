#include<stdio.h>

int AddSub(int, int, int *);

int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDif;

	printf("Enter iNo1 =\t");				//10
	scanf("%d",&iNo1);

	printf("Enter iNo2 =\t");				//20
	scanf("%d",&iNo2);

	//Approach 1
	iDif = AddSub(iNo1,iNo2,&iSum);	//iDif = -10

	printf("\nAddition is = %d",iSum);		//30
	printf("\nSubtraction is = %d",iDif);	//-10

	return 0;
}

int AddSub(int iNo1, int iNo2, int *piSum)
{
	*piSum = iNo1 + iNo2;

	return iNo1 - iNo2;
}
