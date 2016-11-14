#include "Student.h"

int Student::num = 0;
string Student::monitor = "NULL";
string Student::tutor = "HZZ";

Student::Student(string Id, string Name) : id(Id), name(Name) {
    cout << "New Classmate " << name << " (" << ++num << ")" << endl;
}

Student::Student(const Student &s) : id(s.id), name(s.name) {
    cout << "New Classmate " << name << " (" << ++num << ")" << endl;
}

Student::~Student() {
    cout << "Removing a Classmate " << name << " (" << --num << ")" << endl;
}

void Student::Show() const {
    cout << "ID: " << id << "\t name: " << name << endl;
}

int Student::GetNum() { return num; }

string Student::GetMonitor() { return monitor; }

string Student::GetTutor() { return tutor; }

void Student::SetMonitor(string Monitor) {
    monitor = Monitor;
}

void Student::SetTutor(string Tutor) {
    tutor = Tutor;
}