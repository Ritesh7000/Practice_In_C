#include<stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};

	int *p[] = {arr,arr+1,arr+2,arr+3,arr+4};

	int ** ptr = p;

	printf("\narr\t=\t%d \n*arr\t=\t%d \n&arr\t=\t%d",arr,*arr,&arr);
	//arr = 9698872(100) 	*arr = 110  			&arr = 9698872(100)

	printf("\n\np\t=\t%d \n*p\t=\t%d \n**p\t=\t%d",p,*p,**ptr);
	//p = (9698900)200 		*p = (9698872)100 		**ptr = 10

	printf("\n\nptr\t=\t%d \n*ptr\t=\t%d \n**ptr\t=\t%d",ptr,*ptr,**ptr);
	//ptr = (9698900)200 	*ptr = (9698872)100  	**ptr = 10


	*++ptr;
	printf("\n\n*++ptr");	
	/*
		*++ptr
		*(++ptr)	/ptr = ptr + 1
		*(ptr + 1)	
		*(200 + 1*sizeof(pointer)) //32 bit
		*(200 + 1*4)				
		*(200 + 4)
		*(204)
		derefer kel tar(*(204) = 104) yeil pan 
		pan ptr madhe 204 ch jail
	*/

	printf("\nptr-p\t\t=\t%d \n*ptr-arr\t=\t%d \n**ptr\t\t=\t%d",ptr-p,*ptr-arr,**ptr);
	//ptr-p = 1   *ptr-arr = 1   **ptr = 20
	/*
		ptr-p									
		(ptr-p)/sizeof(datatype)				
		(204-200)/sizeof(pointer)	//32bit		
		4/4
		1

		*ptr-arr	
		(*ptr-arr)/sizeof(datatype)
		(104-100)/sizeof(pointer)
		4/4
		1

		**ptr
		**(204)
		*(104)
		20
 
	*/

	*ptr++;
	printf("\n\n*ptr++");	
	/*
		*ptr++
		*(ptr++)
		*(ptr+1)
		*(204 + 1*sizeof(pointer))
		*(204 + 1*4)
		*(208)
		Derefer kel tar *(208) = 108 yeil
		pan ptr madhe 208 ch jail
	*/

	printf("\nptr-p\t\t=\t%d \n*ptr-arr\t=\t%d \n**ptr\t\t=\t%d",ptr-p,*ptr-arr,**ptr);
	//ptr-p = 2		*ptr-arr =	2	**ptr = 30
	/*
		ptr-p
		(208-200)/sizeof(pointer)
		8/4
		2

		*ptr-arr
		(108-100)/sizeof(pionter)
		8/4
		2

		**ptr
		**204
		*108
		30
	*/

	++*ptr;
	printf("\n\n++*ptr");	
	/*
		++*ptr
		++(*ptr)			
    (*ptr) = (*ptr) + 1
		(*ptr) + 1 						//associativity  indicates binding not solving
		108 + 1*sizeof(pointer)
		108 + 1*4
		112
	*/
	printf("\nptr-p\t\t=\t%d \n*ptr-arr\t=\t%d \n**ptr\t\t=\t%d\n",ptr-p,*ptr-arr,**ptr);
	//ptr-p = 2	 *ptr-arr = 3	**ptr = 40
	/*
		ptr-p
		(208-200)/sizeof(datatype)
		8/4
		2

		*ptr-arr
		*ptr-arr/sizeof(datatype)
		(112 - 100)/4
		12/4
		3

		**ptr
		**208
		*112
		40
	*/

	return 0;
}