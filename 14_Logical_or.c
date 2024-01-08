#include <stdio.h>

int main(void)
{
	int iNo1 = 0; // 1 2 3 4
	int iNo2 = 1; // 2 3 4
	int iNo3 = 2; // 3 4
	int iAns;
	
	/*
	iAns = iNo1++ || ++iNo2 && ++iNo3;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
	*/													 //  1     2     3    1	

	iAns = iNo1 && ++iNo2 || iNo3++; 
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 //  0	  1     3	   1	
	iAns = ++iNo1 && ++iNo2 || iNo3++;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														  //1     2     3     1
	iAns = iNo1++ && ++iNo2 || iNo3++;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 // 2      3     3     1	
	iAns = iNo1++ || ++iNo2 || iNo3++;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 // 3     3      3     1 
	iAns = iNo1++ || ++iNo2 && ++iNo3;
	//iAns = (((iNo1++) || ((++iNo2) && (++iNo3)));
	//iAns =  ((1) || ((++iNo2) && (++iNo3)));
	//iAns = 1

	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 // 4     3 	3     1   
	return 0;
}