#include <stdio.h>

int main(void)
{
	struct Inner
	{
		int iNo;
		float fNo;
	};

	struct Outer
	{
		int iNo;
		float fNo;
		struct Inner iObj;
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//16

	return 0;
}