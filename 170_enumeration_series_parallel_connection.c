#include<stdio.h>

enum SWITCH{off,on};		//off = 0, on = 1
enum Combination{Series = 1,Parallel = 2};

int main(void)
{
	enum Combination ckt;
	enum SWITCH s1,s2;

	printf("Enter circuit you want(serires-1 or parallel-2) :-\t");
	scanf("%d",&ckt);

	printf("Enter Switch 1(on = 1 and off = 0) :-\t");
	scanf("%d",&s1);

	printf("Enter Switch 2(on = 1 and off = 0) :-\t");
	scanf("%d",&s2);

	if(ckt == Series)
	{
		if(s1 == on && s2 == on)
			printf("Bulb will Glow");
		else
			printf("Bulb will not Glow");
	}
	else		//Parallel
	{
		if(s1 == on || s2 == on)
			printf("Bulb will Glow");
		else
			printf("Bulb will not Glow");
	}

/*	o/p:
1.	Enter circuit you want(serires-1 or parallel-2) :-      2
	Enter Switch 1(on = 1 and off = 0) :-   0
	Enter Switch 2(on = 1 and off = 0) :-   1
	Bulb will Glow

2.	Enter circuit you want(serires-1 or parallel-2) :-      1
	Enter Switch 1(on = 1 and off = 0) :-   1
	Enter Switch 2(on = 1 and off = 0) :-   1
	Bulb will Glow

3.	Enter circuit you want(serires-1 or parallel-2) :-      1
	Enter Switch 1(on = 1 and off = 0) :-   1
	Enter Switch 2(on = 1 and off = 0) :-   0
	Bulb will not Glow

*/
	return 0;
}

