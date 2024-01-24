#include<stdio.h>

int main(void)
{
	union Outer
	{
		int No;
		double dNo;	
		struct Inner
		{
			char chChar1;
			char chChar2;
		}iObj[2];
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//8

	return 0;
}