/*
	void(*(*p())[])();
	p is a function which accept nothing and return addres of array which array contain address of 
	function which function accept nothing and return nothing.
*/


#include<stdio.h>

void (*(*Fun())[3])();
void  Fun1();
void  Fun2();
void  Fun3();

int main(void)
{
	int iCounter;
	void (*(*pPtr)[3])() =  NULL;

	pPtr = Fun();

	printf("\n");
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		((*pPtr)[iCounter])();
	}

	printf("Leave main");

	return 0;
}

void (*(*Fun())[3])()
{
	static void (*arr[3])() = {Fun1,Fun2,Fun3};
	//ha static karava lagal, because return &arr kartoy ani local thevla tar stack frame sobat to pan
	//jail ani to dangling pointer hoil, mhanun apan tyala(arr la) static kel.  

	printf("In Fun\n");
	printf("Leave Fun\n");	

	return &arr;
}

void Fun1()
{
	printf("In Fun1\n");
}

void Fun2()
{
	printf("In Fun2\n");
}

void  Fun3()
{
	printf("In Fun3\n");
}


