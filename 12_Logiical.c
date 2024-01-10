#include <stdio.h>

int main(void)
{
	int iAns;

	printf("1 && 1 = %d\n",1 && 1);				//1
	printf("1 || 0 = %d\n",1 || 0);				//1
	printf("1 || 1 = %d\n",1 || 1);				//1
	printf("0 || 0 = %d\n",0 || 0);				//0
	printf("1 && 1 && 0 = %d\n",1 && 1 && 0);	//0
	printf("0 || 1 || 0 = %d\n",0 || 1 || 0);	//1
	printf("1 || 0 && 1 = %d\n",1 || 0 && 1);	//1
	printf("0 || 1 && 0 = %d\n",0 || 1 && 0);	//0
	printf("!0 = %d\n", !0);					//1
	printf("!1 = %d\n", !1);					//0
	printf("!1 && 1 && 0   = %d\n",!1 && 1 && 0);	//0
	printf("0 || !1 || 0   = %d\n",0 || !1 || 0);	//0
	printf("1 || 0 && !1   = %d\n",1 || 0 && !1);	//0
	printf("0 || !1 && 0   = %d\n",0 || !1 && 0);	//0
	printf("!1 && !1 && !0 = %d\n",!1 && !1 && !0);	//0
	printf("!0 || !1 || !0 = %d\n",!0 || !1 || !0);	//1
	printf("!1 || 0 && !1  = %d\n",!1 || 0 && !1);	//0
	printf("0 || 11 && 0   = %d\n",0 || 11 && 0);		//0
		
	printf("\n10 && 20 =\t%d\n",10 && 20);				//1
	printf("10 && -20  =\t%d\n",10 && -20);				//1
	printf("10 || -20  =\t%d\n",10 || -20);				//1
	printf("-10 || -20 =\t%d\n",-10 || -20);			//1
	printf("10 && 0    =\t%d\n",10 && 0);				//0
	printf("0 && -20   =\t%d\n",0 && -20);				//0
	printf("10 || 0    =\t%d\n",10 || 0);	 			//1
	printf("0 || -20   =\t%d\n",0 || -20);				//1
	printf("!10        =\t%d\n", !10);					//0
	printf("!-10       =\t%d\n", !-10);					//0
	

	return 0;
}