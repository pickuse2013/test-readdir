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
	if ((dir = opendir("D:\\testFolder")) != NULL) {
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
	std::string path = "D:\\testFolder";
	std::chrono::steady_clock::time_point begin2 = std::chrono::steady_clock::now();
	for (const auto& entry : filesystem::directory_iterator(path)) {

	}
	//std::cout << entry.path() << std::endl;

	std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count() << "[micro second]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end2 - begin2).count() << "[nano second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count()) / 1000000.0 << "[second]" << std::endl;
	std::cout << "Time difference = " << (std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2).count()) / 1000.0 << "[mill second]" << std::endl;

}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
