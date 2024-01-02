#include <stdio.h>

int main(void)
{
	printf("hello\n"); 		//hello
	printf("'hello'\n"); 	//'hello'
	printf("\'hello\'\n");	//'hello'
	//printf(""hello\n"");	//error ) missing before hello	
	printf("\"hello\"\n");	//"hello"
	printf("hello?\n");		//hello?
	printf("hello\?\n"); 	//hello?
	printf("hello\n");  	//hello
	printf("\temp\bin\new\n");
	//	emin                //\t mule tab ala ani \b backspace mang p gela ani \n new line mhanun ew new line var
	//ew
	printf("/temp/bin/new\n");		///temp/bin/new
	printf("\\temp\\bin\\new\n");	//\temp\bin\new
	printf("Hello World\a\n");		//	\a mule beep sound generat jhala
	printf("he\fll\fo\n"); 			// put caret to beginnig of next page
	printf("he\vll\vo\n");
	printf("\0hello\n");            // /0 mule pudhachi string printch nahi keli
	printf("hel\0lo\n");			// hel
	
	return 0;
}


