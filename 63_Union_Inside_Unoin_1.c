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
		}iObj1,iObj2;
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//4

	return 0;
}