#ifndef CPP_VECTOR_VECTOR_H
#define CPP_VECTOR_VECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class Matrix;

class Vector {
public:
    Vector(int dimension = 0);

    Vector(const Vector &vec);

    Vector &operator=(const Vector &vec);

    virtual ~Vector();

    void Set();

    int GetDim() const;

    void Show() const;

    friend Vector Multiply(const Matrix &mat, const Vector &vec);

private:
    int n;
    double *x;
};


#endif //CPP_VECTOR_VECTOR_H
