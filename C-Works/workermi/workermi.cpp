#include "workermi.h"
#include <iostream>

using namespace std;

//Worker methods

Worker::~Worker() {}

//protected methods
void Worker::Data() const {
    cout << "Name " << fullname << endl;
    cout << "Employee ID" << id << endl;
}

void Worker::Get() {
    getline(cin, fullname);
    cout << "Eneter worker's ID: ";
    cin >> id;
    while (cin.get() != '\n') {
        continue;
    }
}

//waiter methods

void Waiter::Set() {
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const {
    cout << "Category: Waiter\n";
    Worker::Data();
    Data();
}

//protected methods
void Waiter::Data() const {
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get() {
    cout << "Enter a waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n') {
        continue;
    }
}

//Singer method
char *Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto", "soprano", "bass", "braitone", "tenor"};

void Singer::Set() {
    cout << "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

//protected methods
void Singer::Data() const {
    cout << "Vacal range: " << pv[voice] << endl;
}

void Singer::Get() {
    cout << "Enter number of singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtypes; ++i) {
        cout << i << ": " << pv[i] << "  ";
        if (i % 4 == 3) {
            cout << endl;
        }
    }
    if (i % 4 != 0) {
        cout << '\n';
    }
    cin >> voice;
    while (cin.get() != '\n') {
        continue;
    }
}

//SingingWaiter methods
void SingingWaiter::Data() const {
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get() {
    Singer::Get();
    Waiter::Get();
}

void SingingWaiter::Set() {
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const {
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}