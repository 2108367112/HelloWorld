#include <iostream>
#include "../hearder/Student.h"
#include "../hearder/PostStudent.h"
#include "../hearder/Constants.h"
#include "../hearder/Utils.h"
#include "../hearder/Sun.h"
#include "../hearder/MiddleStudent.h"
#include <limits>
#include <fstream>
#include <exception>
#include "stdio.h"
#include "../hearder/PointTest.h"

using namespace std;


int id = 100;
int *point = &id;

int am = 600;
int &aliaX = am;//引用变量赋�?�，只能是变量�?�不能是具体值�??
//C++中的字符�?(是不是指针？�?)
const char *string2 = "hello world";
//用字符数组，表示字符串�??
char middleName[] = "林博�?";
char *pchar;//这里是否为一个指针变量�??


char q[43] = "afdagfadhgasfdhytfg";

int num3 = 66;

void obejectUse(Student *&student, Sun &sun);

//传�?�指�?
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p2 = &num3;
}

#define add(x, y) (x+y)

void printly() {
    int a = 0;
    cout << a << endl;
}

//类的使用测试
Student *objectUse(Student *student) {
    student = new Student();
    student->setName("linboqiang");
    student->setAge(36);
    student->setIdNumber(123456);
    student->setHeight(1.60);
    return student;
}

//结构体使用测�?
void structUse() {
    MiddleStudent middleStudent;
    middleStudent.name = middleName;
    middleStudent.age = 18;
    middleStudent.address = "guangxi yulin";
    middleStudent.score = 620;
    middleStudent.score = 111;
    middleStudent.getMax();
    cout << "中学生姓名：" << middleStudent.name << endl;
}

namespace A {
    int a = 100;
    namespace B            //嵌套�?个命名空间B
    {
        int a = 20;
    }
}

int a = 200;


void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);

}

int main() {
    charStringTest();
    return 0;
}

