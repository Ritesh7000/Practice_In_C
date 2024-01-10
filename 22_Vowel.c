#include <stdio.h>

int main(void)
{
	char chChar;

	printf("Enter a Character :-\t"); //e
	scanf("%c",&chChar);

	switch(chChar)
	{
	//case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 65:								//duplicate already usedn
		printf("\nCAPITAL LETTER VOWEL!\n");
		break;
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("\nsmall letter vowel\n");	// small letter vowel
		break;
	default:
		printf("\nIt's not 'Vowel'\n");
	}


	return 0;
}