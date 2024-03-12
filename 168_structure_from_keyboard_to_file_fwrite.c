#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char chChar = 'Y';

	struct student
	{
		char szName[40];
		int iRollNo;
		float fPerc;
	};

	struct student s;
	char chTemp;

	fp = fopen("structure_from_keyboard_to_file_fwrite.txt","w");

	if(NULL == fp)
	{
		printf("\nCan't Open File\n");
		return -1;
	}

	while(chChar == 'Y' || chChar == 'y')
	{
		printf("\n\nEnter Name, Roll No. and Percentage:\n");
		scanf("%s %d %f",s.szName, &s.iRollNo, &s.fPerc);

		fwrite(&s, sizeof(s),1,fp);

		printf("\nAdd another record (Y/N)");
		scanf("%c%c",&chTemp);
	}

	fclose(fp);
	fp = NULL;

	return 0;
}