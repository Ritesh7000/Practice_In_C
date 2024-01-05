#include <stdio.h>

int main(void)
{
	int iNo = 10;							//10	9	8	7	6	5	4
	int iAns1;								//10
	int iAns2;								//8

	printf("iNo = %d\n", iNo);				//10

	iAns1 = iNo--;
	printf("\niAns1 = iNo--;\n");
	printf("iNo = %d\n", iNo);				//9
	printf("iAns1 = %d\n", iAns1);			//10

	iAns2 = --iNo;
	printf("\niAns1 = iNo--;\n");
	printf("iNo = %d\n", iNo);				//8
	printf("iAns2 = %d\n", iAns2);			//8

	printf("\niNo-- = %d\n", iNo--);		//8
	printf("--iNo = %d\n", --iNo);			//6

	printf("\n- -iNo = %d\n", - -iNo);		//6

	//printf("\n --10 = %d\n", --10);			//error,L-value reequired
	//printf("10-- = %d\n", 10--);			//same // 10 = 10-1 | 10 = 9 

	//printf("\n--(iAns1 + iAns2) = %d\n", --(iAns1 + iAns2));	//error, L-value required

	printf("\niNo-- = %d\n", iNo--);		//6		
	printf("--iNo = %d\n", --iNo);			//4
	


	return 0;
}