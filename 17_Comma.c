#include <stdio.h>

int main(void)
{
	int iAns1, iAns2, iAns3, iAns4;

	iAns1 = 10, 20, 30;			// 10 
	iAns2 = (10, 20, 30);		// 30
	iAns3 = 10, (20, (30), 40); // 10
	iAns4 = (10, (20, (30), 40)), 50; //  


	printf("iAns1 = \t%d\n", iAns1);	// 10
	printf("iAns2 = \t%d\n", iAns2);	// 30
	printf("iAns3 = \t%d\n", iAns3);	// 10
	printf("iAns3 = \t%d\n", iAns4);	// 40

	return 1, -1, 0;  // ithe return 0 honar, because associativity hi L -> R ahe mhanun
					  // ani jar return expression asel tar adhi expression solve karto ani te return karto
}
