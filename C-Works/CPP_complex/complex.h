#ifndef CPP_COMPLEX_COMPLEX_H
#define CPP_COMPLEX_COMPLEX_H


class complex1 {
public:
    complex1(double REAL = 0, double IMAG = 0);

    double Real() const;

    double Imag() const;

    double Radius() const;

    double Angle() const;

    void Set1(double REAL, double IMAG);

    void Set2(double radius, double angle);

    void Show1();

    void Show2();

private:
    double real;
    double imag;
};

class complex2 {
public:
    complex2(double real = 0, double imag = 0);

    double Real() const;

    double Imag() const;

    double Radius() const;

    double Angle() const;

    void Set1(double REAL, double IMAG);

    void Set2(double Radius, double Angle);

    void Show1();

    void Show2();

private:
    double radius, angle;
};

#endif //CPP_COMPLEX_COMPLEX_H
