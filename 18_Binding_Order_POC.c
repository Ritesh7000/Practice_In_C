#include <stdio.h>

int main(void)
{
	int iNo1 = 0;//1
	int iNo2 = 1;//1 
	int iNo3 = 2;//2
	int iAns;

	iAns = ++iNo1 || iNo2++ && iNo3++;
	// iAns = ++iNo1 || iNo2++ && iNo3++;
	// iAns = ((++iNo1) || ((iNo2++) && (iNo3++)));
	// iAns = ( 1 || ((iNo2++) && (iNo3++)));
	// iAns = 1

	printf("iAns = \t%d\tiNo1 = \t%d\t iNo2 =\t%d\t iNo3 =\t%d\n", iAns,iNo1,iNo2,iNo3);		// 1  1  1  2

	return 0;
}