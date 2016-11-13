#include "solver.h"
#include <iostream>
#include <cmath>

using namespace std;

solver::solver(double a, double b, double c) {
    _a = a;
    _b = b;
    _c = c;
    flag = -3;
}

void solver::Set(double a, double b, double c) {
    _a = a;
    _b = b;
    _c = c;
    flag = -3;
}

double solver::GetA() const {
    return _a;
}

double solver::GetB() const {
    return _b;
}

double solver::GetC() const {
    return _c;
}

double solver::GetX1() const {
    return x1;
}

double solver::GetX2() const {
    return x2;
}

int solver::GetFalg() const {
    return flag;
}

void solver::ShowEquation() const {
    if (_a == 1) {
        cout << "x^2";
    } else {
        cout << _a << "x^2";
    }
    if (_b > 0) {
        cout << " + " << _b << "x";
    } else if (_b < 0) {
        cout << " - " << -_b << "x";
    }
    if (_c > 0) {
        cout << " + " << _c;
    } else if (_c < 0) {
        cout << " - " << -_c;
    }
}

void solver::ShowSolution() const {
    switch (flag) {
        case -3:
            cout << " not solved yet.";
            break;
        case -2:
            cout << " no real solution.";
            break;
        case -1:
            cout << " unsolvable.";
            break;
        case 0:
            cout << " x^1 function, Solution: "
                 << "x = " << x1;
            break;
        case 1:
            cout << " two same solutions: "
                 << "x1 = x2 = " << x1;
            break;
        case 2:
            cout << " two different solutions: "
                 << "x1 = " << x1
                 << " x2 = " << x2;
            break;
        case 3:
            cout << " count solutions every number works.";
            break;
    }
}

double solver::Delta() {
    return _b * _b - 4 * _a * _c;
}

int solver::Solve() {
    double delta;
    if (_a == 0) {
        if (_b == 0) {
            flag = (_c == 0) ? 3 : -1;
        } else {
            flag = 0;
            x1 = x2 = -_c / _b;
        }
    } else {
        delta = Delta();
        if (delta > 0) {
            flag = (delta > 0) ? 2 : 1;
            delta = sqrt(delta);
            x1 = (-_b + delta) / (2 * _a);
            x2 = (-_b - delta) / (2 * _a);
        } else {
            flag = -2;
        }
    }
}

