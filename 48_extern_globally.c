#include <stdio.h>

int No1; //Allowed, Defination
int No2 = 10; //Allowed, Defination
extern int No3; //Allowed, Delaration
extern int No4 = 10;	//Allowed,Defintion
//karan compiler la vatat to dusari kade kuthetari ahe pan to hach ahe.

int main(void)
{
	printf("No1 =\t%d\n",No1);		//0(global declare)

	printf("No2 =\t%d\n",No2);		//10

	//printf("NO3 =\t%d\n",No3);	//error,unresolved external symbol _No3 referenced in function _main
	
	printf("No4 =\t%d",No4);		//10
	
	return 0;
}
