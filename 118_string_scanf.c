#include<stdio.h>

int main(void)
{
	char szName[50];

	printf("Enter your Name :\t");
	scanf("%s",szName);					//Good Morning
	//scanf accept string from console upto but not include white space character
	//\0 pryant string accept karto scanf

	printf("%s",szName);				//Good

/* o/p:
1.  Enter your Name : Good Morning
	Good			


2.  Enter your Name : Good
	Good
*/
	return 0;
}