//
// Created by Administrator on 2020/12/14.
//


#include <stdio.h>
#include <process.h>
#include "../../hearder/PointTest.h"
#include "string.h"

// ps �ַ���ָ�룬��ָ�룬��һ������
//˳���ǣ�1.�����ڴ���ַ�ָ�룻2.�����ڴ���ַ�����3.���ַ����׵�ַ��ֵ���ַ�ָ�룻
char *ps;

/**
 * �ַ�����C �� C++ �е� �����Ͷ���
 *
 */

/**
 * ���飺ָ�� ָ���ַ�����ʱ��Ҫ�����Դ�
 * ָ�� ָ��һ���ַ�����
 */
void charStringTest() {
    char *a = "bcd";
    char name[] = "C Language";
    ps = name;
    printf("����ַ���%c \n", *a);  /*����ַ���ʹ��"%c"*/
    printf("����ַ���%c \n", *(a + 1));  /*����ַ���ʹ��"%c"*/
    printf("����ַ�����%s \n", a); /*����ַ�����ʹ��"%s"������a֮ǰ�������Ǻ�"*"   ���������������ַ��� */
    printf("����ַ�����%s \n", ps); /*����ַ�����ʹ��"%s"������a֮ǰ�������Ǻ�"*"   ���������������ַ��� */
    printf("����ַ���%zu \n", strlen(name));
//    system("pause");  /*Ϊ���ܿ���������*/
}


