#include <stdio.h>

int g_iNo = 10;		//erorr, g_iNo is already defined in main

void Fun(void)
{
	printf("In Fun ,%d\n",g_iNo);
}