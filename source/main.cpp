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
#include <cstdio>
#include <Dog.h>

using namespace std;


int id = 100;
int *point = &id;

int am = 600;
int &aliaX = am;//寮曠敤鍙橀噺璧嬪?硷紝鍙兘鏄彉閲忋?備笉鑳芥槸鍏蜂綋鍊笺??
//C++涓殑瀛楃涓?(鏄笉鏄寚閽堬紵锛?)
const char *string2 = "hello world";
//鐢ㄥ瓧绗︽暟缁勶紝琛ㄧず瀛楃涓层??
char middleName[] = "鏋楀崥寮?";
char *pchar;//杩欓噷鏄惁涓轰竴涓寚閽堝彉閲忋??



char q[43] = "afdagfadhgasfdhytfg";

int num3 = 66;

void obejectUse(Student *&student, Sun &sun);

//浼犻?掓寚閽?
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


Student *objectUse(Student *student) {
    student = new PostStudent();
    student->setName("linboqiang");
    student->setAge(36);
    student->setIdNumber(123456);
    student->setHeight(1.60);
    return student;
}


void structUse() {
    MiddleStudent middleStudent;
    middleStudent.name = middleName;
    middleStudent.age = 18;
    middleStudent.address = "guangxi yulin";
    middleStudent.score = 620;
    middleStudent.score = 111;
    middleStudent.getMax();

    cout << "student name is : " << middleStudent.name << endl;
}

namespace A {
    int a = 100;

    namespace B            //命名空间可以嵌套
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
    int a = 111;
    int &a1 = a;
    cout << &a << " " << &a1 << "hello" << 100 << 'A' << endl;
    PostStudent student;
    Student &mm = student;
    char name[10];
//    student.girlFriendName();
    mm.girlFriendName();
    mm.name;
    mm.getScore();
    printf("printf funtion use : %s\n", "linboqiang ============ ");
    cout << Utils::Months << endl;
    Utils::getValue();
//    scanf("%s", name);
    cout << name << endl;
    auto *student1 = new PostStudent();
    student1->getScore();
    student1->name = "linboqiang";
    cout << student1->name << endl;
    Dog dog;
    dog.getName();
    return 0;
}

