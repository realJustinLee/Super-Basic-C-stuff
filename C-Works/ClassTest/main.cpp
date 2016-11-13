#include <iostream>
#include "Studet.h"

void test1() {
    Studet s1;
    Studet s2 = "00000001";
    Studet s3("00000001");
    string id("00000002");
    Studet s4 = id;
    Studet s5(id);
    s1.Show();
    s2.Show();
    s3.Show();
    s4.Show();
    s5.Show();
}

int main() {
    test1();
    return 0;
}