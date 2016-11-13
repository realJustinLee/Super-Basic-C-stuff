#ifndef CPP_STRING_STRING_H
#define CPP_STRING_STRING_H

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class String {
public:
    void strcpy(char *str1, char *str2);

    void strncpy(char *str1, char *str2, int n);

    int strlen(char *str1);

    int strcmp(char *str1, char *str2);

    void strcat(char *str1, char *str2);

    void strncat(char *str1, char *str2, int n);

    char *strupr(char *str1);

    char *strlwr(char *str1);

    int atoi(char *str1);

private:
    char *Str1;
    char *Str2;
    int num;
};


#endif //CPP_STRING_STRING_H
