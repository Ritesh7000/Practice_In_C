#include<stdio.h>
#define MAX 5

int main(void)
{
	int iCounter;
	int arr[MAX];

	for(iCounter=0; iCounter<MAX; iCounter++)
	{
		printf("Enter %d Number :\t",iCounter+1);
		scanf("%d",&arr[iCounter]);
	}
	// o/p:
	//Enter 1 Number : 11
	//Enter 2 Number : 12
	//Enter 3 Number : 13
	//Enter 4 Number : 14
	//Enter 5 Number : 15

	printf("\n");
	for(iCounter=0; iCounter<MAX; iCounter++)
	{
		printf("%d Number is %d\n",iCounter+1,arr[iCounter]);
	}
	// o/p:
	//1 Number is 11
	//2 Number is 12
	//3 Number is 13
	//4 Number is 14
	//5 Number is 15	
	return 0;
}