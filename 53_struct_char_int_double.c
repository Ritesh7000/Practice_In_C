#include<stdio.h>

struct Demo
{
	int iNo;
	char chChar;
	double dNo;
} ;

int main(void)
{
	struct Demo obj;

	printf("sizeof(obj) =\t%d\n\n", sizeof(obj));//13

	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);	//warning,uninitialized local variable 'obj' used
	//G1  G2  G3

	obj.iNo = 10;
	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//10  G2  G3

	obj.chChar = 'S';
	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//10  S  G3

	obj.dNo = 60.77;
	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//10  S  60.77

	return 0;
}