//
// Created by Administrator on 2019/4/28.
//

#ifndef HELLOWORLD_STUDENT_H
#define HELLOWORLD_STUDENT_H

#include <string>
#include "Sun.h"

using namespace std;

class Student {
private:
    int idNumber;//身份证号码
public:
    int age;
    float height;
    //类的成员变量——>属于对象的
    string name = "wumingshi";

    //构造函数——>用于创建对象
    Student();

    //构造函数——>带参数的构造函数
    Student(int id, std::string name);

    //析构函数的声明——>析构函数是在对象的生命周期快结束的时候，由系统自动调用
    ~Student();

    //声明——类的静态成员变量  static 和 const 的区别？const 不会修改对象。
    static int count;

    //声明 类的静态成员函数 。在实现的时候，可以不用写static 了。但最好写上。
    static void getMax(Sun &);

    //类的成员函数——>属于类的，整个程序只有一份函数。
    string getName();

    int getIdNumber() const;

    void setIdNumber(int idNumber);

    int getAge() const;

    void setAge(int age);

    float getHeight() const;

    void setHeight(float height);

    void setName(std::string name);

    //虚函数——用于多态。表示：子类可以重写该方法。但子类的头文件也要声明该函数，不用带 virtual 关键字了。
    virtual void girlFriendName();

    //纯虚函数
    virtual void girlFriendName(string name) = 0;

    int idd;

    //在类的内部定义实现，属于内联函数
    int getScore() {
        cout << "get student score : 90 fen   " << endl;
        cout<<typeid(this).name()<<endl;
        return 90;
    }
};

#endif //HELLOWORLD_STUDENT_H

