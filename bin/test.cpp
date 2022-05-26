#include <iostream>
#include <windows.h>

//function pointers
typedef void (*pHelloFunc)(); 
typedef void (*pPrintNumFunc)(int number); 
typedef void (*pTermExFunc)(std::string command);

int main(int argc, char const *argv[])
{	
	//loading DLL
	HMODULE  dll  = LoadLibrary("bin/toolmaker.dll");    

	pTermExFunc termExecute = (pTermExFunc) GetProcAddress(dll,"termExecute");
	
	
	termExecute("echo Hello World!");



FreeLibrary(dll);
	
	
	

	return 0;
}