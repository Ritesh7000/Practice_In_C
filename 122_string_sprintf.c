#include<stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	char szText[255];

	sprintf(szText, "%s%s%s", szStr, pszStr, "Night");
	//szText[] madhe -> HelloGoodNight  ala

	printf(szText);		//HelloGoodNight

	return 0;
}