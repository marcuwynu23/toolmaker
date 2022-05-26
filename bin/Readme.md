# Use lib.h for using of DLL function call
```c++
// use windows.h header for using DLL

#include <windows.h>

// use LoadLibrary function to load DLL

HMODULE  dll  = LoadLibrary("bin/toolmaker.dll")

//create typedef pointer function to use dll function

typedef void (*pTermExFunc)(std::string command);


//create clone function using pointer function and GetProcAddress function
pTermExFunc termExecute = (pTermExFunc) GetProcAddress(dll,"termExecute");


//finally u can use now the dll function
termExecute("echo Hello World!");

```
