#include<stdio.h>

int main(void)
{
	char arr[] = {'A','B','C','D','E'};

	char *pPtr = &arr[0];

	printf("\npPtr\t=\t%d",pPtr);				//15990368		/100
	printf("\n*pPtr\t=\t%c",*pPtr);				//A
	printf("\npPtr+3\t=\t%d",pPtr+3);			//15990371		/103
/*	
	pPtr+3
	=pPtr + 3 *sizeof(datatype)
	=100 + 3 *sizeof(char)
	=100 + 3 * 1
	=100 + 3
	=103 
*/
	printf("\n*(pPtr+3)\t=\t%c",*(pPtr+3));		//D
	printf("\npPtr\t=\t%d",pPtr);				//15990368		/100
	printf("\n*pPtr\t=\t%c",*pPtr);				//A  ,no change in diagram

	return 0;
}