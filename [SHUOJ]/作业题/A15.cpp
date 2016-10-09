#include <iostream>
#include <iomanip>

using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int run_nian(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int raw_sum(int mm) {
    int sum = 0;
    for (int i = 0; i < mm; ++i) {
        sum = sum + month[i];
    }
    return sum;
}

int main() {
    int yyyy, mm, dd, day, i = 0;
    while (cin >> yyyy >> mm >> dd) {
        i++;
        mm--;
        day = dd + raw_sum(mm) + ((mm >= 2) ? run_nian(yyyy) : 0);
        mm++;
        printf("Case %d: %.2d/%.2d/%.4d, %d\n", i, mm, dd, yyyy, day);
    }
    return 0;
}

