//
// Created by Administrator on 2020/8/16.
//
#include "../hearder/Utils.h"

#include <iostream>

using namespace std;

string getFileName() {
    std::cout << "File Path is:" << endl;
    return "sdcard";
}

//没有在头文件声明的，无法在其他文件中使用。
string getFileLength() {
    return "2048";
}