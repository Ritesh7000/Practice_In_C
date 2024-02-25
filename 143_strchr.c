#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20],chChar;
	char *pPtr;

	printf("\n\nEnter The String:\t");					//Hello
	gets(str);
	printf("\n\nEnter Character To Be Found:\t");		//l
	scanf("%c",&chChar);

	pPtr=strchr(str,chChar);
	//(Start to End shodhato)

	if(pPtr==NULL)
		printf("\n\nCharacter Is Not Found\n");
	else
		printf("\n\nCharacter Is Found At %d Location",(pPtr-str)+1);	//3
	//Character Is Found At 3 Location

	return 0;
}