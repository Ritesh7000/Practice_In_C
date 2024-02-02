#include<stdio.h>

int main(void)
{
	int arr[3][2] = {10,20,30,40,50};

	printf("\n&arr\t\t=\t%d",&arr);					//8125056	/100(100-124)
	//&(2D naw)=2D add

	printf("\narr\t\t=\t%d",arr);					//8125056	/100(100-108)
	//2D naw(1D add)

	printf("\n\narr[0]\t\t=\t%d",arr[0]);			//8125056	/100(100-104)
	//2D->0th 1D naw(ele add)

	printf("\narr[1]\t\t=\t%d",arr[1]);				//8125064	/108(108-112)
	//2D->1st 1D naw(ele add)

	printf("\narr[2]\t\t=\t%d",arr[2]);				//8125072	/116(116-120)
	//2D->2nd 1D naw(ele add)

	printf("\n\narr[0][0]\t=\t%d",arr[0][0]);		//10
	//2D->0th  1D->0th ele naw(value)

	printf("\narr[1][0]\t=\t%d",arr[1][0]);			//30
	//2D->1st 1D->0th ele naw(value)

	printf("\narr[2][0]\t=\t%d",arr[2][0]);			//50
	//2D->2nd 1D->0th ele naw(value)

	printf("\n\narr[0][0]+1\t=\t%d",arr[0][0]+1);	//11
	//value + 1
	//10+1 = 11

	printf("\narr[1][0]+1\t=\t%d",arr[1][0]+1);		//31
	//value + 1
	//30+1 = 31

	printf("\narr[2][0]+1\t=\t%d",arr[2][0]+1);		//51
	//value + 1

	printf("\n\narr[0]+1\t=\t%d",arr[0]+1);			//8125060	/104
	/*
		arr[0]+1 				//1D naw (ele add)
		100 + 1 *sizeof(Datatype)
		100 + 1 *sizeof(int)
		100 + 1 *4
		100 + 4
		104
	*/
	printf("\narr[1]+1\t=\t%d",arr[1]+1);			//8125068	/112
	/*
		arr[1]+1 				//1D naw (ele add)
		108 + 1 *sizeof(Datatype)
		108 + 1 *sizeof(int)
		108 + 1 *4
		108 + 4
		112
	*/

	printf("\narr[2]+1\t=\t%d",arr[2]+1);			//8125076	/120
	// element size ne pudhe

	printf("\n\n*arr\t\t=\t%d",*arr);				//8125056	/100 (100 - 104)
	//*(2D naw) = 1D naw (ele add) 

	printf("\n**arr\t\t=\t%d",**arr);				//10
	//**(2D naw) = *(1D naw) = ele naw(value)

	printf("\n\narr+1\t\t=\t%d",arr+1);				//8125064	/108
	/*
		arr + 1 				//2D naw(1D add)
		100 + 1*sizeof(datatype)
		100 + 1*sizeof(1D)
		100 + 1*8
		100 + 8
		108
	*/

	printf("\n&arr+1\t\t=\t%d",&arr+1);				//8125080	/124
	/*
		&arr + 1 				//&(2D naw) = 2D add
		100 + 1*sizeof(Datatype)
		100 + 1*sizeof(2D)
		100 + 1*24
		100 + 24
		124
	*/

	printf("\n\n*arr+1\t\t=\t%d",*arr+1);			//8125060	/104(104-108)
	/*
		*arr + 1 				//1D naw(ele add)
		100 + 1*sizeof(datatype)
		100 + 1*sizeof(int)
		100 + 1*4
		100 + 4
		104
	*/

	printf("\n**arr+1\t\t=\t%d",**arr+1);			//11
	/*
		**arr + 1 				//ele naw(value)
		10 + 1
		11
	*/

	printf("\n\n&arr[0]+1\t=\t%d",&arr[0]+1);		//8125064	/108
	/*
	&(2D ->0ht 1D naw) = 1D add + 1
		100 + 1*sizeof(Datatype)	//1D add
		100 + 1*sizeof(1D)
		100 + 1*8
		100 + 8
		108
	*/

	printf("\n&arr[0][0]+1\t=\t%d",&arr[0][0]+1);	//8125060	/104
	/*
		 &(2D->0th 1D->0th ele naw(value)) = ele add
		 ele add + 1
		 100 + 1*sizeof(int)		//ele add
		 100 + 1*4
		 100 + 4
		 104
	*/

	printf("\n\narr+2\t\t=\t%d",arr+2);				//8125072	/116(116-124)
	/* 
		1D size ne pudhe
		arr + 2 			  		//2D naw 1D add
		100 + 2*sizeof(datatype)
		100 + 2*sizeof(1D)
		100 + 2*8
		100 + 16
		116
	*/

	printf("\n*(arr+2)\t=\t%d",*(arr+2));			//8125072	/116 (116-120)
	/*
		*(arr+2)
		*(116)						//2D naw
		116 						//1D naw ele add

	*/

	printf("\n*(arr+2)+1\t=\t%d",*(arr+2)+1);		//8125076	/120(120-124)
	/*
		*(arr+2)+1 					//1D naw ele add
		116 + 1
		116 + 1*sizeof(datatype)
		116 + 1*sizeof(int)
		116 + 1*4
		116 + 4
		120
	*/

	printf("\n*(*(arr+2)+1)\t=\t%d",*(*(arr+2)+1));	//0
	/*
		*(*(arr+2)+1)				//1D naw ele add
		*(120)						//ele naw(Value)
		0					
	*/

	return 0;
}