#include<stdio.h>

int main(void)
{
	int iNo = 10;

	int *p = &iNo;

	int **q = &p;

	int ***r = &q;

	int ****s = &r;

	int *****x = &s;

	int ******y = &x;

	int *******z = &y;


	printf("***r =\t%d\n",***r);					//10

	printf("\n**z = \t%d\n",**z);					//5502920   /500

	//printf("\n*****s == \t%d\n",*****s);		// error,compiler time/deil
	
	printf("\n***x == \t%d\n",***x);				//5502936   /200
	
	printf("\n&(****z) = \t%d\n",&(****z));			//5502936	/400		 
	
	printf("\n&(**x) = \t%d\n",&(**x));				//5502936	/400
	
	printf("\n*(&(***s)) = \t%d\n",*(&(***s)));		//5502924	/100
	/*
	  *(&(***s)))
	= *(&(***400)))
	= *(&(100)))
	= *(200)
	= 100
	*/

	printf("\np = \t%d\n",p);						//5502924	/100
	
	printf("\n*p = \t%d\n",*p);						// 10
	
	printf("\n&(*p) = \t%d\n",&(*p));				//5502924	/100
	
	printf("\n*(&(*p)) = \t%d\n",*(&(*p)));			// 10
	/*
	*(&(*p))
	= *(&(*100))
	= *(&(10))
	= *(100)
	= 10
	*/

	printf("\n&iNo = \t%d\n",&iNo);					//5502924	/100
	
	printf("\n*(&iNo) = \t%d\n",*(&iNo));			// 10
	/*
	*(&iNo)
	= *(&iNo)
	= *(&10)
	= *(100)
	= 10
	*/
	
	printf("\n*******z = \t%d\n",*******z);			// 10

	return 0;
}