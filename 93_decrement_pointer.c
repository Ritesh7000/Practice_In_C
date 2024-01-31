#include<stdio.h>

int main(void)
{
	double arr[] = {10.11,20.22,30.33,40.44,50.55};

	double *pPtr = &arr[4];

	printf("\n&pPtr\t=\t%d",&pPtr);			//15726800		 /200
	printf("\npPtr\t=\t%d",pPtr);			//15726836		 /132
	printf("\n*pPtr\t=\t%lf",*pPtr);		//50.55

	--pPtr;
/*
	--pPtr
	pPtr = pPtr - 1
	pPtr = pPtr - 1 * sizeof(Datatype)
	pPtr = 132 - 1 * sizeof(double)
	pPtr = 132 - 1 * 8
	pPtr = 132 - 8
	pPtr = 124

	ata pPtr ha arr[4] chya aivaji arr[3] la point karayla lagala
*/

	printf("\n\nAfter --pPtr :");
	printf("\n&pPtr\t=\t%d",&pPtr);			//15726800		 /200
	printf("\npPtr\t=\t%d",pPtr);			//15726828		 /124
	printf("\n*pPtr\t=\t%lf",*pPtr);		//40.44

	return 0;
}