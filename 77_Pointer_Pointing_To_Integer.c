#include <stdio.h>

int main(void)
{
	int iNo = 10;
	int *pPtr = &iNo;
	//ha '*' ithe datatype(pointer) ahe.

	printf("iNo =\t%d",iNo);			//10			//10
	printf("\n&iNo =\t%d",&iNo);		//3864516		//100
	printf("\npPtr =\t%d",pPtr);		//3864516		//100
	printf("\n&pPtr =\t%d",&pPtr);		// 3864512		//200
	printf("\n*pPtr =\t%d",*pPtr);		//10 			//10
	
	*pPtr = 20;
	//ha '*' ithe operator(Direfrence)
	printf("\n*pPtr =\t%d",*pPtr);		//20 			//20
	
	return 0;
}