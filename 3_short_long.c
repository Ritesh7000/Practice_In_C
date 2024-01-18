#include <stdio.h>

int main(void)
{
	printf("sizeof(int) = %d \n", sizeof(int)); //4
	printf("sizeof(short int) = %d \n", sizeof(short int)); //2
	printf("sizeof(long int) = %d \n", sizeof(long int)); //4
	printf("sizeof(long long int) = %d \n", sizeof(long long int)); //8
	//printf("sizeof(long long long int) = %d \n", sizeof(long long long int)); //error

	printf("\nsizeof(char) = %d \n", sizeof(char)); //1
	//printf("sizeof(short char) = %d \n", sizeof(short char)); //error
	//printf("sizeof(long char) = %d \n", sizeof(long char)); //error
	//printf("sizeof(long long char ) = %d \n", sizeof(long long char)); //error

	printf("\nsizeof(float) = %d \n", sizeof(float)); //4
	//printf("sizeof(short float) = %d \n", sizeof(short float)); //error
	//printf("sizeof(long float) = %d \n", sizeof(long float)); //4 or warning nonstatndard extention.
	//printf("sizeof(long long float) = %d \n", sizeof(long long float)); //error

	printf("\nsizeof(double) = %d \n", sizeof(double)); //8
	//printf("sizeof(short double) = %d \n", sizeof(short double)); //error
	printf("sizeof(long double) = %d \n", sizeof(long double)); //8
	//printf("sizeof(long long double) = %d \n", sizeof(long long double));//error

	return 0;
}
