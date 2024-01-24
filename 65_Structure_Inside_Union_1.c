#include<stdio.h>

int main(void)
{
	union Outer
	{
		int No;
		double dNo;	
		struct Inner
		{
			int No;
			double dNo;
		}iObj1,iObj2;
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//12

	return 0;
}