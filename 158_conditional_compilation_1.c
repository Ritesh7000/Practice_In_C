#include<stdio.h>

#define MYSWITCH				//try by commenting this line

#ifdef MYSWITCH
	int Addition(int ,int);
#else
	int Addition(int ,int, int);
#endif

int main(void)
{
	int iAns;

	#ifdef MYSWITCH
	iAns = Addition(10,20);
	#else
	iAns = Addition(10,20,30);
	#endif
/*
	if comment "//#define MYSWITCH" o/p:
-	Answer is 60

	else o/p:
-	Answer is 30

*/
	printf("Answer is %d",iAns);

	return 0;
}

#ifdef MYSWITCH
int Addition(int iNo1, int iNo2)
{
	return iNo1 + iNo2;
}
#else
int Addition(int iNo1, int iNo2, int iNo3)
{
	return iNo1 + iNo2 + iNo3;
}
#endif
