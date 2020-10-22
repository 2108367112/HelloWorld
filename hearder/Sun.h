//
// Created by Administrator on 2020/9/1.
//

#ifndef HELLOWORLD_SUN_H
#define HELLOWORLD_SUN_H

#include <iostream>
#include "Parent.h"
#include "Teacher.h"

using namespace std;

class Sun : public Parent, public Teacher {
private:
    int id;
    int age;
protected:
    std::string address;
public:
    int getMoney() override {
        int count = Parent::getMoney();
        return 1015;
    }

};


#endif //HELLOWORLD_SUN_H
