#include <stdio.h>

int main(void)
{
	int iNo = 10;
	char chChar = 'B';
	float fNo = 20.6;
	double dNo = 60.77;


	printf("sizeof(int)    =\t%d\n",sizeof(int));		//4
	printf("sizeof(char)   =\t%d\n",sizeof(char));		//1	
	printf("sizeof(float)  =\t%d\n",sizeof(float));		//4
	printf("sizeof(double) =\t%d\n\n",sizeof(double));	//8
	
	printf("sizeof(20)   =\t%d\n",sizeof(20));		//4
	printf("sizeof('B')  =\t%d\n",sizeof('B'));		//4
	printf("sizeof(99.9) =\t%d\n",sizeof(99.9f));		//4
	printf("sizeof(99.8) =\t%d\n\n",sizeof(99.8));		//8

	printf("sizeof(iNo)    =\t%d\n",sizeof(iNo));		//4
	printf("sizeof(chChar) =\t%d\n",sizeof(chChar));	//1
	printf("sizeof(fNo)    =\t%d\n",sizeof(fNo));		//4
	printf("sizeof(dNo)    =\t%d\n\n",sizeof(dNo));		//8
	

	printf("sizeof 20     =\t%d\n",sizeof 20);		//4
	printf("sizeof iNo    =\t%d\n",sizeof iNo);		//4
	//printf("sizeof int  =\t%d\n",sizeof int);		//error
	//printf("sizeof void =\t%d\n",sizeof void);		//error
	

	printf("\niNo         =\t%d\n",iNo);			//10
	printf("sizeof(++iNo) =\t%d\n",sizeof(++iNo));		//4
	printf("iNo           =\t%d\n",iNo);			//10
	printf("sizeof(void)  =\t%d\n",sizeof(void));		//0 & 1	
	
	return 0;
}
