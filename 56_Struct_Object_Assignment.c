#include <stdio.h>


struct Demo
{
	int iNo;
	float fNo;	
	//char chChar;	//he string topic madhe baghu
};

int main(void)
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;

	printf("object 1 :\n");
	printf("Enter Number =\t");
	scanf("%d",&obj1.iNo);

	printf("Enter Float =\t");
	scanf("%f",&obj1.fNo);

	obj2 = obj1;

	obj3.iNo = obj2.iNo;
	obj3.fNo = obj2.fNo;
	
	printf("\nobject 2 - Direct object Access");
	printf("\nobj2.iNo =\t%d",obj2.iNo);
	printf("\nobj2.fNo = \t%f",obj2.fNo);
	
	printf("\n\nobject 3 - Member by member Access.");
	printf("\nobj3.iNo =\t%d",obj3.iNo);
	printf("\nobj3.fNo = \t%f",obj3.fNo);	

/*
 O/P :- 
 
	object 1 :
	Enter Number =  60
	Enter Float =   76.60

	object 2 - Direct object Access
	obj2.iNo =      60
	obj2.fNo =      76.599998

	object 3 - Member by member Access.
	obj3.iNo =      60
	obj3.fNo =      76.599998
*/

	return 0;
}