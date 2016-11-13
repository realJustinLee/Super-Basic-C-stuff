#ifndef CPP_STUDENT_STUDENT_H
#define CPP_STUDENT_STUDENT_H

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Student {
public:
    Student(char *Id = "00000000", string Name = "NoName", char Gender = 'm', int Age = 20);

    Student(string Id, char *pName = "Null", char Gender = 'f', int Age = 20);

    void Show() const;

private:
    char id[9];
    string name;
    char gender;
    int age;
};

#endif //CPP_STUDENT_STUDENT_H
