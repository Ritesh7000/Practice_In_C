#include<stdio.h>

int main(void)
{
	const int iNo = 10;
	const int * pPtr = &iNo;

	//printf("(*pPtr)++\t=\t%d",(*pPtr)++);  //error, pointing to constant/ l-value specifies const object

	//printf("\niNo++\t=\t%d",(iNo++));	  	 //error, iNo is Constant

	printf("\npPtr\t=\t%d",pPtr);	   		 // 14612540	 /100

	printf("\npPtr++\t=\t%d",++pPtr);	     // 14612544     /104   
	//allowed,pPtr is non-Constant

	return 0;
}