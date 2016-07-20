#include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};
const int MaxSize = 50;
int Count = 0;

void new_student(struct student students[]) {
    struct student s;
    if (Count == MaxSize) {
        printf("The array is full!\n");
        return;
    }
    printf("Input the student's num:");
    scanf("%d", &s.num);
    printf("Input the student's name:");
    scanf("%s", s.name);
    printf("Input the student's math score:");
    scanf("%d", &s.math);
    printf("Input the student's english score:");
    scanf("%d", &s.english);
    printf("Input the student's computer score:");
    scanf("%d", &s.computer);
    printf("YES\n");
    s.average = (s.math + s.english + s.computer) / 3.0;
    students[Count] = s;
    Count++;
}

void search_student(struct student students[], int num) {
    int i, flag = 0;
    if (Count == 0) {
        printf("Count of students is zero!\n");
        return;
    }
    for (i = 0; i < Count; i++) {
        if (students[i].num == num) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("num:%d,", students[i].num);
        printf("name:%s,", students[i].name);
        printf("math:%d,", students[i].math);
        printf("english:%d,", students[i].english);
        printf("computer:%d,", students[i].computer);
        printf("average:%.2lf\n", students[i].average);
    }
    else {
        printf("Not Found!\n");
    }
}

void output_student(struct student students[]) {
    int i;
    if (Count == 0) {
        printf("Count of students is zero!\n");
        return;
    }
    printf("num\t name\t math\t english\t computer\t average\n");
    for (i = 0; i < Count; i++) {
        printf("%d\t", students[i].num);
        printf("%s\t", students[i].name);
        printf("%d\t", students[i].math);
        printf("%d\t", students[i].english);
        printf("%d\t", students[i].computer);
        printf("%.2lf\n", students[i].average);
    }
}

int main(void) {
    int choice, num;
    struct student students[MaxSize];
    do {
        printf("choice: 1:new 2:search 3:output 0:exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                new_student(students);
                break;
            case 2:
                printf("Please input the student's number:");
                scanf("%d", &num);
                search_student(students, num);
                break;
            case 3:
                output_student(students);
                break;
            case 0:
                break;
            default:
                break;
        }
    } while (choice != 0);
    printf("END!\n");
    return 0;
}