#include<stdio.h>
void Addition(int, int);

int main(void)
{
	int iNo1;
	int iNo2;

	printf("Enter Two numbers = "); 	// 10 20
	scanf("%d%d", &iNo1, &iNo2);

	Addition(iNo1, iNo2);

	return 0;
}

void Addition(int iNo1, int iNo2) //10 20
{
	int iAns;

	iAns = iNo1 + iNo2;

	printf("Addition is  = %d",iAns);  // 30
}
