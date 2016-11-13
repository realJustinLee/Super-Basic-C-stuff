#include "Studet.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

Studet::Studet(char *Id, string Name, char Gender, int Age) {

    strncpy(id, Id, sizeof(id));
    id[sizeof(id) - 1] = '\0';
    name = Name;
    gender = (Gender == 'M' || Gender == 'm') ? 'm' : 'f';
    age = Age;
}

Studet::Studet(string Id, char *pName, char Gender, int Age) {
    strncpy(id, Id.c_str(), sizeof(id));
    id[sizeof(id) - 1] = '\0';
    name = pName;
    gender = (Gender == 'M' || Gender == 'm') ? 'm' : 'f';
    age = Age;
}

void Studet::Show() const {
    cout << setw(8) << id << " " << setw(8) << name << " " << (gender == 'm' ? "Male" : "Female") << " " << age << endl;
}