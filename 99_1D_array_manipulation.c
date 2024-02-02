#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	printf("\n&arr\t=\t%d",&arr);				//9436320	/100(range = 100-120)
	//&(1D naw) = 1D add

	printf("\narr\t=\t%d",arr);					//9436320	/100(range = 100-104)
	// 1D naw = ele add

	printf("\n&arr[0]\t=\t%d",&arr[0]);			//9436320	/100
	//&(1D-> 0th ele naw) = 0th ele add

	printf("\narr[0]\t=\t%d",arr[0]);			//10
	//1D-> 0th ele naw(value)
	
	printf("\n&arr+1\t=\t%d",&arr+1);			//9436340	/120
	//1D add + 1D size ne pudhe

	printf("\narr+1\t=\t%d",arr+1);				//9436324	/104
	//1D naw(ele add) + element size ne pudhe

	printf("\n&arr[0]+1\t=\t%d",&arr[0]+1);		//9436324	/104
	//&(0th ele naw) + element size ne pudhe

	printf("\narr[0]+1\t=\t%d",arr[0]+1);		//11
	//0th element naw(value) + 1

	printf("\n*arr\t=\t%d",*arr);				//10
	//*(1D naw) = ele naw(value)

	printf("\n*arr+1\t=\t%d",*arr+1);			//11
	//ele naw(value) + 1
	//10+1=11

	printf("\n*(arr+1)\t=\t%d",*(arr+1));		//20
	/*
		*(arr + 1)
		*(100 + 1*sizeof(datatype))
		*(100 + 1*sizeof(int))
		*(100 + 1*4)
		*(100 + 4)
		*(104)
		20
	*/

	printf("\narr+2\t=\t%d",arr+2);				//9436328	/108
	/*
		arr+2
		arr + 2*sizeof(datatype)
		100 + 2*sizeof(int)
		100 + 2*4
		100 + 8
		108
	*/

	printf("\n*(arr+2)\t=\t%d",*(arr+2));		//30
	/*
		*(arr+2)
		*(arr + 2*sizeof(datatype))
		*(108)
		33
	*/

	return 0;
}