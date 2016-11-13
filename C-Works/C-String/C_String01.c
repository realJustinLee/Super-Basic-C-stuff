// C_String01.c		此文件中需要补充4个函数的定义（即函数实现）
#include <stdlib.h>
#include <string.h>
// 函数 SWAP1，SWAP2，SWAP3，STRCAT的定义

// SWAP1
void SWAP1(char str1[], char str2[]) {
    char tmp[10];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
}

// SWAP2
void SWAP2(char **p_1, char **p_2) {
    char *tmp;
    tmp = *p_1;
    *p_1 = *p_2;
    *p_2 = tmp;
}

// SWAP3
void SWAP3(char **p_1, char **p_2) {
    char *tmp;
    tmp = *p_1;
    *p_1 = *p_2;
    *p_2 = tmp;
}

// STRCAT
char *STRCAT(char *dest, const char *src) {
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0');

    return tmp;
}

