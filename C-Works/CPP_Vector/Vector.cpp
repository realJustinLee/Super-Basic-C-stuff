#include "Vector.h"

Vector::Vector(int dimension) {
    if (dimension == 0) {
        n = 0;
        x = NULL;
        return;
    }
    x = new double[n = dimension];
    for (int i = 0; i < n; ++i) {
        x[i] = 0;
    }
}

Vector::Vector(const Vector &vec) {
    x = NULL;
    if ((n = vec.n) != 0) {
        x = new double[n];
        for (int i = 0; i < n; ++i) {
            x[i] = vec.x[i];
        }
    }
}

Vector &Vector::operator=(const Vector &vec) {
    if (&vec == this) {
        return *this;
    }
    if (x != NULL) {
        delete[](x);
    }
    x = NULL;
    if ((n = vec.n) != 0) {
        x = new double[n];
        for (int i = 0; i < n; ++i) {
            x[i] = vec.x[i];
        }
    }
}

Vector::~Vector() {
    if (x != NULL) {
        delete[](x);
    }
}

void Vector::Set() {
    for (int i = 0; i < n; ++i) {
        x[i] = rand() % 10;
    }
}

int Vector::GetDim() const {
    return n;
}

void Vector::Show() const {
    if (n == 0) {
        return;
    }
    cout << "(" << x[0];
    for (int i = 1; i < n; ++i) {
        cout << ", " << x[i];
    }
    cout << ")" << endl;
}

Vector Multiply(const Matrix &mat, const Vector &vec) {
    if (mat.col != vec.n) {
        return Vector(0);
    }
    Vector result(mat.row);
    for (int i = 0; i < mat.row; ++i) {
        for (int j = 0; j < vec.n; ++j) {
            result.x[i] += mat.x[i * mat.col + j] * vec.x[j];
        }
    }
    return result;
}