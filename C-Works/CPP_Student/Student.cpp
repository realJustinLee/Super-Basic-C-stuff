#include "Student.h"

Student::Student(char *Id, string Name, char Gender, int Age) {
    strncpy(id, Id, sizeof(id));
    id[sizeof(id) - 1] = '\0';
    name = Name;
    gender = (Gender == 'm' || Gender == 'm') ? 'M' : 'F';
    age = Age;
}

Student::Student(string Id, char *pName, char Gender, int Age) {
    strncpy(id, Id, sizeof(id));
    id[sizeof(id) - 1] = '\0';
    name = pName;
    gender = (Gender == 'm' || Gender == 'm') ? 'M' : 'F';
    age = Age;
}

void Student::Show() const {
    cout << setw(8) << id << " "
         << setw(8) << name << " "
         << (gender == 'M' ? "Male" : "Female")
         << " " << age << endl;
}