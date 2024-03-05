#include<stdio.h>
#include<stdarg.h>

int Addition(int, ...);
int myprintf(const char *, ...);

int main(void)
{
	int iAns;

	iAns = myprintf("Hello\n");				//Hello
	myprintf("printf returned %d\n",iAns);	//printf returned 6


	myprintf("%d\n",10);				//10
	myprintf("%d\t%c\n",10, 'A');		//10	A
	myprintf("%c\t%d\n",'A', 10);		//A 	10
	myprintf("%d\t%c\t%f\t%lf\n", 10, 'A', 60.77f, 76.80);	//10      A       60.770000       76.800000

	iAns = Addition(2, 10 ,20);
	myprintf("Answer is %d\n",iAns);	//Answer is 30

	iAns = Addition(3, 10, 20, 30);
	myprintf("Answer is %d\n",iAns);    //Answer is 60

	iAns = Addition(4, 10, 20, 30, 40);
	myprintf("Answer is %d\n",iAns);	//Answer is 100

	return 0;
}

int myprintf(const char *pszFormat, ...)
{
	int iRet;
	va_list pArg = NULL;

	va_start(pArg, pszFormat);

	iRet = vprintf(pszFormat, pArg);

	va_end(pArg);

	return iRet;
}

int Addition(int iTotalParam, ...)
{
	int iAns;
	int iCounter;
	va_list pArg = NULL;

	va_start(pArg, iTotalParam);

	iAns = 0;
	for(iCounter = 0; iCounter < iTotalParam; iCounter++)
		iAns = iAns + va_arg(pArg, int);

	va_end(pArg);

	return iAns;
}

