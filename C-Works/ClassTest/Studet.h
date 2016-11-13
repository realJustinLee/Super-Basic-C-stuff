#ifndef CLASSTEST_STUDET_H
#define CLASSTEST_STUDET_H

#include <string>

using namespace std;


class Studet {
public:
    Studet(char *Id = "00000000", string Name = "NoName", char Gender = 'm', int Age = 20);

    Studet(string Id, char *pName = "Null", char Gender = 'f', int Age = 20);

    void Show() const;

private:
    char id[9];
    string name;
    char gender;
    int age;
};


#endif //CLASSTEST_STUDET_H
