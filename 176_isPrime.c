#include<stdio.h>
#define true 1
#define false 0

int isPrime(int);

int main(void)
{
	int iNo1,iNo2;
	int iCounter;

	printf("Enter iNo1= ");
	scanf("%d",&iNo1);

	printf("\nEnter iNo2= ");
	scanf("%d",&iNo2);

	for(iCounter = iNo1;iCounter <= iNo2;iCounter++)
	{
		if(iCounter == 1 || iCounter == 0)
			continue;

		if(isPrime(iCounter))
			printf("%d-",iCounter);
	}

	return 0;
}

int isPrime(int iNo)
{
	int iCounter;

	for(iCounter = 2;iCounter < iNo;iCounter++)
	{
		if(iNo%iCounter == 0)
			return false;
	}

	return true;
}