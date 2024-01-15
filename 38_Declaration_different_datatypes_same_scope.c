#include <stdio.h>

int mani(void)
{
	extern int No;
	extern  float No;		//error, linker give 

	printf("%d",No);
	return 0;
}
