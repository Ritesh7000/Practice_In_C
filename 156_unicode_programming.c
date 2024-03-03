#include<stdio.h>
#include<string.h>
#include<wchar.h>
//wchar.h madhe 'wchar_t' ya type ch declaration ahe ->'typedef unsigned short wchar_t;'

int main(void)
{
	wchar_t wchChar = 'A';

	wchar_t wszStr[] = L"Hello";

	wchar_t *pwszStr = L"Hello";

	printf("sizeof(wchar)\t=\t%d\n",sizeof(wchChar));		//2

	printf("sizeof(wszStr)\t=\t%d\n",sizeof(wszStr));		//12

	printf("sizeof(pwszStr)\t=\t%d\n",sizeof(pwszStr));		//4

	printf("strlen(wszStr)\t=\t%d\n",strlen(wszStr));		//1

	printf("strlen(pwszStr)\t=\t%d\n",strlen(pwszStr));		//1

	printf("wcslen(wszStr)\t=\t%d\n",wcslen(wszStr));		//5

	printf("wcslen(pwszStr)\t=\t%d\n",wcslen(pwszStr));		//5

	return 0;
}