#include <stdio.h>

int main(void)
{
	int iNo1 = 8;
	int iNo2 = -(-3);

	printf("%d / %d = %d\n" , 9, 2, 9 / 2);		// 9/2 = 4
	printf("%d / %d = %d\n" , -9, 2, -9 / 2);	// -9/2 = -4
	printf("%d / %d = %d\n" , 9, -2, 9 / -2);	//  9/-2 = -4
	printf("%d / %d = %d\n" , -9, -2, -9 / -2);	// -9/-2 = 4
	
	printf("%d / %d = %d\n" , -iNo1,-iNo2, -iNo1 / -iNo2); 	// -8/3 = -2 //2
	printf("%d / %d = %d\n" , -iNo1,iNo2, -iNo1 / iNo2); 	// -8/-3 = 2  //-2
	

	return 0;
}