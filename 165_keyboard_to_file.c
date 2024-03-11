#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char szText[50];

	fp = fopen("keyboard_to_file.txt","w");

	if(NULL == fp)
	{
		printf("\nCan't Open File\n");
		return -1;
	}

	printf("\nEnter strings:\n");

	while(strlen(gets(szText)) > 0)
	{
		fputs(szText, fp);
		fputs("\n",fp);
	}

/*	o/p:
	Enter strings:
	Hello, Good Morning!
*/
	
	fclose(fp);
	fp = NULL;

	return 0;
}

