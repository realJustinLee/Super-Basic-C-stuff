#include <iostream>
#include <string>

using namespace std;

//void print(const Time &t, const Time *p) {
//    t.Show();
//    p->Show();
//}


//===================================================================


//class ArrayName {
//public:
//    ArrayName(const char *pName = "NoName") {
//        strncpy(name, pName, sizeof(name));
//        name[sizeof(name) - 1] = '\0';
//        cout << "Constructing an object of Array name ["
//             << name << "]." << endl;
//    }
//
//    ArrayName(const ArrayName &an) {
//        strcpy(name, an.name);
//        cout << "COPY Constructing an object of Array name ["
//             << name << "]." << endl;
//    }
//
//    ~ArrayName() {
//        cout << "Destructing an object of Array name ["
//             << name << "]." << endl;
//    }
//
//    void ChangeName(const char *pName) {
//        cout << "Change ArrayName [" << name;
//        strncpy(name, pName, sizeof(name));
//        name[sizeof(name) - 1] = '\0';
//        cout << "]-[" << name << "]." << endl;
//    }
//
//    void Show() const {
//        cout << "ArrayName: [" << name << "]." << endl;
//    }
//
//private:
//    char name[10];
//};

//ArrayName fAN(ArrayName x, ArrayName *p, ArrayName &r) {
//    cout << "In fAN() ..." << endl;
//    x.ChangeName("Architecture");
//    p->ChangeName("Software");
//    r.ChangeName("Application");
//    x.Show();
//    p->Show();
//    r.Show();
//    cout << "Return form fAN() ..." << endl;
//    return x;
//}


//====================================================================


//class PointName {
//public:
//    PointName(const char *pName = "NoName") {
//        name = new char[strlen(pName) + 1];
//        strcpy(name, pName);
//        cout << "Constructing an object of PointName \""
//             << name << "\"." << endl;
//    }
//
//    PointName(const PointName &pn) {
//        name = new char[strlen(pn.name) + 1];
//        strcpy(name, pn.name);
//        cout << "COPY Constructing an object of PointName \""
//             << name << "\"." << endl;
//    }
//
//    ~PointName() {
//        cout << "Destructing an object of PointName \""
//             << name << "\"." << endl;
//        if (name != NULL) {
//            delete[](name);
//        }
//    }
//
//    PointName &operator=(const PointName &pn) {
//        cout << "ASIGN an object of PointName \""
//             << pn.name << "\"." << endl;
//        if (&pn != this) {
//            if (name) {
//                delete[](name);
//            }
//            name = new char[strlen(pn.name) + 1];
//            strcpy(name, pn.name);
//        }
//        return *this;
//    }
//
//    void SwiftName() {
//        cout << "Swift \"" << name << "\"->\"";
//        strcpy(name, "Swift");
//        cout << name << "\"." << endl;
//    }
//
//    void Show() const {
//        cout << "\"" << name << "\"" << endl;
//    }
//
//private:
//    char *name;
//};


//====================================================================


//class A {
//public:
//    A(int x) : a(x), b(10086) {
//
//    }
//
//    void Show() const {
//        cout << a << " " << b;
//    }
//
//private:
//    int a, b;
//};


//===================================================================


//class StringName {
//public:
//    StringName(char *pName = "NoName") : name(pName) {
//        cout << "Constructing an object of StringName |"
//             << name << "|." << endl;
//    }
//
//    StringName(const StringName &sn) : name(sn.name) {
//        cout << "COPY Constructing an object of StringName |"
//             << name << "|." << endl;
//    }
//
//    StringName &operator=(const StringName &sn) {
//        name = sn.name;
//        return *this;
//    }
//
//    ~StringName() {
//        cout << "Destructing an object of StringName |"
//             << name << "|." << endl;
//    }
//
//    void ChangeName(const char *pName) {
//        cout << "Change StringName |" << name << "|->|";
//        name = pName;
//        cout << name << "|." << endl;
//    }
//
//    void Show() const {
//        cout << "StringName: |" << name << "|." << endl;
//    }
//
//private:
//    string name;
//};
//
//StringName fSN(StringName x, StringName *p, StringName &r) {
//    cout << "In fSN() ..." << endl;
//    x.ChangeName("Architecture");
//    p->ChangeName("Software");
//    r.ChangeName("Application");
//    x.Show();
//    p->Show();
//    r.Show();
//    cout << "Return from fSN() ..." << endl;
//    return x;
//}


//===================================================================





//===================================================================


int main() {
//    main_calss mc;
//    mc.Hello();


//====================================================================


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


//    ArrayName an1("Java Program");
//    ArrayName an2("C++ Program");
//    ArrayName an3("C# Program");
//    cout << "\nBegin fAN() ..." << endl;
//    fAN(an1, &an2, an3);
//    cout << "END of fAN" << endl;
//    an1.Show();
//    an2.Show();
//    an3.Show();
//    an2 = an1;
//    cout << "\nAfter assign an2 = an1;" << endl;
//    an2.Show();
//    cout << "Return to Operating System." << endl;


//===================================================================


//    char str[10] = "Tom", *ptr = new char[10];
//    strcpy(ptr, "Jerry");
//    PointName pn1(str), pn2(ptr), pn3("Snoopy");
//    pn1.Show();
//    pn2.Show();
//    pn3.Show();
//    cout << "Do something..." << endl;
//    strcpy(str, "Winne");
//    pn1.Show();
//    delete[](ptr);
//    pn2.Show();
//    pn3.SwiftName();
//    pn3.Show();
//    PointName pn4 = pn1;
//    pn2 = pn1;
//    pn4.Show();
//    pn2.Show();
//    cout << "Return to Operating System." << endl;


//===================================================================


//    A a1(10);
//    a1.Show();



//===================================================================


//    StringName sn1("Java Program");
//    StringName sn2("C++ Program");
//    StringName sn3("c# Program");
//    cout << "\nBegin fSN() ..." << endl;
//    fSN(sn1, &sn2, sn3);
//    cout << "End of fSN() ...\n" << end;
//    sn1.Show();
//    sn2.Show();
//    sn3.Show();
//    sn2 = sn1;
//    cout << "\nAfter assign sn2 = sn1;" << endl;
//    sn2.Show();
//    cout << "Return to Operating System." << endl;


//===================================================================





//===================================================================


    return 0;
}