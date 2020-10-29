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


using namespace std;


int id = 100;
int *point = &id;

int am = 600;
int &aliaX = am;//引用变量赋值，只能是变量。不能是具体值。
//C++中的字符串(是不是指针？？)
const char *string2 = "hello world";
//用字符数组，表示字符串。
char middleName[] = "林博强";
char *pchar;//这里是否为一个指针变量。


char q[43] = "afdagfadhgasfdhytfg";

int num3 = 66;

void obejectUse(Student *&student, Sun &sun);

//传递指针
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p2 = &num3;
}

#define add(x, y) (x+y)

void printly() {
    //局部变量，不会覆盖全局变量的值。
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

//结构体使用测试
void structUse() {
    MiddleStudent middleStudent;
    middleStudent.name = middleName;
    middleStudent.age = 18;
    middleStudent.address = "深圳宝安区";
    middleStudent.score = 620;
    middleStudent.score = 111;
    //对象创建方式1：使用new 关键字创建对象。对象保持在堆空间。
    middleStudent.getMax();
    cout << "中学生姓名：" << middleStudent.name << endl;
}

namespace A {
    int a = 100;
    namespace B            //嵌套一个命名空间B
    {
        int a = 20;
    }
}

int a = 200;//定义一个全局变量

//信号测试函数

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);

}

int main() {
    //对象使用测试
//    Student *student = nullptr;
//    student = objectUse(student);
//    //对象 函数的调用
//    cout << "学生信息:  " << student->getName() << " 年龄：" << student->getAge() << " 身份证：" << student->getIdNumber()
//         << " 身高：" << student->getHeight() << endl;
//    Sun sun;
//    /*====================================*/
//    //对象创建方式2：直接声明 。对象保持在栈空间
//    Student m;
//    //栈空间中,对象方法的调用。
//    m.setName("linboqiang");
//    //栈空间对象，调用变量
//    cout << "1111" << m.name << endl;
//    //类的静态变量使用
//    int count = Student::count;
//    cout << count << endl;
//    //类的静态函数
//    Student::getMax(sun);
//    auto *student1 = new PostStudent();
//    student1->girlFriendName();
//    std::cout << sizeof(int) << std::endl;
//    /*===============  命名空间的访问测试  ====================*/
//    std::cout << user::fileName << std::endl;
//    std::cout << user::address << std::endl;
//    std::cout << user::age << std::endl;
//    std::cout << user::getAge() << std::endl;
//    getUserInfor();
    /**
     *
     * 我们知道C++中有普通 C++文件 和 class文件。在这两种文件中，会有一些相同的修饰符，但是意义却是不一样。
     * 例如：static
     * 1、在普通的C++文件中，static修饰的方法，表示只能在本文件中使用。
     * 2、而在class文件中，由于类的方法限制是由，public、protect、private来限制。此时，并不再需要使用static修饰词。摇身一变，就成了类方法的修饰词。
     */

    /**
     * 目前所知道的三种访问符：点号、箭头、双冒号
     * 1、点号：栈中创建的对象。在访问变量 或者 方法使用 。
     * 2、箭头：用指针指向的对象，通常该对象时在堆空间中创建。运算符 new
     * 3、双冒号： 双冒号通常代表作用域。而作用域，一般是指 命名空间。
     *
     * 总结：
     *
     * 1、对于普通的C文件 或者 没有作用域 限制的C++文件。直接时调用函数名。根本就不用修饰符。
     * 2、结构体：可以把结构体看成是类，所有的成员都是 public 。因为结构是直接声明，就会有变量。因此，它也是在栈中创建的对象。因此，它们也是使用 点号 来修饰。
     *
     * 3、对于一个类，它把三个符号都用完了。如何确定一个类，该使用何种符号访问呢？？
     * 1、先看是在栈中，还是在堆中。
     * 2、再看是类方法，还是对象方法。
     *
     */
//    cout << *point << endl;
//    aliaX = 50;
//    cout << aliaX << endl;
//    cout << a << endl;
//    cout << string2 << endl;
//    Student student2;//C++中，声明一个对象，会立即创建一个对象
//    string string1 = student2.getName();
//    cout << string1 << endl;
//    cout << getFileName() << endl;
//    int num1 = 15, num2 = 55;
//    int *p1 = &num1, *p2 = &num2;
//    swap2(p1, p2);
//    cout << *p1 << endl;
//    cout << *p2 << endl;
//    cout << "儿子的钱==\n" << sun.getMoney() << endl;
//    printly();
//    cout << a << endl;
//    cout << getFileName() << endl;
//    ofstream outfile;
//    outfile.open("afile.dat");
//    cout <<"A::a ="<< A::a << endl;
//    cout <<"A::B::a ="<<A::B::a << endl;
//    cout <<"a ="<<a << endl;
//    cout <<"::a ="<<::a << endl;
//
//    int a = 30;
//    cout <<"a ="<<a << endl;
//    cout <<"::a ="<<::a << endl;
    // 注册信号 SIGINT 和信号处理程序
//    signal(SIGINT,signalHandler);
//    while(1){
//        cout << "Going to sleep...." << endl;
//        sleep(1);
//    }
    printf("11");
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


//如何理解：* 和 & 声明变量时，理解为一种符号。
