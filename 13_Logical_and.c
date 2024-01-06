#include <stdio.h>

int main(void)
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;

	iAns = iNo1 && ++iNo2 && iNo3++; //
/* 
	iAns = iNo1 && ++iNo2 && iNo3++; //adhi bind karnar
		 = iNo1 && (++iNo2) && (iNo3++)  //++operator chi precedency  jast ahe mhanun
		 = ((iNo1 && (++iNo2)) && (iNo3++)) //ithe precedence ani associativity  ch kaam sample  
		 = ((iNo1 && (++iNo2)) && (iNo3++)) //mang = ala, ani adhi right ch expression solve karv lagel mang value left la assign hoil
		 = ((iNo1 && (++iNo2)) && (iNo3++)) // adhi 2nd && bahgital pan tyacha left opreand ha solve nahi ahe mang adhi tyala solve karnar
		 = ((iNo1 && (++iNo2)) && (iNo3++))	//mang tithe 1st && cha 1st opearand ha 0 ahe tar && ha 2nd opearad la bhaganarch nahi 		 
		 = (0 && (iNo3++)) // ithe pan same 2nd la bhaganarch nhi
		 = 0
	*/

	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 //  0	  1     2		0	
	iAns = ++iNo1 && ++iNo2 && iNo3++;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														  //1     2     3     1
	iAns = iNo1++ && ++iNo2 && iNo3++;
	printf("iNo1 = %d\tiNo2 = %d\tiNo3 = %d\tiAns = %d\n", iNo1, iNo2, iNo3, iAns);
														 // 2     3     4     1							
	return 0;
}