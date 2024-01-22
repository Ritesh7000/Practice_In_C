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
			float fNo;
		}iObj;		//NO la ata error nahi yenar,because inner cha obj create kela ahe
	}oObj;

	pritnf("sizeof(oObj) =\t%d",sizeof(oObj));	//16

	return 0;
}