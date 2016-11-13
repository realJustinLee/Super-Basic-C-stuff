#include <iostream>
#include "String.h"

using namespace std;

String s1;

void test1() {
    char str1[80] = {0}, str2[80];
    cout << "Testing strcpy: \n"
         << "Input a string: ";
    cin.getline(str2, 80);
    cout << "in test1()\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n";
    s1.strcpy(str1, str2);
    cout << "Test strcpy\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n"
         << "return form test1()\n";
}

void test2() {
    int n;
    char str1[80], str2[80];
    cout << "Testing strncpy: \n"
         << "Input string 1: ";
    cin.getline(str1, 80);
    cout << "Input string 2: ";
    cin.getline(str2, 80);
    cout << "in test2()\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n"
         << "Enter n: ";
    cin >> n;
    s1.strncpy(str1, str2, n);
    cout << "Test strncpy\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n"
         << "return form test2()\n";
}

void test3() {
    char str[80];
    cout << "Testing strlen: \n"
         << "Input a string: ";
    cin.getline(str, 80);
    cout << "in test3()\n" << "str: \"" << str << "\"\n"
         << "Test strlen\n"
         << "strlen(str)=" << s1.strlen(str)
         << "\nreturn form test3()\n";
}

void test4() {
    char str1[80], str2[80];
    cout << "Testing strcmp: \n"
         << "Input string 1: ";
    cin.getline(str1, 80);
    cout << "Input string 2: ";
    cin.getline(str2, 80);
    cout << "in test4()\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2
         << "\"\nTest strcmp\n"
         << "strcmp(str1,str2)=\"" << s1.strcmp(str1, str2)
         << "\"\nreturn form test4()\n";
}

void test5() {
    char str1[80], str2[80];
    cout << "Testing strcat: \n"
         << "Input string 1: ";
    cin.getline(str1, 80);
    cout << "Input string 2: ";
    cin.getline(str2, 80);
    cout << "in test5()\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n";
    s1.strcat(str1, str2);
    cout << "Test strcat:\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n";
    cout << "return from test5()\n";
}

void test6() {
    int n;
    char str1[80], str2[80];
    cout << "Testing strncat: \n"
         << "Input string 1: ";
    cin.getline(str1, 80);
    cout << "Input string 2: ";
    cin.getline(str2, 80);
    cout << "in test6()\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n"
         << "Enter n: ";
    cin >> n;
    s1.strncat(str1, str2, n);
    cout << "Test strncat:\n"
         << "str1: \"" << str1
         << "\",\tstr2: \"" << str2 << "\"\n";
    cout << "return from test6()\n";
}

void test7() {
    char str[80];
    cout << "Testing strupr: \n"
         << "Input a string: ";
    cin.getline(str, 80);
    cout << "in test7()\n"
         << "str: \"" << str << "\"" << endl;
    cout << "Test strupr\n"
         << "str: \"" << s1.strupr(str) << "\"\n"
         << "return from test7()\n";
}

void test8() {
    char str[80];
    cout << "Testing strlwr: \n"
         << "Input a string: ";
    cin.getline(str, 80);
    cout << "in test8()\n"
         << "str: \"" << str << "\"" << endl;
    cout << "Test strlwr\n"
         << "str: \"" << s1.strlwr(str) << "\"\n"
         << "return from test8()\n";
}

void test9() {
    char str[80];
    cout << "Testing atoi: \n"
         << "Input a float number: ";
    cin.getline(str, 80);
    cout << "in test9()\n"
         << "str: \"" << str << "\"" << endl;
    cout << "Test AtoI\n" << "int =" << s1.atoi(str)
         << "\nreturn from test9()\n";

}

int main() {
    int choice;
    void (*f[])()={test1, test2, test3, test4, test5, test6, test7, test8, test9};
    int n = sizeof(f) / sizeof(*f);
    while (1) {
        cout << "\nC++ String Class. Your choice(1--" << n << ", 0-quit): ";
        cin >> choice;
        cin.get();
        if (choice <= 0) {
            break;
        } else if (choice > n) {
            continue;
        } else {
            f[choice - 1]();
        }
    }
    return 0;
}