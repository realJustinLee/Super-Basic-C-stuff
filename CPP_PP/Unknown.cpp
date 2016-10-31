#include <iostream>

using namespace std;

const double *f1(const double ar[], int n);

const double *f2(const double [], int n);

const double *f3(const double *, int n);

int main() {
    double av[3] = {1112.3, 1542.6, 22277.9};
    const double *(*p1)(const double *, int)=f1;
    auto p2 = f2;
    cout << "Using pointers to functions:\n";
    cout << " Address Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
    const double *(*pa[3])(const double *, int)={f1, f2, f3};
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " Address Value\n";
    for (int i = 0; i < 3; ++i) {
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    }
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address Value\n";
    for (int i = 0; i < 3; ++i) {
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    }
    cout << "\nUsing pointers tp an array of pointers:\n";
    cout << " Address Value\n";
    auto pc = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    const double *(*(*pd)[3])(const double *, int) = &pa;
    const double int *pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    return 0;
}

const double *f1(const double *ar, int n) {
    return ar;
}

const double *f2(const double ar[], int n) {
    return ar + 1;
}

const double *f3(const double ar[], int n) {
    return ar + 2;
}