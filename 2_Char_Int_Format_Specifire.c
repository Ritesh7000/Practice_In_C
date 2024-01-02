#include <stdio.h>

int main(void)
{
	char chChar1 = 'A';
	char chChar2 = 65;

	int iNo1 = 'A';
	int iNo2 = 65;
	char chM = 122;
	char chM1= 132;
	char chM2 = 258;


	printf("chChar1 = %d\n", chChar1); // 65
	printf("chChar1 = %c\n", chChar1); // A
	printf("chChar2 = %d\n", chChar2); // 65
	printf("chChar1 = %c\n", chChar2); // A

	printf("iNo1 = %d\n",iNo1);  	   // 65
	printf("iNo1 = %c\n",iNo1);        // A
	printf("iNo2 = %d\n",iNo2);        // 65
	printf("iNo2 = %c\n",iNo2);        // A

	
	
	printf("\nchM = %c\n",chM);  	  //z
	printf("\nchM = %d\n",chM);		  //122
	printf("\nchM = %c\n",chM1);	  //ascii table
	printf("\nchM = %d\n",chM1);      //132
	printf("\nchM = %c\n",chM2);      //ascii table 
	printf("\nchM = %d\n",chM2);      //258



	return 0;
}
