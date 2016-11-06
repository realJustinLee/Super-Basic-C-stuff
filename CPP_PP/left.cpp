#include <iostream>

using namespace std;

const int Arsize = 80;

char *left(const char *str, int n = 1) {
    if (n < 0) {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; ++i) {
        p[i] = str[i];
    }
    while (i <= n) {
        p[i++] = '\0';
    }
    return p;
}

int main() {
    char sample[Arsize];
    cout << "Enter a string:\n";
    cin.get(sample, Arsize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete[] (ps);
    ps = left(sample);
    cout << ps << endl;
    delete[] (ps);
    return 0;
}