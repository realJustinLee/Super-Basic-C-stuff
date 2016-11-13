#include <iostream>
#include "Clock.h"

using namespace std;

Clock::Clock(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}