//
// Created by Administrator on 2021/1/15.
//

#ifndef HELLOWORLD_DOG_H
#define HELLOWORLD_DOG_H

#include "iostream"

using namespace std;

class Dog {
public:
    void getName() {
        cout << typeid(this).name() << " " << this << endl;
    }

};


#endif //HELLOWORLD_DOG_H
