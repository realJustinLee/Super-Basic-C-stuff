//由GBK编码

//Encoded with GBK

#include <stdio.h>
#include <conio.h>
#include "declare.h"

void test1() {
    int i;
    char str[12][8] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                       "side"};
    printf("\n在测试 1 中:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //调用函数sort1_1
    sort1_1(str, 12);
    printf("\n排列后得:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n退出测试 1 返回主函数\n");
}

void test2() {
    int i;
    char str[12][8] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                       "side"};
    printf("\n在测试 2 中:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //调用函数sort1_2
    sort1_2(str, 12);
    printf("\n排列后得:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n退出测试 2 返回主函数\n");
}

void test3() {
    int i;
    char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                     "side"};
    printf("\n在测试 3 中:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //调用函数sort2_1
    sort2_1(str, 12);
    printf("\n排列后得:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n退出测试 3 返回主函数\n");
}

void test4() {
    int i;
    char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                     "side"};
    printf("\n在测试 4 中:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //调用函数sort2_2
    sort2_2(str);
    printf("\n排列后得:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n退出测试 4 返回主函数\n");
}

int main(void) {
    int choice;
    void (*f[])() = {test1, test2, test3, test4};
    int n = sizeof(f) / sizeof(*f);
    while (1) {
        printf("\nC-字符串数组排序函数设计测试(1--%d, 0-退出): ", n);
        choice = getche() - '0';
        printf("\n");

        if (choice <= 0)
            break;
        else if (choice > n)
            continue;
        else
            f[choice - 1]();
    }
    return 0;
}
