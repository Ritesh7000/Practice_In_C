#include<stdio.h>

int main(void)
{
	union Outer
	{
		int No;
		float fNo;	
		union Inner
		{
			char chChar;
			int No;
		}iObj1[2];
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//8

	return 0;
}