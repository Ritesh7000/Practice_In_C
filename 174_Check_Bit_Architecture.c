#include<stdio.h>

/*
int main(void)
{
	int iNo;

	int *pPtr1, *pPtr2 = NULL;

	pPtr1 = &iNo;

	pPtr2 = pPtr1++;

	printf("%d",pPtr2-pPtr1);
	if(pPtr2-pPtr1 == 4)
		printf("32 bit");
	else if(pPtr2-pPtr1 == 2)
		printf("16 bit");
	else if(pPtr2-pPtr1 == 1)
		printf("8 bit");
	else if(pPtr2-pPtr1 == 8)
		printf("64 bit");

	return 0;
}
*/
int main(void)
{
 
 int x;
 
 int *p, *q;
 
 p = &x; // address 110 -> 32 bit controller 
 
 q = p++; // 114

printf("%d\n",&p);
printf("%d\n",&q);

printf("%d\n",p-q);	 
 if (p-q == 4)
 {
 printf("32 bit controller");
 }
 else if(p-q == 2)
 
 {
 printf("16 bit controller");
 }
 else
 {
 printf("8 bit controller");
 }
 
}