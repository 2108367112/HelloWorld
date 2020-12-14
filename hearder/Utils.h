//
// Created by Administrator on 2020/8/16.
//

#ifndef HELLOWORLD_UTILS_H
#define HELLOWORLD_UTILS_H

#include "istream"
#include <iostream>
#include <csignal>
//#include <zconf.h>
#include <unistd.h>

using namespace std;

extern int age;

//常量的声明和定义（定义的另一种称呼是：初始化）

const int Months=12;


string getFileName();

#endif //HELLOWORLD_UTILS_H
