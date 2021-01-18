//
// Created by Administrator on 2019/4/29.
//

#include "Student.h"

using namespace std;

#ifndef HELLOWORLD_POSTSTUDENT_H
#define HELLOWORLD_POSTSTUDENT_H

//C++继承 方式： class 类名 ：[继承方式] 父类名词{}
//继承方式 有三种：public 、protected 、private 。
class PostStudent : public Student {

public:
    string topic;

    virtual void girlFriendName();
    virtual void girlFriendName(string name){

    };

protected:
    string girlFrend;
private:
    int age;
};

#endif //HELLOWORLD_POSTSTUDENT_H
