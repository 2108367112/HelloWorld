//
// Created by Administrator on 2019/4/28.
//

#ifndef HELLOWORLD_STUDENT_H
#define HELLOWORLD_STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    int id;
protected:
    int a;
public:
    //构造函数——>用于创建对象
    Student();

    //构造函数——>带参数的构造函数
    Student(int id, std::string name);

    //析构函数的声明——>析构函数是在对象的生命周期快结束的时候，由系统自动调用
    ~Student();

    //类的成员变量——>属于对象的
    string name = "xiaolizi";

    //声明——类的静态成员变量  static 和 const 的区别？const 不会修改对象。
    static int count;

    //声明 类的静态成员函数 。在实现的时候，可以不用写static 了。但最好写上。
    static void getMax();

    //类的成员函数——>属于类的，整个程序只有一份函数。
    string getName();

    void setName(std::string name);

    //虚函数——用于多态。表示：子类可以重写该方法。但子类的头文件也要声明该函数，不用带 virtual 关键字了。
    virtual void girlFriendName();
};

#endif //HELLOWORLD_STUDENT_H

