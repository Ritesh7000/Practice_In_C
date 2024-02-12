#include<stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;

	printf("Enter Character 1 :\t");
	scanf("%c",&chChar1);

	printf("Enter Character 2 :\t");
	scanf("%c",&chChar2);

	printf("\nCharacter 1 is %c",chChar1);
	printf("\nCharacter 2 is %c",chChar2);
/*	o/p:(Expected Output)
	Enter Character 1 :     a
	Enter Character 2 :		z
	Character 1 is a
	Character 2 is z
*/

/*	o/p:(Actul Output)
	Enter Character 1 :     k
	Enter Character 2 :
	Character 1 is k
	Character 2 is
	|						(carret ithe yeun thambel)
*/
	//apan jevha 1st char type karto to adhi buffered madhe jato mang 2nd char sathi 'enter(\n)' karto tar to buffered madhe jato '\n' ani tyalach to next(2nd) char samajto
	//mhanun char 2 la '\n' print jhala.

	return 0;
}