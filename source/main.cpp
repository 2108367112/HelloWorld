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
int &aliaX = a;//���ñ�����ֵ��ֻ���Ǳ����������Ǿ���ֵ��
//C++�е��ַ���(�ǲ���ָ�룿��)
const char *string2 = "hello world";
//���ַ����飬��ʾ�ַ�����
char middleName[] = "�ֲ�ǿ";
char *pchar;//�����Ƿ�Ϊһ��ָ�������


char q[43] = "afdagfadhgasfdhytfg";
//�ṹ��
struct MiddleStudent {
    int age;
    char *name;//���ﵽ���Ǳ�ʾ��ָ������������ַ���������
    string address;
    float score;

};

int num3 = 66;

//����ָ��
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
    middleStudent.address = "���ڱ�����";
    middleStudent.score = 620;
    //���󴴽���ʽ1��ʹ��new �ؼ��ִ������󡣶��󱣳��ڶѿռ䡣
    auto *student = new Student();
    Sun sun;
    Student::getMax(sun);

    cout << "��ѧ��������" << middleStudent.name << endl;
    //���� �����ĵ���
    string name = student->getName();
    cout << "name" + name << endl;
    //���󴴽���ʽ2��ֱ������ �����󱣳���ջ�ռ�
    Student m;
    //ջ�ռ���,���󷽷��ĵ��á�
    m.setName("linboqiang");
    //ջ�ռ���󣬵��ñ���
    cout << "1111" << m.name << endl;
    //��ľ�̬����ʹ��
    int count = Student::count;
    cout << count << endl;
    //��ľ�̬����
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
    Student student2;//C++�У�����һ�����󣬻���������һ������
    string string1 = student2.getName();
    cout << string1 << endl;
    cout << getFileName() << endl;
    int num1 = 15, num2 = 55;
    int *p1 = &num1, *p2 = &num2;
    swap2(p1, p2);
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << "���ݵĳ���= " << sizeof(int) << endl;

    cout << "���ӵ�Ǯ==\n" << sun.getMoney() << endl;
    return 0;
}
/**
 *  ���������˼�룺
 *
 *  1�����ȿ�����������Ҫ�Ķ���Ȼ����Щ�����л�������������͹�����������Ҫ�������
 *
 *  �����������һϵ�еĶ��󹹳ɡ�
 *
 * ����
 * ��Ȼ����һ�е����ﶼ���Կ��ɡ�������
 *
 * ����ͨ���о������ ���� ����Ϊ ����ʶ����
 *
 *
 *  ���ԣ�����ľ�̬�ص㡣
 *  ��Ϊ������Ĺ��ܻ�����
 */
//
/**
 * C �����ǡ���������̵ĳ������˼�룺
 *
 *  Ԥ�ȸ�������Ĵ���������ƺ�һϵ�еĺ�����
 */
