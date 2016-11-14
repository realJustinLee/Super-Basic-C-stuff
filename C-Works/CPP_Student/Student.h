#ifndef CPP_STUDENT_STUDENT_H
#define CPP_STUDENT_STUDENT_H

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Student {
public:
    Student(string Id, string Name);

    Student(const Student &s);

    ~Student();

    void Show() const;

    static int GetNum();

    static string GetMonitor();

    static string GetTutor();

    static void SetMonitor(string Monitor);

    static void SetTutor(string Tutor);

private:
    string id, name;
    static string monitor, tutor;
    static int num;
};

#endif //CPP_STUDENT_STUDENT_H
