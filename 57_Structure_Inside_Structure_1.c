#include <stdio.h>

int main(void)
{
	struct Outer
	{
		int iNo1;
		float fNo1;
		struct Inner
		{
			int iNo2;
			float fNo2;
		};
	}oObj;

	printf("sizeof(oObj) =\t%d",sizeof(oObj));		//8
	
	//Inner struct cha obj cha create nahi kela ahe, mhanun tyala sizech nahi ahe.

	//yaat(struct) compiler 4 membar manto ani o/p 16 deto.
	//proof,1.jar same name thevl(iNo1) tar error deto  
	//2.oObj.iNo2 = 123;
	//printf("\noObj.iNo2 =\t%d",oObj.iNo2);

	return 0;
}