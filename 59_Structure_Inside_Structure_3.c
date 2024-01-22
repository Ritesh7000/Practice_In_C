#include<stdio.h>

int main(void)
{
	struct Outer
	{
		int No;
		float fNo;
		struct Inner
		{
			int No;
			double dNo;
		}iObj1,iObj2;
		double dNo;		
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//40

	return 0;
}