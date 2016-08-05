#include <stdio.h>
#include <string.h>

struct students {
    int num;
    char name[10];
    int math, english, computer;
    double average;
};

void init_student(struct students *s, int n) {
    int i;
    for (i = 0; i < n; i++) {
        s[i].num = 0;
        strcpy(s[i].name, "Unknown");
        s[i].math = s[i].english = s[i].computer = 0;
        s[i].average = 0.0;
    }
}

int main(void) {
    struct students s[5];
    init_student(s, 5);
    return 0;
}