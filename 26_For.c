#include <stdio.h>

int main(void)
{
	int iCounter1;
	int iCounter2;

	printf("\n\nVersion 1 :-\n");
	for(iCounter1 = 0; iCounter1 <3; iCounter1++)
		printf("%d\t", iCounter1);
	// o/p : 0 1 2

	printf("\n\nVersion 2 :-\n");
	for(iCounter1 = 0, iCounter2 = 3; 
		iCounter1 <3 && iCounter2 >0; 
		iCounter1++, iCounter2--)
		printf("%d\t%d\n", iCounter1, iCounter2);
	//0 3 
	//1 2
	//2 1

	printf("\nVersion 3 :-\n");
	iCounter1 = 0;
	for(; iCounter1 <3; iCounter1++)
		printf("%d\t", iCounter1);
	// 0 1 2 

	printf("\n\nVersion 4 :-\n");
	for(iCounter1 = 0;; iCounter1++)
	{
		if( iCounter1 >=3)
				break;
			printf("%d\t", iCounter1);
	}
	// 0 1 2 

	printf("\n\nVersion 5 :-\n");
	for(iCounter1 = 0; iCounter1 <3;)
	{
		printf("%d\t", iCounter1);
		iCounter1++;
	}
	//0 1 2

	printf("\n\nVersion 6 :-\n");
	iCounter1 = 0;
	for(; ; )
	{
		if(iCounter1 >=3)
			break;
		printf("%d\t", iCounter1);
		iCounter1++;
	}
	 // 0 1 2

	printf("\n\nVersion 7 :-\n");
	iCounter1 = 0;
	for(; iCounter1 <3; )
	{	
		printf("%d\t", iCounter1);
		iCounter1++;
	}
	//0 1 2

	return 0;
}