#include<stdio.h>

int main(void)
{
	int arr[3][2][4] = {10,20,30,40,50,60,70,80,90};

	printf("\narr[0]\t\t=\t%d",arr[0]);					//11533920	/100(100-116)
	//3D->0th 2D naw(1D add) 

	printf("\narr[0][0]\t=\t%d",arr[0][0]);				//11533920	/100(100-104)
	//3D->0th 2D->0th 1D naw(ele add)

	printf("\narr[0][0][0]\t=\t%d",arr[0][0][0]);		//10
	//3D->0th 2D->0th 1D naw->0th ele naw(value)


	printf("\n\narr[1]\t\t=\t%d",arr[1]);				//11533952	/132(132-148)
	//3D->1st 2D naw(1D add)

	printf("\narr[1][0]\t=\t%d",arr[1][0]);				//11533952	/132(132-16)
	//3D->1st 2D->0th 1D naw(ele add)

	printf("\narr[1][0][0]\t=\t%d",arr[1][0][0]);		//90
	//3D->1st 2D->0th 1D->0th ele naw(value)


	printf("\n\narr[2]\t\t=\t%d",arr[2]);				//11533984 	/164(164-180)
	//3D->2nd 2D naw(1D add)

	printf("\narr[2][0]\t=\t%d",arr[2][0]);				//11533984 	/164(164-168)
	//3D->2nd 2D->0th 1D naw(ele add)

	printf("\narr[2][0][0]\t=\t%d",arr[2][0][0]);		//0
	//3D->2nd 2D->0th 1D->0th ele naw(value)


	printf("\n\narr[0]+1\t=\t%d",arr[0]+1);				//11533936 	/116(116-132)
	/*
	3D->0th 2D naw
		arr[0]+1 			//2D naw 1D add
		100 + 1*sizeof(Datatype)
		100 + 1*sizeof(1D)
		100 + 1*16
		116
	*/
	printf("\narr[0][0]+1\t=\t%d",arr[0][0]+1);			//11533924 	/104
	/*
		3D->0th 2D->0th 1D naw(ele add)
		arr[0][0]+1 			//1D naw ele add
		100 + 1*sizeof(Datatype)
		100 + 1*sizeof(int)
		100 + 1*4
		100 + 4
		104
	*/
	printf("\narr[0][0][0]+1\t=\t%d",arr[0][0][0]+1);	//11
	/*
		arr[0][0][0]+1
		10 + 1
		11
	*/


	printf("\n\narr[1]+1\t=\t%d",arr[1]+1);				//11533968 	/148
	/*
		1D size ne pudhe
		arr[1] + 1 				//2D naw 1D add
		132 + 1*sizeof(Datatype)
		132 + 1*sizeof(1D)
		132 + 1*16
		132 +	16
		148
	*/
	printf("\narr[1][0]+1\t=\t%d",arr[1][0]+1);			//11533956 	/136(136-140)
	/*
		ele size ne pudhe
		arr[1][0]+1 			//1D naw ele add
		132 + 1*sizeof(Datatype)
		132 + 1*sizeof(int)
		132 + 1*4
		132 + 4
		136
	*/
	printf("\narr[1][0][0]+1\t=\t%d",arr[1][0][0]+1);	//91
	/*
		arr[1][0][0]+1
		value + 1
		90+1
		91
	*/


	printf("\n\narr[2]+1\t=\t%d",arr[2]+1);				//11534000 	/180(180-196)
	//1D size ne pudhe
	
	printf("\narr[2][0]+1\t=\t%d",arr[2][0]+1);			//11533988 	/168(168-172)
	//ele size ne pudhe

	printf("\narr[2][0][0]+1\t=\t%d",arr[2][0][0]+1);	//1
	//Value + 1


	printf("\n\n&arr[2]\t\t=\t%d",&arr[2]);				//11533984 	/164(164-196)
	//&(3D->2nd 2D naw) = 2D add

	printf("\n&arr[2][0]\t=\t%d",&arr[2][0]);			//11533984 	/164(164-180)
	//&(3D->2nd 2D->0th 1D naw) = 1D add
	
	printf("\n&arr[2][0][0]\t=\t%d",&arr[2][0][0]);		//11533984 	/164(164-168)
	//&(3D->2nd 2D->0th 1D->ele naw) = ele add

	
	printf("\n\n&arr[2]+1\t=\t%d",&arr[2]+1);			//11534016	/196
	/*
		2D add + 1 			
		164 + 1 				//2D add
		164 + 1*sizeof(Datatype)		
		164 + 1*sizeof(2D)
		164 + 1*32
		164 + 32
		196 
	*/
	printf("\n&arr[2][0]+1\t=\t%d",&arr[2][0]+1);		//11534000 	/180(180-196)
	/*
		1D add + 1 			
		164 + 1 				//1D add
		164 + 1*sizeof(Datatype)		
		164 + 1*sizeof(1D)
		164 + 1*16
		164 + 16
		180
	*/
	printf("\n&arr[2][0][0]+1\t=\t%d",&arr[2][0][0]+1);	//11533988 	/168(168-172)
	/*
		ele add + 1 			
		164 + 1 				//ele add
		164 + 1*sizeof(Datatype)		
		164 + 1*sizeof(int)
		164 + 1*4
		164 + 4
		168
	*/


	printf("\n\n&arr\t\t=\t%d",&arr);					//11533920 	/100(100-196)
	//&(3D naw) = 3D add

	printf("\narr\t\t=\t%d",arr);						//11533920 	/100(100-132)
	//3d naw 2D add


	printf("\n\n*arr\t\t=\t%d",*arr);					//11533920 	/100(100-116)
	//*(3D naw) = 2D naw 1D add

	printf("\n**arr\t\t=\t%d",**arr);					//11533920 	/100(100-104)
	//**(3D naw) = *(2D naw) = 1D naw ele add

	printf("\n***arr\t\t=\t%d",***arr);					//10
	//***(3D naw) = **(2D naw) = *(1D naw) = ele naw(value)


	printf("\n\n&arr+1\t\t=\t%d",&arr+1);				//11534016	/196
	/*
		&arr + 1
		100 + 1 				//3D add
		100 + 1*sizeof(Datatype)			
		100 + 1*sizeof(3D)
		100 + 1*96
		100 + 96
		196     
	*/
	printf("\narr+1\t\t=\t%d",arr+1);					//11533952 	/132
	/*
		arr + 1 
		100 + 1 			   	//3D naw 2D add
		100 + 1*sizeof(Datatype)			
		100 + 1*sizeof(2D)
		100 + 1*32
		100 + 32
		132
	*/


	printf("\n\n*arr+1\t\t=\t%d",*arr+1);				//11533936 	/116(116-132)
	/*
		*(3D naw) = 2D naw
		
		100 + 1  				//2D naw 1D add
		100 + 1*sizeof(Datatype)			
		100 + 1*sizeof(1D)
		100 + 1*16
		100 + 16
		116

	*/
	printf("\n**arr+1\t\t=\t%d",**arr+1);				//11533924 	/104(104-108)
	/*
		**(3D naw) = 1D naw
		100 + 1 				//1D naw ele add
		100 + 1*sizeof(Datatype)			
		100 + 1*sizeof(int)
		100 + 1*4
		100 + 4
		104
	*/
	printf("\n***arr+1\t=\t%d",***arr+1);				//11
	/*
		***(3D naw) = ele naw(value)
		10 + 1 
		11

	*/
	printf("\n\n&(**arr)\t=\t%d",&(**arr));				//11533920 	/100(100-116)
	//&(**arr) = &(**3D naw) = &(1D naw) = 1D add

	printf("\n&(**arr)+1\t=\t%d",&(**arr)+1);			//11533936 	/116
	/*
		1D add + 1
		100 + 1 				//1D add
		100 + 1*sizeof(Datatype)			 
		100 + 1*sizeof(1D)
		100 + 1*16
		100 + 16
		116
	*/
						
	printf("\n\narr+2\t\t\t=\t%d",arr+2);				//11533984 	/164(164-196)
	/*
		arr + 2 				//3D naw 2D add
		100 + 2*sizeof(Datatype)			
		100 + 2*sizeof(2D)
		100 + 2*32
		100 + 64
		164
	*/
	printf("\n*(arr+2)\t\t=\t%d",*(arr+2));				//11533984 	/164(164-180)
	/*
		*(arr + 2)				//3D naw 2D add
		*(164)
		164 				    //2D naw 1D add
	*/
	printf("\n*(arr+2)+1\t\t=\t%d",*(arr+2)+1);			//11534000 	/180(180-196)
	/*
		*(arr+2)+1 				//2D naw 1D add
		164 + 1*sizeof(datatype)				
		164 + 1*sizeof(1D)
		164 + 1*16
		164 + 16
		180
	*/
	printf("\n*(*(arr+2)+1)\t\t=\t%d",*(*(arr+2)+1));	//11534000 	/180(180-184)
	/*
		*(*(arr+2)+1)			//2D naw 1D add
		*(180)					//1D naw ele add
		180
	*/
	printf("\n*(*(arr+2)+1)+3\t\t=\t%d",*(*(arr+2)+1)+3);		//11534012 	/192(192-196)
	/*
		*(*(arr+2)+1)+3 		//1D naw ele add
		180 + 3*sizeof(Datatype)		
		180 + 3*sizeof(int)
		180 + 3*4
		180 + 12
		192
	*/
	printf("\n*(*(*(arr+2)+1)+3)\t=\t%d\n",*(*(*(arr+2)+1)+3));				//0
	/*
		*(*(*(arr+2)+1)+3)
		*(192)				   //ele naw(value)
		0
	*/

	return 0;
}