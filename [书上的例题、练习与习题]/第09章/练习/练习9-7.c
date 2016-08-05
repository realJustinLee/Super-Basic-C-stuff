#include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

double count_average(struct student s) {
    return (s.math + s.english + s.computer) / 3.0;
}

int main(void) {
    int i, j, index, n;
    struct student students[50], temp;
    printf("Input n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Input the info of NO.%d\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num);
        printf("name: ");
        scanf("%s", students[i].name);
        printf("math score: ");
        scanf("%d", &students[i].math);
        printf("english score: ");
        scanf("%d", &students[i].english);
        printf("computer score: ");
        scanf("%d", &students[i].computer);
        students[i].average = count_average(students[i]);
    }
    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = 0; j < n; j++) {
            if (students[j].average > students[i].average) {
                index = j;
            }
        }
        temp = students[index];
        students[index] = students[i];
        students[i] = temp;
    }
    printf("num\t name\t average\n");
    printf("%d\t%s\t%.2f\n"
                   "%d\t%s\t%.2f\n", students[0].num, students[0].name, students[0].average, students[n - 1].num,
           students[n - 1].name, students[n - 1].average);
    return 0;
}
