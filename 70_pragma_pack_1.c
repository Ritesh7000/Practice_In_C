#include <stdio.h>

int main(void)
{
	struct Demo1
	{
		char chChar;
		double dNo;
	}obj1;

	#pragma pack(4) //#pragma pack(push,4) both syntax are same
	struct Demo2
	{
		char chChar;
		double dNo;
	}obj2;
	
	#pragma pack(1) 
	struct Demo3
	{
		char chChar;
		double dNo;
	}obj3;

	#pragma pack()	//switch back to default word size
	struct Demo4
	{
		char chChar;
		double dNo;
	}obj4;

	printf("sizeof(obj1) = \t%d\n",sizeof(obj1));		//16

	printf("sizeof(obj2) = \t%d\n",sizeof(obj2));		//12

	printf("sizeof(obj3) = \t%d\n",sizeof(obj3));		//9

	printf("sizeof(obj4) = \t%d\n",sizeof(obj4));		//16

	return 0;
}