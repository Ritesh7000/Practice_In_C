#include<stdio.h>
#define MAX 3

struct Demo
{
	int iNo;
	float fNo;
};

int main(void)
{
	int iCounter;
	struct Demo arr[MAX];

	for(iCounter=0; iCounter<MAX; iCounter++)
	{
		printf("\nEnter object%d values :\n",iCounter+1 );
		printf("Enter Integer =\t ");
		scanf("%d",&arr[iCounter].iNo);
		printf("Enter Float =\t");
		scanf("%f",&arr[iCounter].fNo);
	}
	//o/p:
  /*Enter object1 values :
	Enter Integer =  1
	Enter Float	  =  1.1

	Enter object2 values :
	Enter Integer =  2
	Enter Float 	=  2.2

	Enter object3 values :
	Enter Integer =  3
	Enter Float   =  3.3
	*/

	for(iCounter=0; iCounter<MAX; iCounter++)
	{
		printf("\nObject%d values are:\n",iCounter+1 );
		printf("Integer is %d\n",arr[iCounter].iNo);
		printf("Float is %f\n",arr[iCounter].fNo);
	}
//o/p:
  /*Object1 values are:
	Integer is 1
	Float is 1.100

	Object2 values are:
	Integer is 2
	Float is 2.200

	Object3 values are:
	Integer is 3
	Float is 3.300
	*/
	return 0;
}