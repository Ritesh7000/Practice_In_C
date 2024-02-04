#include<stdio.h>

#define MAX1 5
#define MAX2 10
#define MAX3 10

int main(void)
{
	int iPlane;
	int iRows;
	int iColumns;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int arr[MAX1][MAX2][MAX3] = {0};

	printf("Enter Planes you want(1-5) =\t");
	scanf("%d",&iPlane);
	//Enter Planes you want(1-5) =    2
 
	if(iPlane > MAX1)
	{
		printf("Plane more than 5.");
		return 1;
	}

	printf("Enter Rows you want(1-10) =\t");
	scanf("%d",&iRows);
	//Enter Rows you want(1-10) =     2

	if(iRows > MAX2)
	{
		printf("Rows more than 10.");
		return 1;
	}
	
	printf("Enter Columns you want(1-10) =\t");
	scanf("%d",&iColumns);
	//Enter Columns you want(1-10) =  3

	if(iColumns > MAX3)
	{
		printf("Columns more than 10.");
		return 1;
	}

	printf("\n");
	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
			{
				printf("Enter value of arr[%d][%d][%d] =\t",iCounter1,iCounter2,iCounter3);
				scanf("%d",&arr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}
/*	o/p:
	Enter value of arr[0][0][0] =   10
	Enter value of arr[0][0][1] =   20
	Enter value of arr[0][0][2] =   30
	Enter value of arr[0][1][0] =   40
	Enter value of arr[0][1][1] =   50
	Enter value of arr[0][1][2] =   60
	Enter value of arr[1][0][0] =   70
	Enter value of arr[1][0][1] =   80
	Enter value of arr[1][0][2] =   90
	Enter value of arr[1][1][0] =   100
	Enter value of arr[1][1][1] =   110
	Enter value of arr[1][1][2] =   120
*/
	printf("\n");

	for(iCounter1 = 0;iCounter1 < iPlane;iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
			{
				printf("\narr[%d][%d][%d] value is =\t%d",iCounter1,iCounter2,iCounter3,arr[iCounter1][iCounter2][iCounter3]);	
			}
		}
		printf("\n");
	}
/*	o/p:
	arr[0][0][0] value is = 10
	arr[0][0][1] value is = 20
	arr[0][0][2] value is = 30
	arr[0][1][0] value is = 40
	arr[0][1][1] value is = 50
	arr[0][1][2] value is = 60

	arr[1][0][0] value is = 70
	arr[1][0][1] value is = 80
	arr[1][0][2] value is = 90
	arr[1][1][0] value is = 100
	arr[1][1][1] value is = 110
	arr[1][1][2] value is = 120
*/

	return 0;
}