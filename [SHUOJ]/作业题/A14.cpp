#include <iostream>
#include <iomanip>

using namespace std;

void bubble(double *a, int n) {
    double t;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

double special_average(double *a, int n) {
    double sum = 0;
    for (int i = 1; i < n - 1; ++i) {
        sum = sum + a[i];
    }
    return sum / (n - 2);
}

int main() {
    int T, n;
    cin >> T;
    while (T) {
        n = 0;
        T--;
        cin >> n;
        double arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bubble(arr, n);
        cout << setprecision(2) << fixed
             << arr[0] << ","
             << arr[n - 1] << ","
             << special_average(arr, n) << endl;
    }
    return 0;
}