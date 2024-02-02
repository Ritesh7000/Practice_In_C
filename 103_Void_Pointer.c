#include <stdio.h>

int main(void)
{
	int iNo = 10;

	int *pPtr1 = &iNo;				//Allowed

	void *pPtr2 = &iNo;				//Allowed

	printf("iNo\t=\t%d",iNo);						//10
	
	printf("\n&iNo\t=\t%d",&iNo);					//5504488	/100
	
	printf("\n\npPtr1\t=\t%d",pPtr1);				//5504488	/100

	printf("\npPtr2\t=\t%d",pPtr2);					//5504488	/100

	printf("\n\n*pPtr1\t=\t%d",*pPtr1);				//10

	//printf("*pPtr2\t=\t%d",*pPtr2);				//error, illegal indirection.

	printf("\n*pPtr2\t=\t%d",*(int *)pPtr2);		//Allowed	10
	//void pointer access

	return 0;
}