#include <stdio.h>

int main(void)
{

	printf("-1 = %d\n", -1);	// -1
	printf("-1 = %u\n", -1);	// 4294967295
	printf("-2 = %u\n", -2);	// 4294967294
	printf("0 = %u\n", 0);  	// 0
	
	printf("\nOcta :- \n");
	printf("7 = %o\n", 7);		// 7
	printf("8 = %o\n", 8);		// 10
	printf("65 = %o\n", 65);	// 101
	printf("129 = %o\n", 129);	// 201
	printf("256 = %o\n", 256);	// 400
	printf("513 = %o\n", 513);	// 2001
	printf("1024 = %o\n", 1024); // 1000
	printf("784 = %o\n", 784); 	// 1420
	printf("918 = %o\n", 918);  // 1624

//OCTA	  |	2048	1024	512	  |	256	  	128		64	  |  32		 16	 	 8	 |	 4 		 2 		 1  |

//784     |  0 	 	 0       1    |  1       0       0    |   0       1      0   |   0       0       0  | // 1420
//918	  |  0 	 	 0       1    |  1       1       0    |   0       1      0   |   1       1       0  | // 1624

	printf("\nHexa :-\n");
	printf("7 = %x\n", 7);		// 7
	printf("8 = %x\n", 8);		// 8
	printf("65 = %x\n", 65);	// 41
	printf("129 = %x\n", 129);	// 81
	printf("256 = %x\n", 256);	// 100
	printf("513 = %x\n", 513);	// 201
	printf("1204 = %x\n", 1024); // 400
	printf("784 = %x\n", 795); 	 // 31b
	printf("918 = %x\n", 932);   // 3ae

	printf("513 = %X\n", 513);	// 201
	printf("1024 = %X\n", 1024); // 400
	printf("795 = %X\n", 795); 	 // 31B
	printf("942 = %X\n", 942);   // 3AE

//HEXA	  |	2048	1024	512		256	  |	128		64		32		16	 |	8		4 		2 		1  |

//784     |  0 	 	 0       1       1    |  0       0       0       1   |  1       0       1       1  | //31B
//918	  |  0 	 	 0       1       1    |  1       0       1       0   |  1       1       1       0  | //3AE

	printf("\n\n");
	printf("-128 %%ld = %ld\n", -128);	 	//-128
	printf("128 %%hd = %hd\n", 128);	  	//128
	printf("128 %%lu = %lu\n", 128);		//128
	printf("128 %%hu = %hu\n", 128);		//128
	printf("128 %%f = %f\n", 128);			//0.000
	printf("128.0f %%f= %f\n", 128.0f);		//128.00
	printf("128 %%e = %e\n", 128);			//7.108959e-306
	printf("128 %%E= %E\n", 128);			//7.108959E-306
	printf("128 %%g = %g\n", 128);			//7.108959e-306
	printf("128 %%G = %G\n", 128);			//7.108959E-306
	printf("128 %%f = %f\n", 128);			//0.00
	printf("128 %%s = %s\n", "Hi String ahe na.");		//Hi String ahe na.
	printf("128 %%s = %s\n", "Hi String \0ahe na."); 	//Hi String 
//	printf("128 %%p = %p\n", *p);		//

	return 0;
}