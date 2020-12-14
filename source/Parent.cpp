//
// Created by Administrator on 2020/9/1.
//

#include "../hearder/Parent.h"
#include "iostream"

using namespace std;

int Parent::getMoney() {
    cout << "父类调用" << endl;
    return 1000;
}
