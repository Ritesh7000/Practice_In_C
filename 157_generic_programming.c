#include<stdio.h>
#include<tchar.h>

int main(void)
{
	TCHAR chChar = 'A';

	TCHAR szStr[] = _TEXT("Hello");

	TCHAR *pszStr = _T("Hello");

	printf("sizeof(chChar)\t=\t%d\n",sizeof(chChar));		//1
	printf("sizeof(szStr)\t=\t%d\n",sizeof(szStr));			//6
	printf("sizeof(pszStr)\t=\t%d\n",sizeof(pszStr));		//4

	printf("_tcslen(szStr)\t=\t%d\n",_tcslen(szStr));		//5
	printf("_tcslen(pszStr)\t=\t%d\n",_tcslen(pszStr));		//5

	return 0;
}