//由GBK编码

//Encoded with GBK

#include <stdio.h>			// for printf()
#include <stdlib.h>			// for calloc(), free()
#include <string.h>			// for strcpy() in test5()&&test6()
#include <conio.h>			// for getche()
#include "declare.h"		// for 自定义的函数

// 调用函数 StrCpy，StrNCpy, StrLen，StrCmp，StrCat, StrNCat, StrUpr, StrLwr

void test1() {
    char str1[80] = {0}, str2[80] = "Hello, World!";
    printf("in test1()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
// (1) 调用函数 StrCpy
    StrCpy(str1, str2);
    printf("Test StrCpy\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
    printf("return from test1()\n");
}

void test2() {
    int n;
    char str1[80] = "//Build 2016/", str2[80] = "/*Hello, World!/";
    printf("in test2()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
// (2) 调用函数 StrNCpy
    printf("Enter n: ");
    scanf("%d", &n);
    StrNCpy(str1, str2, n);
    printf("Test StrNCpy\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
    printf("return from test2()\n");
}

void test3() {
    char *str = "Hello, World!";
    printf("in test3()\n");
    printf("str: \"%s\"\n", str);
    printf("Test StrLen\n");
// (4) 调用函数 StrLen
    printf("StrLen(Str)=%d\n", StrLen(str));
    printf("return from test3()\n");
}

void test4() {
    char *str1 = "Tom", *str2 = "Jerry", *str3 = "Jerry", *str4 = "Tom & Jerry";
    printf("in test4()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
// (4) 调用函数 StrCmp
    printf("Test StrCmp\n");
    printf("StrCmp(str1,str2)=\"%d\"\tStrCmp(str2,str3)=\"%d\"\t StrCmp(str2,str3)=\"%d\"\n", StrCmp(str1, str2),
           StrCmp(str2, str3), StrCmp(str3, str4));
    printf("return from test4()\n");
}

void test5() {
    char *str1, *str2;
    str1 = (char *) calloc(14, sizeof(char));
    str2 = (char *) calloc(8, sizeof(char));
    strcpy(str1, "Hello, ");
    strcpy(str2, "World!");
    printf("in test5()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
// (5) 调用函数 StrCat 连接两个字符串
    str1 = StrCat(str1, str2);
    printf("Test StrCat\n");
    printf("str1: \"%s\"\n", str1);
    if (str1 != NULL) free(str1);
    if (str2 != NULL) free(str2);
    printf("return from test5()\n");
}

void test6() {
    int n;
    char *str1, *str2;
    str1 = (char *) calloc(14, sizeof(char));
    str2 = (char *) calloc(7, sizeof(char));
    strcpy(str1, "Hello, ");
    strcpy(str2, "World!");
    printf("in test6()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2);
// (6) 调用函数 StrNCat 连接两个字符串
    printf("Enter n: ");
    scanf("%d", &n);
    StrNCat(str1, str2, n);
    printf("Test StrNCat\n");
    printf("str1: \"%s\"\n", str1);
    if (str1 != NULL) free(str1);
    if (str2 != NULL) free(str2);
    printf("return from test6()\n");
}

void test7() {
    char str[] = "Hello, World!";
    printf("in test7()\n");
    printf("str: \"%s\"\n", str);
    printf("Test StrUpr\n");
// (7) 调用函数 StrUpr
    printf("str: \"%s\"\n", StrUpr(str));
    printf("return from test7()\n");
}

void test8() {
    char str[] = "Hello, World!";
    printf("in test8()\n");
    printf("str: \"%s\"\n", str);
    printf("Test StrLwr\n");
// (8) 调用函数 StrLwr
    printf("str: \"%s\"\n", StrLwr(str));
    printf("return from test8()\n");
}

void test9() {
    char *str = "123456.78";
    printf("in test9()\n");
    printf("str: \"%s\"\n", str);
    printf("Test AtoI\n");
// (9) 调用函数 AtoI
    printf("int = %d\n", AtoI(str));
    printf("return from test9()\n");
}

int main() {
    int choice;
    void (*f[])() = {test1, test2, test3, test4, test5, test6, test7, test8, test9};

    while (1) {
        printf("\nC-String test. Your choice(1--8, 0-quit): ");
        choice = getche() - '0';
        printf("\n");

        if (choice <= 0)
            break;
        else if (choice > 9)
            continue;
        else
            f[choice - 1]();
    }
    return 0;
}