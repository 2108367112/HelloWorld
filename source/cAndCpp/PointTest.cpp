//
// Created by Administrator on 2020/12/14.
//


#include <stdio.h>
#include <process.h>
#include "../../hearder/PointTest.h"
#include "string.h"

// ps 字符串指针，是指针，是一个变量
//顺序是：1.分配内存给字符指针；2.分配内存给字符串；3.将字符串首地址赋值给字符指针；
char *ps;

/**
 * 字符串在C 和 C++ 中的 声明和定义
 *
 */

/**
 * 建议：指针 指向字符串的时候，要独立对待
 * 指针 指向一个字符串。
 */
void charStringTest() {
    char *a = "bcd";
    char name[] = "C Language";
    ps = name;
    printf("输出字符：%c \n", *a);  /*输出字符，使用"%c"*/
    printf("输出字符：%c \n", *(a + 1));  /*输出字符，使用"%c"*/
    printf("输出字符串：%s \n", a); /*输出字符串，使用"%s"；而且a之前不能有星号"*"   结果：会输出整个字符串 */
    printf("输出字符串：%s \n", ps); /*输出字符串，使用"%s"；而且a之前不能有星号"*"   结果：会输出整个字符串 */
    printf("输出字符：%zu \n", strlen(name));
//    system("pause");  /*为了能看到输出结果*/
}


