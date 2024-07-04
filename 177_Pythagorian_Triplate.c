#include<stdio.h>


int iCheck(int, int, int);


int main(void)
{
	int iNo1,iNo2,iNo3;
	int iMax;

	printf("Enter iNo1 = ");
	scanf("%d",&iNo1);
	
	printf("\nEnter iNo2 = ");
	scanf("%d",&iNo2);

	printf("\nEnter iNo3 = ");
	scanf("%d",&iNo3);

	if(iCheck(iNo1,iNo2,iNo3))
		printf("Pythagorian Triplate\n");
	else
		printf("Not Pythagorian Triplate\n");


	return 0;
}

int iCheck(int i,int j, int k)
{
	int a,b,c;

	if(k<i>j)
	{
		a = i;
		b = j;
		c = k;
	}
	else if(k<j>i)
	{
		a = j;
		b = i;
		c = k;
	}
	else
	{
		a = k;
		b = j;
		c = i;
	}

	if(a*a == b*b + c*c)
		return 1;
	else
		return 0;
}