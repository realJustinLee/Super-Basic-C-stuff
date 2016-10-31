#include <iostream>

using namespace std;

inline double square(double x) {
    return x * x;
}

int main() {
    double a, b, c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c << ",c square(c++)" << "\n";
    cout << "Now c = " << c << "\n";
    return 0;
}