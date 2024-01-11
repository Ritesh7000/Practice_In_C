#include <stdio.h>

int main(void)
{
	int iCounter;

	for(iCounter = 1; iCounter <= 10; iCounter++)
	{
		if(iCounter % 2 == 0)
			continue;
		printf("%d\n",iCounter ); // 1 3 5 7 9
	}

	return 0;
}