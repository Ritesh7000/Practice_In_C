#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	printf("arr =\t%d\n",arr);				//7207352   //100
	//1D array ch nav(element cha add)range(100-104)

	printf("&arr =\t%d\n",&arr);			//7207352	//100
	//1D cha add, range(100-120)

	printf("arr+1 =\t%d\n",arr+1);     		//7207356	//104
	//1D arrch nav, element size ne pudhe

	printf("&arr+1 =\t%d\n",&arr+1);    	//7207372   //120
	//1D cha add,1D size ne pudhe(20)

	printf("arr[0] =\t%d\n",arr[0]);    	//10       
	//1D chya 0th element ch nav(value)

	printf("&arr[0] =\t%d\n",&arr[0]);   	//7207352   //100
	//&arr[0] element ch nav

	printf("arr[0]+1 =\t%d\n",arr[0]+1);  	//11
	//1D chya 0th element ch nav (value)+1

	printf("&arr[0]+1 =\t%d\n",&arr[0]+1); 	//7207356   //104
	//&arr[0] element ch nav,element size ne pudhe(4byte)

	printf("arr[2] =\t%d\n",arr[2]);    	//30
	//1D chya 2nd index ch nav

	printf("arr[2]+2 =\t%d\n",arr[2]+2);  	//32
	//1D chya 2nd index ch nav + 2

	printf("&arr[2] =\t%d\n",&arr[2]);   	//7207360   //108
	//&arr[2] chya element ch nav(add)

	printf("&arr[2]+2 =\t%d\n",&arr[2]+2); 	//7207368	//116
	// add + element size(2) ne pudhe(2*4 = 8byte)
	//108+(2*4) = 108+8 = 116

	printf("%d",++arr);     				//error,L-value required
	//printf("%d",arr++);     				//error,L-value required
	/*
	error,because
	
		++NO             |   	++arr
		no = no+1 		 |		arr = arr+1
		no = 10+1 		 |		100 = 100+1
		no = 11			 |		100 = 101
		allowed			 |		error

		no la swatachi memory ahe(l-value),pan arr la swtachi independent memory nahi.
		mhanun arr++ la error yete. 	
	*/
	
	return 0;
}