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
int &aliaX = am;//���ñ�����ֵ��ֻ���Ǳ����������Ǿ���ֵ��
//C++�е��ַ���(�ǲ���ָ�룿��)
const char *string2 = "hello world";
//���ַ����飬��ʾ�ַ�����
char middleName[] = "�ֲ�ǿ";
char *pchar;//�����Ƿ�Ϊһ��ָ�������


char q[43] = "afdagfadhgasfdhytfg";

int num3 = 66;

void obejectUse(Student *&student, Sun &sun);

//����ָ��
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p2 = &num3;
}

#define add(x, y) (x+y)

void printly() {
    //�ֲ����������Ḳ��ȫ�ֱ�����ֵ��
    int a = 0;
    cout << a << endl;
}

//���ʹ�ò���
Student *objectUse(Student *student) {
    student = new Student();
    student->setName("linboqiang");
    student->setAge(36);
    student->setIdNumber(123456);
    student->setHeight(1.60);
    return student;
}

//�ṹ��ʹ�ò���
void structUse() {
    MiddleStudent middleStudent;
    middleStudent.name = middleName;
    middleStudent.age = 18;
    middleStudent.address = "���ڱ�����";
    middleStudent.score = 620;
    middleStudent.score = 111;
    //���󴴽���ʽ1��ʹ��new �ؼ��ִ������󡣶��󱣳��ڶѿռ䡣
    middleStudent.getMax();
    cout << "��ѧ��������" << middleStudent.name << endl;
}

namespace A {
    int a = 100;
    namespace B            //Ƕ��һ�������ռ�B
    {
        int a = 20;
    }
}

int a = 200;//����һ��ȫ�ֱ���

//�źŲ��Ժ���

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // �����ر�
    // ��ֹ����

    exit(signum);

}

int main() {
    //����ʹ�ò���
//    Student *student = nullptr;
//    student = objectUse(student);
//    //���� �����ĵ���
//    cout << "ѧ����Ϣ:  " << student->getName() << " ���䣺" << student->getAge() << " ���֤��" << student->getIdNumber()
//         << " ��ߣ�" << student->getHeight() << endl;
//    Sun sun;
//    /*====================================*/
//    //���󴴽���ʽ2��ֱ������ �����󱣳���ջ�ռ�
//    Student m;
//    //ջ�ռ���,���󷽷��ĵ��á�
//    m.setName("linboqiang");
//    //ջ�ռ���󣬵��ñ���
//    cout << "1111" << m.name << endl;
//    //��ľ�̬����ʹ��
//    int count = Student::count;
//    cout << count << endl;
//    //��ľ�̬����
//    Student::getMax(sun);
//    auto *student1 = new PostStudent();
//    student1->girlFriendName();
//    std::cout << sizeof(int) << std::endl;
//    /*===============  �����ռ�ķ��ʲ���  ====================*/
//    std::cout << user::fileName << std::endl;
//    std::cout << user::address << std::endl;
//    std::cout << user::age << std::endl;
//    std::cout << user::getAge() << std::endl;
//    getUserInfor();
    /**
     *
     * ����֪��C++������ͨ C++�ļ� �� class�ļ������������ļ��У�����һЩ��ͬ�����η�����������ȴ�ǲ�һ����
     * ���磺static
     * 1������ͨ��C++�ļ��У�static���εķ�������ʾֻ���ڱ��ļ���ʹ�á�
     * 2������class�ļ��У�������ķ����������ɣ�public��protect��private�����ơ���ʱ����������Ҫʹ��static���δʡ�ҡ��һ�䣬�ͳ����෽�������δʡ�
     */

    /**
     * Ŀǰ��֪�������ַ��ʷ�����š���ͷ��˫ð��
     * 1����ţ�ջ�д����Ķ����ڷ��ʱ��� ���� ����ʹ�� ��
     * 2����ͷ����ָ��ָ��Ķ���ͨ���ö���ʱ�ڶѿռ��д���������� new
     * 3��˫ð�ţ� ˫ð��ͨ�����������򡣶�������һ����ָ �����ռ䡣
     *
     * �ܽ᣺
     *
     * 1��������ͨ��C�ļ� ���� û�������� ���Ƶ�C++�ļ���ֱ��ʱ���ú������������Ͳ������η���
     * 2���ṹ�壺���԰ѽṹ�忴�����࣬���еĳ�Ա���� public ����Ϊ�ṹ��ֱ���������ͻ��б�������ˣ���Ҳ����ջ�д����Ķ�����ˣ�����Ҳ��ʹ�� ��� �����Ρ�
     *
     * 3������һ���࣬�����������Ŷ������ˡ����ȷ��һ���࣬��ʹ�ú��ַ��ŷ����أ���
     * 1���ȿ�����ջ�У������ڶ��С�
     * 2���ٿ����෽�������Ƕ��󷽷���
     *
     */
//    cout << *point << endl;
//    aliaX = 50;
//    cout << aliaX << endl;
//    cout << a << endl;
//    cout << string2 << endl;
//    Student student2;//C++�У�����һ�����󣬻���������һ������
//    string string1 = student2.getName();
//    cout << string1 << endl;
//    cout << getFileName() << endl;
//    int num1 = 15, num2 = 55;
//    int *p1 = &num1, *p2 = &num2;
//    swap2(p1, p2);
//    cout << *p1 << endl;
//    cout << *p2 << endl;
//    cout << "���ӵ�Ǯ==\n" << sun.getMoney() << endl;
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
    // ע���ź� SIGINT ���źŴ������
//    signal(SIGINT,signalHandler);
//    while(1){
//        cout << "Going to sleep...." << endl;
//        sleep(1);
//    }
    printf("11");
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


//�����⣺* �� & ��������ʱ�����Ϊһ�ַ��š�
