//
// Created by Administrator on 2020/8/16.
//

#ifndef HELLOWORLD_UTILS_H
#define HELLOWORLD_UTILS_H

#include "istream"
#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

//头文件的使用规则：
//1、头文件中只能声明变量 和 函数，不能对变量和函数进行定义。
//2、变量的声明必须加extern，否则会认为是进行了定义。例如：int a; 这是变量的定义。s
//3、以下三种情况除外：
// 1、const 修饰的变量(对象)
// 2、static 修饰的变量（对象）
// 3、内联函数可以在头文件中定义（为什么要制造内联函数呢？）
namespace Utils {

    extern int age;
    extern int address;
    extern int value;

    const int Months = 12;//const 常量修饰的变量，是常量

    string getFileName();//函数的声明不需要 extern 修饰

    inline void getValue() {
        cout << "I am a inline funtion " << endl;
    }
}

#endif //HELLOWORLD_UTILS_H
