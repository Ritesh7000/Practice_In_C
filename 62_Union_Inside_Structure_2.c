#include<stdio.h>

int main(void)
{
	struct Outer
	{
		int No;
		float fNo;	
		union Inner
		{
			char chChar;
			int No;
		}iObj1[2];
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));	//16

	return 0;
}