#include <stdio.h>

int Addition(int, int);
int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("Enter a Two  Numbers = ");	// 10 20
	scanf("%d%d", &iNo1, &iNo2);

	iAns = Addition(iNo1, iNo2);
	printf("Addition is = %d", iAns);	// 30 

	return 0;
}

int Addition(int iNo1, int iNo2) // 10 20
{
	int iAns = iNo1 + iNo2;

	return iAns;    //return 30
}
