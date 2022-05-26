#ifndef __DLLEXPORT_H__
#define __DLLEXPORT_H__
#ifdef __cplusplus

extern "C"{
#endif

#ifdef BUILD_DLL
    #define DLL_IMPORT __declspec(dllexport)
#else
    #define DLL_IMPORT __declspec(dllimport)
#endif



//for export functions initiation
void termExecute(std::string command);
void termMessage(std::string msg);
void changeDir(std::string directoryName);
std::string createFile(std::string path,std::string fileName);
std::string createFolder(std::string folderPath);

#ifdef __cplusplus
}
#endif
#endif 

 
