#include <iostream>

using namespace std;

const char numbers[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void exchange(int num, int base) {
    char *str = new char[17];
    int i;
    for (i = 0; num; ++i) {
        *(str + i) = numbers[num % base];
        num = num / base;
    }
    i--;
    for (; i >= 0; --i) {
        cout << *(str + i);
    }
    cout << endl;
    delete str;
}

int main() {
    int i = 0, n, b;
    while (cin >> n >> b) {
        i++;
        cout << "Case " << i << ": ";
        exchange(n, b);
    }
    return 0;
}