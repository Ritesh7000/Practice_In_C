#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	int *pPtr1 = &arr[0];
	int *pPtr2 = &arr[4];

	//	'*'
	printf("\npPtr1*3\t=\t%d",pPtr1*3);				//error, left operand has type 'int *'
	printf("\npPtr1*pPtr2\t=\t%d",pPtr1*pPtr2);		//error, left operand has type 'int *',
													//illegal, right operand has type 'int *'


	//	'/'
	printf("\npPtr1/3\t=\t%d",pPtr1/3);				//error, left operand has type 'int *'
	printf("\npPtr1/pPtr2\t=\t%d",pPtr1/pPtr2);		//error, left operand has type 'int *'
													//illegal, right operand has type 'int *'


	//	'%'
	printf("\npPtr1%3\t=\t%d",pPtr1%3);				//error, left operand has type 'int *'
	printf("\npPtr1%/pPtr2\t=\t%d",pPtr1%pPtr2);	//error, left operand has type 'int *'
													//illegal, right operand has type 'int *'

	return 0;
}