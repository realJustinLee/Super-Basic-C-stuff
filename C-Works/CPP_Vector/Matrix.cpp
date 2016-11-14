#include "Matrix.h"

Matrix::Matrix(int Row, int Col) {
    if (Row < 0 || Col <= 0) {
        row = col = 0;
        return;
    }
    row = Row;
    col = Col;
    x = new double[row * col];
    for (int i = row * col - 1; i >= 0; i--) {
        x[i] = 0;
    }
}

Matrix::Matrix(const Matrix &mat) {
    if (mat.row == 0 || mat.col == 0) {
        row = col = 0;
        x = NULL;
        return;
    }
    row = mat.row;
    col = mat.col;
    x = new double[row * col];
    for (int i = row * col - 1; i >= 0; i--) {
        x[i] = mat.x[i];
    }
}

Matrix &Matrix::operator=(const Matrix &mat) {
    if (&mat == this) {
        return *this;
    }
    if (x != NULL) {
        delete[](x);
    }
    if (mat.row == 0 || mat.col == 0) {
        row = col = 0;
        x = NULL;
        return *this;
    }
    row = mat.row;
    col = mat.col;
    x = new double[row * col];
    for (int i = row * col - 1; i >= 0; i--) {
        x[i] = mat.x[i];
    }
    return *this;
}

Matrix::~Matrix() {
    if (x != NULL) {
        delete[](x);
    }
}

void Matrix::Set() {
    for (int i = row * col - 1; i >= 0; i--) {
        x[i] = rand() % 10;
    }
}

int Matrix::GetRow() const {
    return row;
}

int Matrix::GetCol() const {
    return col;
}

void Matrix::Show() const {
    for (int i = 0; i < row; ++i) {
        cout << "[" << x[i * col];
        for (int j = 1; j < col; ++j) {
            cout << " " << x[i * col + j];
        }
        cout << "]" << endl;
    }
}