#include<stdio.h>

void Fun(int **);
int main(void)
{
	int *pPtr = NULL;

	Fun(&pPtr);

	printf("\n\nIn Main,*pPtr\t=\t%d",*pPtr);	//Dangling Pointer 
	//Pointer Will be crash
	return 0; 
}

void Fun(int **ppPtr)
{
	int iNo = 10;
	
	*ppPtr = &iNo;

	printf("In Fun,**ppPtr\t=\t%d",**ppPtr);	//10

}

//jar Dangling Pointer avoid karaycha asel(code ch design change n karta) tar iNo la static karav lagel.
//because static cha "scope ha local ani lifetime globle" ahe. mhanun dusrya fun madhun hi access karta yeil.
