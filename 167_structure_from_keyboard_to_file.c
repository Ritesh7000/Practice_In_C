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

	struct student Obj;
	char chTemp;

	fp = fopen("structure_from_keyword_to_file.txt","w");

	if(NULL == fp)
	{
		printf("\nCan't Open File\n");
		return -1;
	}

	while(chChar == 'Y' || chChar == 'y')
	{
		printf("\n\nEnter name,roll no. and percentage:\n");
		scanf("%s %d %f",Obj.szName,&Obj.iRollNo,&Obj.fPerc);
		fprintf(fp,"%s %d %f\n",Obj.szName,Obj.iRollNo,Obj.fPerc);

		printf("\nAdd another record(Y/N) :\t");
		scanf("%c%c", &chTemp, &chChar);
	}
/*
	Enter name,roll no. and percentage:
	ram 101 60.77

	Add another record(Y/N) :	N
*/

	fclose(fp);
	fp = NULL;

	return 0;
}