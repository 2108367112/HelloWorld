//
// Created by Administrator on 2019/5/6.
//头文件里声明需要公开的变量，函数或者类  注：只有公开的才要求写在头文件，或者命名空间里面。
//


#ifndef HELLOWORLD_CONSTANTS_H
#define HELLOWORLD_CONSTANTS_H

#include <string>

using namespace std;
//1、声明一个全局变量，通常它的定义者，是在同名的cpp 文件。2、使用者只需要include 当前的头文件即可使用。
//2、不可以在头文件中直接初始化变量。

//在头文件中，使用命名空间
namespace user {
    extern string fileName;
    extern string address;
    extern int age;

    int getAge();
}

//命名空间 和 头文件有什么区别呢？

//似乎并不需要使用 extern 声明
int getUserInfor();

#endif //HELLOWORLD_CONSTANTS_H
