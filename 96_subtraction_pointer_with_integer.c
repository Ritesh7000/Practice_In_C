#include<stdio.h>

int main(void)
{
	float arr[] = {11.11f,22.22f,33.33f,44.44f,55.55f};
	float *pPtr = &arr[4];

	printf("\npPtr\t=\t%d",pPtr);				//17823864 		/116
	printf("\n*pPtr\t=\t%f",*pPtr);				//55.55
	printf("\npPtr-3\t=\t%d",pPtr-3);			//17823852		/104
/*
	pPtr-3
	=pPtr - 3*sizeof(datatype)
	=116 - 3*sizeof(float)
	=116 - 3*4
	=116 - 12
	=104

	pPtr ata arr[4]or(116) la nahi tar arr[1]or(104) la point karel. 
*/

	printf("\n*(pPtr-3)\t=\t%f",*(pPtr-3));		//22.22
	printf("\npPtr\t=\t%d",pPtr);				//17823864		/116
	printf("\n*pPtr\t=\t%f",*pPtr);				//55.55

	return 0;
}