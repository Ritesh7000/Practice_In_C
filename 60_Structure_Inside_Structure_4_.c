#include<stdio.h>

int main(void)
{
	struct Outer
	{
		int No;
		float fNo;
		double dNo;	
		struct Inner
		{
			int No;
			float fNO;
		}iObj1[3];
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//40

	return 0;
}