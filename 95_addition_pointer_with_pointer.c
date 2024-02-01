#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	int *pPtr1 = &arr[0];
	int *pPtr2 = &arr[4];

	printf("\npPtr1\t=\t%d",pPtr1);					//13629236		/100

	printf("\npPtr2\t=\t%d",pPtr2);					//13629252		/116
	
	//printf("\npPtr1+pPtr2\t=\t%d",pPtr1+pPtr2);		//error, cannot add two pointers
	//jya gavala jayach nahi tyacha road tu ka vicharshil...(asa vichar compiler karto)

	return 0;
}