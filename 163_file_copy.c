#include<stdio.h>

int main(void)
{
	FILE *fpSource = NULL;
	FILE *fpDestination = NULL;
	char chChar;

	fpSource = fopen("file_source.txt","r");

	if(NULL == fpSource)
	{
		printf("\nCant open Source File\n");
		return -1;
	}

	fpDestination = fopen("file_destination.txt","w");

	if(NULL == fpDestination)
	{
		printf("\nCant ope Destination File\n");
		fclose(fpSource);
		fpSource = NULL;

		return -1;
	}

	while(1)
	{
		chChar = fgetc(fpSource);
		if(chChar == EOF)
			break;
		fputc(chChar, fpDestination);
	}

	fclose(fpSource);
	fpSource = NULL;
	fclose(fpDestination);
	fpDestination = NULL;

	printf("\nCopied Successfully\n");

//	o/p: Copied Successfully

	return 0;
}