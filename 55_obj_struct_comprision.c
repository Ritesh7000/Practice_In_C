#include <stdio.h>

struct Demo
{
	int iNo;
	float fNo;
};

int Compare_OBJ(struct Demo,struct Demo);

int main(void)
{
	struct Demo obj1;
	struct Demo obj2;
	int iResult;

	printf("object 1");
	printf("\nEnter Number1 =\t");
	scanf("%d",&obj1.iNo);					//10

	printf("Enter Float1 =\t");
	scanf("%f",&obj1.fNo);					//60.77

	printf("\nobject 2");
	printf("\nEnter Number2 =\t");
	scanf("%d",&obj2.iNo);					//10

	printf("Enter Float2 =\t");
	scanf("%f",&obj2.fNo);					//60.77

	printf("\nValue's are :-\n");
	printf("obj1.iNo =\t%d\nobj2.iNo =\t%d",obj1.iNo,obj2.iNo);				//10	  10
	printf("\n\nobj1.fNo = \t%f\nobj2.fNo =\t%f\n",obj1.fNo,obj2.fNo);		//60.77   60.77

	iResult = Compare_OBJ(obj1,obj2);		//1

	if(iResult == 1)
	{
		printf("\nOBJ contain SAME value\n"); //OBJ contain SAME value
	}
	else
	{
		printf("\nOBJ CANNOT contain same value\n");
	}

	return 0;
}


int Compare_OBJ(struct Demo obj1, struct Demo obj2)
{
	if( obj1.iNo == obj2.iNo && obj1.fNo == obj2.fNo)
		return 1;
	return 0;
}