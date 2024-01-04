#include <stdio.h>

int main(void)
{
	int iAns;

	iAns = 2 * 2.25 + (5 / 3); 

	printf("iAns %%d = %d\n", iAns); //6
	//printf("iAns %%f = %f\n", iAns); //error floatingpiont support not loaded
	//printf("iAns %%lf = %lf\n", iAns); //same error 
	printf("iAns %%c = %c\n", iAns); // 0 or null
	
	return 0;
}


/*
iAns  = 2 * 2.25 + (5/3)
adhi '=' ala, tyane  solve kele, tya sathi precedency ani associativity bhagitali.
mang   = ((2 * 2.25) + (5 / 3)) ithe precedency ani associativity ch kaam sample
         ani he left -> right ch solve hot
         = ((2 * 2.25) + (5 / 3))   	//ithe 2 ch promotion jhala 2.00
         = (4.50 + (5 /3))       
 		 = (4.50 + 1)	                // 
 		 = 5.50       
 		 = 5 							// ithe 5.50 ch Demotion jhal						

 */		 