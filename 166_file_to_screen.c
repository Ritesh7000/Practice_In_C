#include<stdio.h>

int main(void)
{
	FILE * fp = NULL;
	char szText[50];

	fp = fopen("File_To_Screen.txt","r");

	if(NULL == fp)
	{
		printf("\nCan't Ooeen File\n");
		return -1;
	}

	while(fgets(szText,49,fp) != NULL)
		printf("%s",szText);
/*  o/p:
	C is an imperative, procedural language in the ALGOL tradition.

	It has a static type system.

	In C, all executable code is contained within subroutines
	(also called "functions", though not in the sense of functional programming).
*/

	fclose(fp);
	fp = NULL;

	return 0;
}