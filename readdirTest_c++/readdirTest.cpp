// readdirTest.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

//#include <string>
//#include <iostream>
//#include <filesystem>
//#include <chrono>
//using namespace std;
//using namespace std::filesystem;
//int main()
//{
//    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
//
//    std::cout << "Hello World!\n";
//    std::string path = "D:\\testFolder";
//    for (const auto& entry : filesystem::directory_iterator(path))
//        continue;
//        //std::cout << entry.path() << std::endl;
//
//    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
//
//    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[micro second]" << std::endl;
//    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[nano second]" << std::endl;
//    std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) / 1000000.0 << "[second]" << std::endl;
//    std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) / 1000.0 << "[mill second]" << std::endl;
//}

#include <iostream>
#include <vector>
#include "dirent.h"
#include <chrono>
#include <string>
#include <filesystem>
using namespace std;
using namespace std::filesystem;

int main()
{
	std::cout << "執行 readdir 方法" << std::endl;
	DIR* dir;
	struct dirent* ent;
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	if ((dir = opendir("C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder")) != NULL) {
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL) {
			//printf("%s\n", ent->d_name);
		}
		closedir(dir);
	}
	else {
		/* could not open directory */
		perror("");
		return EXIT_FAILURE;
	}
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[micro second]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[nano second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) / 1000000.0 << "[second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) / 1000.0 << "[mill second]" << std::endl;


	

	std::cout << "執行 filesystem::directory_iterator 方法" << std::endl;
	std::string path = "C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder2";
	std::chrono::steady_clock::time_point begin2 = std::chrono::steady_clock::now();
	for (const auto& entry : filesystem::directory_iterator(path)) {

	}
	//std::cout << entry.path() << std::endl;

	std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count() << "[micro second]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end2 - begin2).count() << "[nano second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count()) / 1000000.0 << "[second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count()) / 1000.0 << "[mill second]" << std::endl;



	std::cout << "100k path + file 執行 readdir 方法" << std::endl;
	//DIR* dir;
	//struct dirent* ent;
	std::chrono::steady_clock::time_point begin3 = std::chrono::steady_clock::now();
	if ((dir = opendir("C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder2")) != NULL) {
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL) {
			//printf("%s\n", ent->d_name);
		}
		closedir(dir);
	}
	else {
		/* could not open directory */
		perror("");
		return EXIT_FAILURE;
	}
	std::chrono::steady_clock::time_point end3 = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end3 - begin3).count() << "[micro second]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end3 - begin3).count() << "[nano second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end3 - begin3).count()) / 1000000.0 << "[second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end3 - begin3).count()) / 1000.0 << "[mill second]" << std::endl;




	std::cout << "100k path + file 執行 filesystem::directory_iterator 方法" << std::endl;
	path = "C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder";
	std::chrono::steady_clock::time_point begin4 = std::chrono::steady_clock::now();
	for (const auto& entry : filesystem::directory_iterator(path)) {

	}
	//std::cout << entry.path() << std::endl;

	std::chrono::steady_clock::time_point end4 = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end4 - begin4).count() << "[micro second]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end4 - begin4).count() << "[nano second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end4 - begin4).count()) / 1000000.0 << "[second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end4 - begin4).count()) / 1000.0 << "[mill second]" << std::endl;
}