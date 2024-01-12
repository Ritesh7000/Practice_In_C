#include <stdio.h>

void Addition(void);

int main(void)
{
	Addition();

	return 0;
}

void Addition(void)
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("Enter a Number = ");	// 10 20
	scanf("%d%d",&iNo1, &iNo2);

	iAns = iNo1 + iNo2;

	printf("Addition is = %d", iAns); // 30
}
