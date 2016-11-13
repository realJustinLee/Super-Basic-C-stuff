#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;

complex1::complex1(double REAL, double IMAG) {
    real = REAL;
    imag = IMAG;
}

double complex1::Real() const {
    return real;
}

double complex1::Imag() const {
    return imag;
}

double complex1::Radius() const {
    return sqrt(real * real + imag * imag);
}

double complex1::Angle() const {
    return atan(imag / real);
}

void complex1::Set1(double REAL, double IMAG) {
    real = REAL;
    imag = IMAG;
}

void complex1::Set2(double radius, double angle) {
    real = radius * cos(angle);
    imag = radius * sin(angle);
}

void complex1::Show1() {
    cout << real;
    if (imag > 0) {
        cout << " + " << imag << " i" << endl;
    } else if (imag < 0) {
        cout << " - " << -imag << " i" << endl;
    }
}

void complex1::Show2() {
    double radius, angle;
    radius = sqrt(real * real + imag * imag);
    angle = atan(imag / real);
    if (radius > 0) {
        cout << radius << " * exp(" << angle << "i)";

    } else {
        cout << "0";
    }
}


//===================================================================


complex2::complex2(double real, double imag) {
    radius = sqrt(real * real + imag * imag);
    angle = atan(imag / real);
}

double complex2::Real() const {
    return radius * cos(angle);
}

double complex2::Imag() const {
    return radius * sin(angle);
}

double complex2::Radius() const {
    return radius;
}

double complex2::Angle() const {
    return angle;
}

void complex2::Set1(double REAL, double IMAG) {
    radius = sqrt(REAL * REAL + IMAG * IMAG);
    angle = atan(IMAG / REAL);
}

void complex2::Set2(double Radius, double Angle) {
    radius = Radius;
    angle = Angle;
}

void complex2::Show1() {
    double real, imag;
    real = radius * cos(angle);
    imag = radius * sin(angle);
    cout << real;
    if (imag > 0) {
        cout << " + " << imag << " i" << endl;
    } else if (imag < 0) {
        cout << " - " << -imag << " i" << endl;
    }
}

void complex2::Show2() {
    if (radius > 0) {
        cout << radius << " * exp(" << angle << "i)";

    } else {
        cout << "0";
    }
}
