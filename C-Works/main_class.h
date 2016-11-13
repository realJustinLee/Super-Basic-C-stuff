#ifndef C_WORKS_MAIN_CALSS_H
#define C_WORKS_MAIN_CALSS_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class main_class {
public:
    void Hello();
};


//===================================================================


//class Lixin {
//    Huangzhenzhen HZZ;
//private:
//    string Lixin;
//};
//
//class Huangzhenzhen {
//    Lixin Lx;
//private:
//    string Huangzhenzhen;
//};


//===================================================================


class Time {
public:
    Time(int HH = 0, int MM = 0, int SS = 0);

    void SetTime(int HH, int MM, int SS);

    int GetH() const;

    int GetM() const;

    int GetS() const;

    void Show() const;

private:
    int hh, mm, ss;
};


#endif //C_WORKS_MAIN_CALSS_H
