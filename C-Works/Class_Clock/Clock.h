#ifndef CLASS_CLOCK_CLOCK_H
#define CLASS_CLOCK_CLOCK_H


class Clock {
public:
    Clock(int newH, int newM, int newS);

    void setTime(int newH = 0, int newM = 0, int newS = 0);

    void showTime();

private:
    int hour, minute, second;
};


#endif //CLASS_CLOCK_CLOCK_H
