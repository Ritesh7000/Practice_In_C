#include<stdio.h>

int main(void)
{
	char szName[50];

	printf("Enter Name :\t");
	gets(szName); 		//or gets("%s",szName);
	//accept string from console but not including newline character.

	//gets_s(szName,sizeof(szName));
	//gets_s(secure), jar array ha lahan asel ani string mothi asel tar tevha crash honar
	//mhanun gets_s use karu, ani tyala 2 parameter deu 1.add 2.sizeof string

	printf("%s",szName);

/*  o/p:
1.  Enter Name : Good Morning
	Good Morning

2.  Enter Name : Good
	Good
*/

	return 0;
}