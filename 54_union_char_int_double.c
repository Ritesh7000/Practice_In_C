union Demo
{
	int iNo;
	char chChar;
	double dNo;
};

int main(void)
{
	union Demo obj;

	printf("sizeof(obj) = \t%d\n\n",sizeof(obj));//8

	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);		//warning,uninitialized local variable 'obj' used
	//G1  G2  G3

	obj.iNo = 10;
	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//10  G4  G5

	obj.chChar = 'S';
	printf("iNo =%d chChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//G6  S  G7

	obj.dNo = 60.77;
	printf("iNo =%d\tchChar =%c\tdNo =%lf\t\n",obj.iNo,obj.chChar,obj.dNo);
	//G8  G9  60.77  



	return 0;
}