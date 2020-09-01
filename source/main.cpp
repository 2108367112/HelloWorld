#include <iostream>
#include "../hearder/Student.h"
#include "../hearder/PostStudent.h"
#include "../hearder/Constants.h"
#include "../hearder/Utils.h"
#include "../hearder/Sun.h"


using namespace std;


int id = 100;
int *point = &id;

int a = 600;
int &aliaX = a;//引用变量赋值，只能是变量。不能是具体值。
//C++中的字符串(是不是指针？？)
const char *string2 = "hello world";
//用字符数组，表示字符串。
char middleName[] = "林博强";
char *pchar;//这里是否为一个指针变量。


char q[43] = "afdagfadhgasfdhytfg";
//结构体
struct MiddleStudent {
    int age;
    char *name;//这里到底是表示，指针变量，还是字符串？？？
    string address;
    float score;

};

int num3 = 66;

//传递指针
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p2 = &num3;
}

int main() {
    MiddleStudent middleStudent;
    middleStudent.name = middleName;
    middleStudent.age = 18;
    middleStudent.address = "深圳宝安区";
    middleStudent.score = 620;
    //对象创建方式1：使用new 关键字创建对象。对象保持在堆空间。
    auto *student = new Student();
    Sun sun;
    Student::getMax(sun);

    cout << "中学生姓名：" << middleStudent.name << endl;
    //对象 函数的调用
    string name = student->getName();
    cout << "name" + name << endl;
    //对象创建方式2：直接声明 。对象保持在栈空间
    Student m;
    //栈空间中,对象方法的调用。
    m.setName("linboqiang");
    //栈空间对象，调用变量
    cout << "1111" << m.name << endl;
    //类的静态变量使用
    int count = Student::count;
    cout << count << endl;
    //类的静态函数
    Student::getMax(sun);
    auto *student1 = new PostStudent();
    student1->girlFriendName();
    std::cout << sizeof(int) << std::endl;
    std::cout << user::fileName << std::endl;
    std::cout << user::address << std::endl;
    std::cout << user::age << std::endl;
    std::cout << user::getAge() << std::endl;
    getUserInfor();
    cout << *point << endl;
    aliaX = 50;
    cout << aliaX << endl;
    cout << a << endl;
    cout << string2 << endl;
    Student student2;//C++中，声明一个对象，会立即创建一个对象
    string string1 = student2.getName();
    cout << string1 << endl;
    cout << getFileName() << endl;
    int num1 = 15, num2 = 55;
    int *p1 = &num1, *p2 = &num2;
    swap2(p1, p2);
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << "数据的长度= " << sizeof(int) << endl;

    cout << "儿子的钱==\n" << sun.getMoney() << endl;
    return 0;
}
/**
 *  面向对象编程思想：
 *
 *  1、首先开发这个软件需要的对象，然后将这些对象有机的组合起来，就构成了我们需要的软件。
 *
 *  软件——》由一系列的对象构成。
 *
 * 对象？
 * 自然界中一切的事物都可以看成——对象。
 *
 * 我们通过研究对象的 属性 和行为 来认识对象。
 *
 *
 *  属性：对象的静态特点。
 *  行为：对象的功能或动作。
 */
//
/**
 * C 语言是——面向过程的程序设计思想：
 *
 *  预先根据任务的处理流程设计好一系列的函数。
 */
