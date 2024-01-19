#include<stdio.h>

int main(void)
{
	int iNo1;
	auto int iNo2;

	printf("iNo1\t=\t%d\niNo2\t=\t%d",iNo1,iNo2); //iNo1 = Garbage iNo2 = Garbage 
	//warning, uninitialized local variable 'iNo1','iNo2'
	//all local variable by default ahve auto storage class

	return 0;
}