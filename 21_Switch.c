#include <stdio.h>


int main(void)
{
	printf("switch 1\n");
	switch(2)
	{
	case 1:
		printf("One\t");
	case 2:
		printf("Two\t");
	case 3:
		printf("Three\t");
	}
	// o/p : Two Three

	printf("\n\nswitch 2\n");
	switch(3)
	{
	case 1:
		printf("One\t");
	case 2:
		printf("Two\t");
	case 3:
		printf("Three\t");
	}
	//o/p : Three
	
	printf("\n\nswitch 3\n");
	switch(5)
	{
	case 1:
		printf("One\t");
	case 2:
		printf("Two\t");
	case 3:
		printf("Three\t");
	default:
		printf("Default\t");
	}
	// o/p : Default
	
	printf("\n\nswitch 4\n");
	switch(5)
	{
	case 1:
		printf("One\t");
	case 2:
		printf("Two\t");
	default:
		printf("Default\t");
	case 3:
		printf("Three\t");
	}
	// o/p : Dafault Three
	
	printf("\n\nswitch 5\n");
	switch(5)
	{
	case 1:
		printf("One\t");
	case 2:
		printf("Two\t");
	case 3:
		printf("Three\t");
	}
	// o/p : No o/p
	
	return 0;
}