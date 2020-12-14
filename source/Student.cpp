//
// Created by Administrator on 2019/4/28.
//

#include "../hearder/Student.h"
#include <iostream>
#include "../hearder/Constants.h"
#include "../hearder/Utils.h"

using namespace std;

Student::Student() {
    count++;
}

Student::~Student() {
    //资源回收
}

Student::Student(int id, string name) {
    this->name = name;
}

void Student::getMax(Sun &) {
    cout << "11111" << endl;
    cout << Months << endl;
}

string Student::getName() {
    return this->name;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::girlFriendName() {
    cout << "gao zhong sheng" << endl;
    cout << "a====" + user::fileName << endl;
}

int Student::count = 0;

int Student::getIdNumber() const {
    return idNumber;
}

void Student::setIdNumber(int idNumber) {
    Student::idNumber = idNumber;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

float Student::getHeight() const {
    return height;
}

void Student::setHeight(float height) {
    Student::height = height;
}
/**
 * 1、构造方法没有返回值。与 Java 构造方法 一样。
 * 2、函数的实现，必须带 返回值 声明。 与Java 的一样。
 *
 * 3、访问修饰符？属性的访问修饰符？方法访问修饰符？
 * 4、静态变量？ 静态方法？ 对象属性  对象方法 的访问方式。
 *
 * C++ 进程 是不是单独一个内存？内存模型是怎么样的？
 *
 * C++ 中也有栈空间 和 堆空间。对象在栈空间 和 堆空间的创建。
 * 在栈空间创建，直接声明，就可以使用，并不需要new
 * 而在堆空间创建，则必须要new 的方式创建对象。而且 要手动回收。
 *
 */
