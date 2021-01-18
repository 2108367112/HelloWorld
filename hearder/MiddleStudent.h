//
// Created by Administrator on 2020/10/8.
//

#ifndef HELLOWORLD_MIDDLESTUDENT_H
#define HELLOWORLD_MIDDLESTUDENT_H

#include <iostream>

using namespace std;

//结构体
struct MiddleStudent {
    int age;
    char *name;//这里到底是表示，指针变量，还是字符串？？？
    string address;
    float score;

    int getMax() {
        cout << "测试专用" << endl;
        return 0;
    }
};


#endif //HELLOWORLD_MIDDLESTUDENT_H
