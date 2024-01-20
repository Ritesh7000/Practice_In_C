#include<stdio.h>

union Demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};

int main(void)
{
	union Demo obj;

	printf("sizeof(obj) = %d\n", sizeof(obj));//4

	printf("iNo1 =%d\t\tiNo2 =%d\t\tiNo3 =%d\t\t\n",obj.iNo1,obj.iNo2,obj.iNo3);
	// G  G  G
	//warning, uninitialize local variable(obj)

	obj.iNo1 = 10;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n",obj.iNo1,obj.iNo2,obj.iNo3);
	//10  10  10

	obj.iNo2 = 20;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n",obj.iNo1,obj.iNo2,obj.iNo3);
	//20  20  20

	obj.iNo3 = 30;
	printf("iNo1 =%d\tiNo2 =%d\tiNo3 =%d\t\n",obj.iNo1,obj.iNo2,obj.iNo3);
	//30  30  30

	return 0;
}