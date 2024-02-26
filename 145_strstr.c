#include<stdio.h>
#include<string.h>

int main(void)
{
	char string1[20], string2[20], *pPtr;

	printf("\n\nEnter The String1:\t");			//GoodMorning
	gets(string1);
	printf("\n\nEnter The String2:\t");			//orn
	gets(string2);

	pPtr=strstr(string1,string2);

	if(pPtr==NULL)
		puts("\n\nString Not Found\n");
	else
	{
		printf("\n\nString Is Found At %d Locaation\n",(pPtr-string1)+1);		//6
		printf("\n\nString Found In '%s' \n",pPtr);								//orning
	}

	return 0;
}