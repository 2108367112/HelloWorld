//
// Created by Administrator on 2019/5/6.
//

#include "../hearder/Constants.h"
#include <string>
#include <iostream>

using namespace std;

namespace user {
    string fileName = "/storage/sdcard0/slog/";
    string address = "guanxiyulin";
    int age = 19;

    int getAge() {
        return age;
    }

    string getAddress(){
        return address;
    }
}


int getUserInfor() {
    string name=user::getAddress();
    std::cout << name << std::endl;
    return 500;
}
