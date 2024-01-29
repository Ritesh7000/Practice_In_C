#include<stdio.h>

struct Demo
{
	int iNo;
	float fNo;
};

void Assignment(struct Demo , struct Demo *,struct Demo *);

int main(void)
{
	struct Demo oObj1;
	struct Demo oObj2;
	struct Demo oObj3;

	printf("Enter Integer =\t");	//10
	scanf("%d",&oObj1.iNo);			//60.77

	printf("Enter Float =\t");
	scanf("%f",&oObj1.fNo);

	Assignment(oObj1,&oObj2,&oObj3);

	printf("\n\noObj1.iNo = \t%d",oObj1.iNo);	//10
	printf("\noObj1.fNo = \t%f",oObj1.fNo);		//60.77

	printf("\n\noObj2.iNo = \t%d",oObj2.iNo);	//10
	printf("\noObj2.fNo = \t%f",oObj2.fNo);		//60.77

	printf("\n\noObj3.iNo = \t%d",oObj3.iNo);	//10
	printf("\noObj3.fNo = \t%f",oObj3.fNo);		//60.77
	return 0;
}

void Assignment(struct Demo oObj1, struct Demo *poObj2,struct Demo *poObj3)
{
	*poObj2 = oObj1;

	poObj3->iNo = oObj1.iNo;
	poObj3->fNo = oObj1.fNo;
}

