#include <iostream>
#include "Clock.h"

using namespace std;

int main() {
    Clock myClock(0, 0, 0);
    /*
    myClock.setTime();
    myClock.showTime();
    myClock.setTime(8, 30, 30);
    myClock.showTime();
    */
    myClock.showTime();
    myClock.setTime(8, 30, 30);
    return 0;
}