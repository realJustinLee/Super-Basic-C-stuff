#include "String.h"

void String::strcpy(char *str1, char *str2) {
    Str1 = str1;
    Str2 = str2;
    while ((*Str1++ = *Str2++));
    str1 = Str1;
}

void String::strncpy(char *str1, char *str2, int n) {
    Str1 = str1;
    Str2 = str2;
    num = n;
    while (num) {
        *Str1++ = *Str2++;
        num--;
    }
    str1 = Str1;
}

int String::strlen(char *str1) {
    Str1 = str1;
    num = 0;
    while (Str1[num] != 0) {
        num++;
    }
    return num;
}

int String::strcmp(char *str1, char *str2) {
    Str1 = str1;
    Str2 = str2;
    int l = 0, i;
    num = 0;
    l = (strlen(Str1) > strlen(Str2)) ? strlen(Str1) : strlen(Str2);
    for (i = 0; i < l; i++) {
        num = num + *Str1 - *Str2;
    }
    return num;
}


void String::strcat(char *str1, char *str2) {
    Str1 = str1;
    Str2 = str2;
    while (*Str1 != 0) {
        Str1++;
    }
    while (*Str2) {
        *Str1++ = *Str2++;
    }
    *Str1 = 0;
    str1 = Str1;
}

void String::strncat(char *str1, char *str2, int n) {
    Str1 = str1;
    Str2 = str2;
    num = n;
    while (*Str1 != 0) {
        Str1++;
    }
    while (num && *Str2) {
        *Str1++ = *Str2++;
        num--;
    }
    *Str1 = 0;
    str1 = Str1;
}

char *String::strupr(char *str1) {
    Str1 = str1;
    while (*Str1 != 0) {
        if ((*Str1 >= 'a') && (*Str1 <= 'z')) {
            *Str1 -= 0x20;
        }
        Str1++;
    }
    return str1;
}

char *String::strlwr(char *str1) {
    Str1 = str1;
    while (*Str1 != 0) {
        if ((*Str1 >= 'A') && (*Str1 <= 'Z')) {
            *Str1 += 0x20;
        }
        Str1++;
    }
    return str1;
}

int String::atoi(char *str1) {
    Str1 = str1;
    num = 0;
    while ((*Str1 >= '0') && (*Str1 <= '9')) {
        num = 10 * num + *Str1 - '0';
        Str1++;
    }
    return num;
}