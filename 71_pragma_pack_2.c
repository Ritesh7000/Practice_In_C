#include <stdio.h>

int main(void)
{
	struct Demo
	{
		char chChar;
		double dNo;
	};

	#pragma pack(1) //effect of these line is applicable to all structure declare below it upto next #pragma
	struct Demo obj;

	printf("sizeof(obj) = \t%d\n",sizeof(obj));	//16

	return 0;
}