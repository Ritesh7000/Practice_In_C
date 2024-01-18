#include <stdio.h>
 
int No = 10;
void Fun(void);

int main(void)
{
	int No = 20;

	printf("In main\n");
	printf("No = %d\n\n", No);	//20

	{
		char No = 'A';
		printf("In block\n");
		printf("No = %d\n\n",No);	//65
	}

	printf("In main\n");
	printf("No = %d\n\n",No);	//20

	Fun();
	
	return 0;
}

void Fun(void)
{
	printf("In Fun()\n");
	printf("No = %d\n",No);	//10
}








