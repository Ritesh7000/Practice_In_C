#include<stdio.h>

void AddSub(int,int,int *,int *);

int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDif;

	printf("Enter iNo1 =\t");		//20
	scanf("%d",&iNo1);

	printf("Enter iNo2 =\t");		//10
	scanf("%d",&iNo2);
	
	//Approach 2 (Ha Adarsh form ahe)
	AddSub(iNo1,iNo2,&iSum,&iDif);

	printf("\nAddition is = %d",iSum);		//30
	printf("\nSubtraction is = %d",iDif);	//10

	return 0;
}

void AddSub(int iNo1,int iNo2,int *piSum ,int *piDif)
{
	*piSum = iNo1 + iNo2;
	*piDif = iNo1 - iNo2;
}
