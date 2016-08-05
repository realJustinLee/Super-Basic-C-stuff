#include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

int main(void) {
    int i, n;
    struct student s1;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input the student's number, name ,and course scores\n");
    for (i = 1; i <= n; i++) {
        printf("No.%d", i);
        scanf("%d%s%d%d%d", &s1.num, s1.name, &s1.math, &s1.english, &s1.computer);
        s1.average = (s1.math + s1.english + s1.computer) / 3.0;;
        printf("num:%d,name:%s,average:%.2f\n", s1.num, s1.name, s1.average);
    }
    return 0;
}
