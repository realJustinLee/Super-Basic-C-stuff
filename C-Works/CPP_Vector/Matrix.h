#ifndef CPP_VECTOR_MATRIX_H
#define CPP_VECTOR_MATRIX_H

#include <iostream>
#include "Vector.h"

using namespace std;

class Vector;

class Matrix {
public:
    Matrix(int Row = 0, int Col = 0);

    Matrix(const Matrix &mat);

    Matrix &operator=(const Matrix &mat);

    virtual ~Matrix();

    void Set();

    int GetRow() const, GetCol() const;

    void Show() const;

    friend Vector Multiply(const Matrix &mat, const Vector &vec);

private:
    int row, col;
    double *x;
};


#endif //CPP_VECTOR_MATRIX_H
