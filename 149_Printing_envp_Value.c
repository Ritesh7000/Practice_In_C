#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	int iCounter;

	printf("EnvirunmentValues are:\n\n");

	for(iCounter = 0; envp[iCounter] != NULL; iCounter++)
		printf("%s\n",envp[iCounter]);

/*
	EnvirunmentValues are:

	ACSetupSvcPort=23210
	ACSvcPort=17532
	ALLUSERSPROFILE=C:\ProgramData
	APPDATA=C:\Users\Ritesh Patil\AppData\Roaming
	CommonProgramFiles=C:\Program Files (x86)\Common Files
	CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files
	CommonProgramW6432=C:\Program Files\Common Files
	COMPUTERNAME=LAPTOP-2NEVR66N
	ComSpec=C:\WINDOWS\system32\cmd.exe
	DevEnvDir=c:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE\
	DriverData=C:\Windows\System32\Drivers\DriverData
	EFC_5080=1
	Framework35Version=v3.5
	FrameworkDir=c:\WINDOWS\Microsoft.NET\Framework\
	FrameworkDIR32=c:\WINDOWS\Microsoft.NET\Framework\
	FrameworkVersion=v4.0.30319
	...
*/
	return 0;
}