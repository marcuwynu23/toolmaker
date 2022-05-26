#include <iostream>
#include <thread>
#include <mutex>
#include <direct.h>
#include <unistd.h> 
#include "lib.h"


//functions implementation
void termExecute(std::string command)
{
	std::mutex m;
	std::thread t{[&]
		{
			std::lock_guard<std::mutex> lock{m};
			system(command.c_str());
		}
	};
	t.join();
}



void termMessage(std::string msg)
{
	std::mutex m;
	std::thread t{[&]
		{
			std::lock_guard<std::mutex> lock{m};
			std::cout << msg << std::endl;
		}
	};
	t.join();
}



void changeDir(std::string directoryName)
{
	std::mutex m;
	std::thread t{[&]
		{
			std::lock_guard<std::mutex> lock{m};
			chdir(directoryName.c_str());
		}
	};
	t.join();
}

std::string createFile(std::string path,std::string fileName)
{
	return "cf "+ path + "\\"+ fileName;
}




std::string createFolder(std::string folderPath)
{
	return "md " + folderPath + "\\";
}
