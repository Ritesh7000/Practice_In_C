#include <stdio.h>

int main(void)
{
	int iCounter = 0;

	while(iCounter < 3)
		printf("%d\t",iCounter++);	//0	 1	2

	{
		printf("%d\t",iCounter);    // 3
		iCounter++;
	}

	for (iCounter = 3; iCounter < 3; iCounter++)	//No output, karan conditonn false asel tar execute hot nahi loop
	{
		printf("bas ka\n" );
	}

	return 0;
}
