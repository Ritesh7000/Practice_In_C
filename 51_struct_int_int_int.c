//G = Garbage
#include <stdio.h>

struct Demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};

int main(void)
{
	struct Demo obj;
	printf("sizeof(obj) = %d\n", sizeof(obj));//12

	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n", obj.iNo1,obj.iNo2,obj.iNo3); //warning,uninitialized local variable 'obj' used
	//G1  G2  G2

	obj.iNo1 = 10;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n", obj.iNo1,obj.iNo2,obj.iNo3);
	//10  G2  G3

	obj.iNo2 = 20;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n", obj.iNo1,obj.iNo2,obj.iNo3);
	//10  20  G2
	//1st,2nd & 3rd printf la warning yeil,because obj values is uninitialize

	obj.iNo3 = 30;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n", obj.iNo1,obj.iNo2,obj.iNo3);
	// 10  20  30

	return 0;
}
