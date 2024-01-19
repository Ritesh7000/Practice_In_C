#include <stdio.h>

static int g_iNo = 10;		//Internal linkage

void Fun(void)
{
	printf("In Fun ,%d",g_iNo);		//10
}