#include <iostream>
#include "Student.h"

using namespace std;

void Display() {
    cout << "Total Student(s): " << Student::GetNum()
         << " Monitor: " << Student::GetMonitor()
         << " Tutor: " << Student::GetTutor() << endl;
}

void f(Student s, Student *p, Student &r) {
    cout << "In f() ..." << endl;
    static Student Li("004", "Li");
    Student x("005", "Xiao");
    cout << "return from f() ..." << endl;
}

int main() {
    Display();
    Student Zhao("001", "Zhao"), Qian("002", "Qian");
    Student *p = new Student("003", "Sun");
    Student::SetMonitor("Qian");
    cout << "Begin f() ..." << endl;
    f(Zhao, &Qian, *p);
    cout << "End of f() ..." << endl;
    p->Show();
    delete p;
    Zhao.SetTutor("Huang Zhenzhen");
    Zhao.Show();
    Display();
    cout << "Return to Opeating System" << endl;
    return 0;
}