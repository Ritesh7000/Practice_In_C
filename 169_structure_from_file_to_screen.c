#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;

	struct student
	{
		char szName[40];
		int iRollNo;
		float fPerc;
	};

	struct student Obj;

	fp = fopen("169_structure_from_file_to_screen.txt","r");

	if(NULL == fp)
	{
		printf("\nCan't Open File\n");
		return -1;
	}

	while(fscanf(fp,"%s %d %f",Obj.szName, &Obj.iRollNo, &Obj.fPerc) != EOF)
		printf("%s %d %f\n",Obj.szName, Obj.iRollNo, Obj.fPerc);

/*	o/p:
	abc 101 60.770000
	xyz 102 76.769997
*/

	fclose(fp);
	fp = NULL;

	return 0;
}