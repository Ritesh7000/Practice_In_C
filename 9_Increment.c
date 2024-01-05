#include <stdio.h>

int main(void)
{
	int iNo = 10;						// 10	11	 12  	13    14   15   16   17
	int iAns1;							// 11			
	int iAns2;							// 11

	printf("iNo = %d\n",iNo);			//10

	iAns1 = ++iNo;                 
	printf("\niAns1 = ++iNo\n");		
	printf("iNo = %d\n", iNo);			//11
	printf("iAns1 = %d\n", iAns1);		//11

	iAns2 = iNo++;
	printf("\niAns = iNo++\n");
	printf("iNo = %d\n", iNo);			//12
	printf("iAns1 = %d\n", iAns2);		//11

	printf("\niNo++ = %d\n", iNo++);	//12
	printf("iNo = %d\n", iNo);          //13

	printf("\n++iNo = %d\n", ++iNo);    //14
	printf("iNo = %d\n", iNo);          //14

	printf("\niNo + 1 = %d\n", iNo+1);  //15
	printf("iNo = %d\n", iNo);          //14 

	printf("\n++iNo = %d\n",++iNo);     //15
	printf("iNo = %d\n", iNo);          //15

	//printf("\n++10 = %d", ++10);        //error,L-value required . 10 = 10+1;  | 10 = 11 kas possible ahe
	//printf("10++ = %d\n", 10++);        // Same as a varch
	//printf("(iNo+1)++ = %d",++(iNo+iAns1));  //apeksh 26 but l value required

	++iNo;
 	printf("\n++iNo\n");                 
	printf("iNO = %d\n", iNo);          //16
 
	iNo++;
	printf("\niNo++\n");
	printf("iNO = %d\n", iNo);          //17

	return 0;
}
