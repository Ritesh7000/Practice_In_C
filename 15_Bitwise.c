#include <stdio.h>

int main(void)
{	
	//bitwise AND
	printf("28 & 6  =\t%d\n", 28 & 6);	//4
	//and sarkh behaviour

	//bitwise OR 
	printf("28 | 6  =\t%d\n", 28 | 6);	//30
	//or sarkh normal behaviour

	//X-OR
	printf("28 ^ 6  =\t%d\n", 28 ^ 6);	//26
	//Doghanpaiki konihi yekach ala pahije. Dhoghe kiva konicha nahi ala tar mi janar nahi
	
	//bitwise NOT
	printf("~28 =\t%d\n", ~28);	// -infinite
	
	//Left Shift
	printf("28 << 1 =\t%d\n", 28 << 1);	//56
	
	//right shift
	printf("28 >> 1 =\t%d\n", 28 >> 1);	//14

	printf("20 << 3 =\t%d\n", 20 << 3); //160
	printf("20 >> 3 =\t%d\n", 20 >> 3); //2

	/*
	   Magnititude	128		64		32		16		8		4		2		1
	   
			28	=	 0	     0      0   	1 	    1       1       0       0
			6 	=	 0		 0		0       0		0		1 		1       0

		28 & 6 	=    0		 0      0       0       0       1       0       0	= 4
		28 | 6  = 	 0		 0 		0		1 		1 		1 		1  		0	= 30	
		28 ^ 6  =    0 		 0  	0 		1   	1 		0 		1       0   = 26
		   ~28 	=	 1		 1      1       0       0       0       1       1   = -Infinit(Depends kiti bit ahet)
		   ~6	=	 1	     1      1       1 		1       0       0       1   = -Infinit(Depends kiti bit ahet)
	   28 << 1  =    0       0      1       1       1       0       0       0   = 56 (left shift)
	   28 >> 1  =    0       0 	    0       0       1       1       1       0   = 14 (Right shift)	 
				
				=	 0 		 0 		0  		1       0       1       0       0		
	   20 << 3  =    1       0      1       0       0       0       0       0   = 160
	   20 >> 3  =    0       0      0       0 		0 		0		1		0   = 2

	   Formula of Left-Shift:-
	   No << n = No*2^n 
	   28 << 1 = 28*2^1 = 28*2 = 56
	   20 << 3 = 20*2^3 = 20*8 = 160

	   Formula of Right-Shift:-
	   No >> n = No/2^n
	   28 >> 1 = 28/2^1 = 28/2 = 14
	   20 >> 3 = 20/2^3 = 20/8 = 2  



 	*/
	return 0;
}