#include <iostream>
#include <cstring>
#include "main_class.h"

using namespace std;

//void print(const Time &t, const Time *p) {
//    t.Show();
//    p->Show();
//}

class ArrayName {
public:
    ArrayName(const char *pName = "NoName") {
        strncpy(name, pName, sizeof(name));
        name[sizeof(name) - 1] = '\0';
        cout << "Constructing an object of Array name ["
             << name << "]." << endl;
    }

    ArrayName(const ArrayName &an) {
        strcpy(name, an.name);
        cout << "COPY Constructing an object of Array name ["
             << name << "]." << endl;
    }

    ~ArrayName() {
        cout << "Destructing an object of Array name ["
             << name << "]." << endl;
    }

    void ChangeName(const char *pName) {
        cout << "Change ArrayName [" << name;
        strncpy(name, pName, sizeof(name));
        name[sizeof(name) - 1] = '\0';
        cout << "]-[" << name << "]." << endl;
    }

    void Show() const {
        cout << "ArrayName: [" << name << "]." << endl;
    }

private:
    char name[10];
};

ArrayName fAN(ArrayName x, ArrayName *p, ArrayName &r) {
    cout << "In fAN() ..." << endl;
    x.ChangeName("Architecture");
    p->ChangeName("Software");
    r.ChangeName("Application");
    x.Show();
    p->Show();
    r.Show();
    cout << "Return form fAN() ..." << endl;
    return x;
}

int main() {
//    main_calss mc;
//    mc.Hello();


// ===================================================================


//    Time t;
//    cout << sizeof(t) << endl;
//    t.Show();
//    Time t1(8, 30, 30);
//    t1.Show();
//    Time *p = &t1;
//    p->Show();
//    int hh, mm, ss;
//    cout << "Input Ur time: ";
//    cin >> hh >> mm >> ss;
//    Time t2(hh, mm, ss);
//    t2.Show();
//    print(t1, p);


//===================================================================


    ArrayName an1("Java Program");
    ArrayName an2("C++ Program");
    ArrayName an3("C# Program");
    cout << "\nBegin fAN() ..." << endl;
    fAN(an1, &an2, an3);
    cout << "END of fAN" << endl;
    an1.Show();
    an2.Show();
    an3.Show();
    an2 = an1;
    cout << "\nAfter assign an2 = an1;" << endl;
    an2.Show();
    cout << "Return to Operating System." << endl;
    return 0;
}