#include "main_class.h"

//main_class

void main_class::Hello() {
    cout << "Hello" << endl;
}

//End of main_calss



//===================================================================



//Time

Time::Time(int HH, int MM, int SS) {
    hh = HH;
    mm = MM;
    ss = SS;
}

void Time::SetTime(int HH, int MM, int SS) {
    hh = HH;
    mm = MM;
    ss = SS;
}

int Time::GetH() const {
    return hh;
}

int Time::GetM() const {
    return mm;
}

int Time::GetS() const {
    return ss;
}

void Time::Show() const {
    cout << setfill('0') << setw(2) << hh
         << ":" << setw(2) << mm
         << ":" << setw(2) << ss
         << setfill(' ') << endl;
}

//End Time



//===================================================================



//