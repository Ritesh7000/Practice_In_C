#include<stdio.h>

struct Node
{
	int iNo;
	float fNo;
};

int main(void)
{
	struct Node oObj;
	struct Node *pPtr = &oObj;

	printf("Enter Integer =\t");
	scanf("%d",&pPtr->iNo);  	// or *((*pPtr).iNo)					76

	printf("Enter Float =\t");
	scanf("%f",&pPtr->fNo);	 	// or *((*pPtr).fNo)					60.77

	printf("\nInteger is = %d",pPtr->iNo);// or (*pPtr).iNo				76
	printf("\nFloat is = %f",pPtr->fNo);		// or (*pPtr).fNo		60.77

	return 0;
}
