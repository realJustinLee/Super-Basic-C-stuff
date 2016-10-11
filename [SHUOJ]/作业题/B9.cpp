#include <iostream>
#include <cstring>

using namespace std;

void hui_wen(char *str) {
    cout << str;
    int n = strlen(str);
    if (n % 2) {
        for (int i = n - 2; i >= 0; --i) {
            cout << str[i];
        }
    } else {
        for (int i = n - 1; i >= 0; --i) {
            cout << str[i];
        }
    }
    cout << "\"\n";
}

int main() {
    int i = 0, n;
    char str[100];
    cin >> n;
    cin.get();
    while (n) {
        n--;
        i++;
        cin.getline(str, 100);
        cout << "Case " << i << ": \"";
        hui_wen(str);
    }
    return 0;
}