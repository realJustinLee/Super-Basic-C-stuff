#include <iostream>
#include <ctime>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main() {
    Vector vec(5);
    Matrix mat(4, 5);
    Vector result;
    time_t t;
    srand(time(&t));
    mat.Set();
    vec.Set();
    mat.Show();
    vec.Show();
    result = Multiply(mat, vec);
    cout << "The result is : ";
    result.Show();
    return 0;
}