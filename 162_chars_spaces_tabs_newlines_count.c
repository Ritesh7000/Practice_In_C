#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;

	int iNoOfChars = 0;
	int iNoOfSpaces = 0;
	int iNoOfTabs = 0;
	int iNoOfLines = 0;

	char chChar;

	fp = fopen("162_chars_spaces_tabs_newlines_count.txt","r");

	if(NULL == fp)
	{
		printf("Can't Open the File");
		return -1;
	}

	while(1)
	{
		chChar = fgetc(fp);
		if(chChar == EOF)
			break;

		iNoOfChars++;

		if(chChar == ' ')
			iNoOfSpaces++;

		else if(chChar == '\t')
			iNoOfTabs++;

		else if(chChar == '\n')
			iNoOfLines++;
	}

	fclose(fp);
	fp = NULL;

	printf("No of characters are %d\n",iNoOfChars);
	printf("No of spaces are %d\n",iNoOfSpaces);
	printf("No of tabs are %d\n",iNoOfTabs);
	printf("No of lines are %d\n",iNoOfLines);

/*	o/p:
	No of characters are 328
	No of spaces are 54
	No of tabs are 3
	No of lines are 2
*/
	
	return 0;
}