#include <iostream>

using namespace std;

void jia_mi(char *str, int m) {
    for (int i = 0; str[i]; ++i) {
        if (((str[i] - 64) > (26 - m) && str[i] < 91) || (str[i] - 96) > (26 - m)) {
            str[i] += (m - 26);
        } else {
            str[i] += m;
        }
    }
    cout << str << endl;
}

int main() {
    int n, m;
    char str[100];
    while (cin >> n >> m >> str) {
        jia_mi(str, m);
    }
    return 0;
}