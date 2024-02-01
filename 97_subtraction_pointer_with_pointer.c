#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};
	int *pPtr1 = &arr[0];
	int *pPtr2 = &arr[4];

	printf("\npPtr1\t=\t%d",pPtr1);					//15728036 		/100

	printf("\npPtr2\t=\t%d",pPtr2);					//15728052		/116
	
	printf("\npPtr1-pPtr2\t=\t%d",pPtr1-pPtr2);		//-4
/*	
	  pPtr1-pPtr2
	= (pPtr1-pPtr2)/sizeof(Datatype)
	= (100-116)/sizeof(int)
	= (-16)/4
	= -4
		
	(- and +)?00	
	1. Jar add(ans) '-' madhe asel tar add1(pPtr1) lahan ahe, ani kaam forword karaych ahe
*/

	printf("\npPtr2-pPtr1\t=\t%d",pPtr2-pPtr1);		//4

/*	
	  pPtr2-pPtr1
	= (pPtr2-pPtr1)/sizeof(Datatype)
	= (116-100)/sizeof(int)
	= 16/4
	= 4

	Jar add(ans) '+' madhe asel tar add1(pPtr2) motha ahe, ani kaam backword karaych ahe 	
*/

/*
	
	//pPtr1-pPtr2(add-add) is used for calculating distance between two address 
	  in terms of nummber of element's

*/	
	return 0;
}